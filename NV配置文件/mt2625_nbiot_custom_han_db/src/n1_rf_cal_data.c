/* Copyright Statement:
*
* (C) 2005-2017  MediaTek Inc. All rights reserved.
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
* Without the prior written permission of MediaTek and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
* You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
* if you have agreed to and been bound by the applicable license agreement with
* MediaTek ("License Agreement") and been granted explicit permission to do so within
* the License Agreement ("Permitted User").  If you are not a Permitted User,
* please cease any access or use of MediaTek Software immediately.
* BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
* THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
* ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
* WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
* NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
* SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
* SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
* THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
* THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
* CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
* SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
* STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
* CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
* AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
* OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
* MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*/
/*
*******************************************************************************/
/***************************************************************************//**
*  Includes
*******************************************************************************/
//Standard headers
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>

//Other modules
#include "nb_custom_data.h"
#include "nb_calib_defaults.h"
#include "nb_custom_defaults.h"
#include "nb_drdi_data.h"

//Own header
#include "n1_rf_cal_data.h"


/******************************************************************************
*  PRIVATE CONSTANTS
*******************************************************************************/

/******************************************************************************
*  PRIVATE MACROS
*******************************************************************************/

/* Default calibration data for AFC. */
#define NB_CAL_DATA_DEFAULT_AFC(_hw_var) \
&(const N1RfAfcCalData)\
{ \
  NB_CAL_DATA_##_hw_var##_DEFAULT_CAP_ID, \
  NB_CAL_DATA_##_hw_var##_DEFAULT_INIT_PPM, \
}

/* Default data for EXT. */
#define NB_DATA_DEFAULT_EXT(_hw_var) \
&(const N1RfExtData)\
{\
  N1_RF_EXT_NVDM_ITEM_VERSION, \
  NB_DATA_##_hw_var##_DEFAULT_RF_ADC, \
  NB_DATA_##_hw_var##_DEFAULT_NTC_ADC, \
  NB_DATA_##_hw_var##_DEFAULT_RF_temp, \
  NB_DATA_##_hw_var##_DEFAULT_NTC_temp, \
  {\
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  (uint32_t)0, \
  }, \
}

/* Default calibration data per band for Rx Path loss. */
#define NB_CAL_DATA_RXPL_DEFAULT(_hw_var, _band) \
&(const N1RfRxCalData)\
{ \
  (uint8_t)_band, \
  (uint8_t)0, \
  NB_CAL_DATA_##_hw_var##_RX_PL_FREQ_POINTS_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_RX_PL_FREQ_LNA_COMP_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_RX_PL_TEMP_COMP_BAND_##_band, \
  (uint16_t)0 \
}

/* Default calibration data per band for transmit power control.*/
#define NB_CAL_DATA_TPC_DEFAULT(_hw_var, _band) \
&(const N1RfTpcCalData )\
{ \
  (uint8_t)_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TX_PA_VCC_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TX_POWER_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TX_PA_MODE_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TX_PA_GAIN_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TX_PGA_GAIN_OFFSET_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_FREQ_POINTS_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_##_band, \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
/* Default calibration data per band for transmit power control for single tone TPC.*/
#define NB_CAL_DATA_SINGLE_TPC_DEFAULT(_hw_var, _band) \
&(const N1RfSingleTpcCalData )\
{ \
  (uint8_t)_band, \
  NB_CAL_DATA_##_hw_var##_SINGLE_TPC_TX_PA_VCC_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_SINGLE_TPC_TX_POWER_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_SINGLE_TPC_TX_PA_MODE_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_SINGLE_TPC_TX_PA_GAIN_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TX_PGA_GAIN_OFFSET_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_FREQ_POINTS_BAND_##_band, \
  NB_CAL_DATA_##_hw_var##_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_##_band, \
}
#endif

const int16_t  nb_cal_data_temp_reciprocal_slope[NB_CAL_TEMPERATURE_SEG_COUNT] =
{ \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_1, \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_2, \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_3, \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_4, \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_5, \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_6, \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_7, \
    NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_8  \
};

/* Default calibration data for temperature sensor. */
static const N1RfThermalCalData default_adc_data =
{ \
  NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_OFFSET, \
  { \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_1, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_2, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_3, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_4, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_5, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_6, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_7, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_8, \
    NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_HIGH_BOUND_SEG_8, \
  }, \
  { \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_1, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_2, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_3, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_4, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_5, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_6, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_7, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_8, \
    NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_HIGH_BOUND_SEG_8, \
  }, \
  { \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_1, \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_2, \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_3, \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_4, \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_5, \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_6, \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_7, \
    NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_8, \
  }, \
  (uint16_t)0 \
};

#define NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT  &default_adc_data

/* Default maximum power reduction - test data */
#define NB_CAL_DATA_TX_MPR_DEFAULT(_hw_var, _band) \
&(const  N1RfTxMprData)\
{ \
  (uint8_t)_band, \
  (uint8_t)0, \
  NB_CAL_DATA_##_hw_var##_TX_MPR_DEFAULT_BAND_##_band, \
}

/* Default PA bias control data */

#define NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(_hw_var, _band) \
&(const N1RfTxPABiasData)\
{ \
  { \
    { \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MID_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MID_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
      { \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
    }, \
  }, \
  (uint8_t)_band, \
  (uint8_t)0  \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM

#define NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(_hw_var, _band) \
&(const N1RfTxSinglePABiasData)\
{ \
  { \
    { \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MID_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MID_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MID_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MID_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MID_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MID_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
      { \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
    }, \
  }, \
  (uint8_t)_band, \
  (uint8_t)0  \
}

#endif

/* Default PA bias control data */

#define NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(_hw_var, _band) \
&(const N1RfTxPABiasData)\
{ \
  { \
    { \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
      { \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
    }, \
  }, \
  (uint8_t)_band, \
  (uint8_t)0 \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM

#define NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(_hw_var, _band) \
&(const N1RfTxSinglePABiasData)\
{ \
  { \
    { \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MID_HIGH_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MID_HIGH_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MID_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MID_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MID_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MID_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
      { \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_LOW_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_LOW_DEFAULT_BAND_##_band, \
        } \
      }, \
    }, \
  }, \
  (uint8_t)_band, \
  (uint8_t)0 \
}

#endif

/* Default PA bias control data */
#define NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(_hw_var, _band) \
&(const N1RfTxMaxPwrPABiasData)\
{ \
  { \
    { \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MAX_PWR_12T_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MAX_PWR_12T_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MAX_PWR_6T_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MAX_PWR_6T_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MAX_PWR_3TB_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MAX_PWR_3TB_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MAX_PWR_3TC_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MAX_PWR_3TC_DEFAULT_BAND_##_band, \
        } \
      }, \
      { \
        { \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL1_MAX_PWR_1T_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_PWR_CTRL2_MAX_PWR_1T_DEFAULT_BAND_##_band, \
        } \
      }, \
    }, \
  }, \
  (uint8_t)_band, \
  (uint8_t)0 \
}

/* Default PA bias control data */
#define NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(_hw_var, _band) \
&(const N1RfTxMaxPwrPABiasData)\
{ \
  { \
    { \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MAX_PWR_12T_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MAX_PWR_12T_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MAX_PWR_6T_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MAX_PWR_6T_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MAX_PWR_3TB_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MAX_PWR_3TB_DEFAULT_BAND_##_band, \
        } \
      }, \
      {  \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MAX_PWR_3TC_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MAX_PWR_3TC_DEFAULT_BAND_##_band, \
        } \
      }, \
      { \
        { \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA1_MAX_PWR_1T_DEFAULT_BAND_##_band, \
          NB_CAL_DATA_##_hw_var##_PA_BIAS_GPIO_DATA2_MAX_PWR_1T_DEFAULT_BAND_##_band, \
        } \
      }, \
    }, \
  }, \
  (uint8_t)_band, \
  (uint8_t)0 \
}

#define NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(_hw_var) \
&(const N1RfTpcCtrlData)\
{ \
  (uint8_t)NB_CAL_DATA_##_hw_var##_TX_TPC_FREEZE_MODE_DISABLED, \
  (uint8_t)NB_CAL_DATA_##_hw_var##_TX_TPC_CTRL_BAND_DEFAULT, \
  (uint8_t)NB_CAL_DATA_##_hw_var##_TX_TPC_CTRL_PA_STAGE_DEFAULT, \
  (uint8_t)NB_CAL_DATA_##_hw_var##_TX_TPC_CTRL_PGA_STAGE_DEFAULT, \
  (int16_t)NB_CAL_DATA_##_hw_var##_TX_TPC_CTRL_GTPC_BACKOFF_DEFAULT, \
  (uint16_t)0 \
}

/* Default calibration data header */
static const N1RfCalDataHeader default_header_data =
{ \
  (uint16_t)NB_CAL_DATA_HEADER_STATUS_DEFAULT, \
  (uint8_t)NB_CAL_DATA_HEADER_DB_VERSION_MAJOR_DEFAULT, \
  (uint8_t)NB_CAL_DATA_HEADER_DB_VERSION_MINOR_DEFAULT, \
  {  \
    (uint32_t)NB_CAL_DATA_HEADER_BANDS_RX_DEFAULT_1, \
    (uint32_t)NB_CAL_DATA_HEADER_BANDS_RX_DEFAULT_2, \
    (uint32_t)NB_CAL_DATA_HEADER_BANDS_RX_DEFAULT_3  \
  }, \
  {  \
    (uint32_t)NB_CAL_DATA_HEADER_BANDS_TX_DEFAULT_1, \
    (uint32_t)NB_CAL_DATA_HEADER_BANDS_TX_DEFAULT_2, \
    (uint32_t)NB_CAL_DATA_HEADER_BANDS_TX_DEFAULT_3  \
  }, \
  (uint32_t)NB_CAL_DATA_HEADER_UE_SW_VERSION_DEFAULT, \
  (uint32_t)NB_CAL_DATA_HEADER_META_SW_VERSION_DEFAULT \
};

#define NB_CAL_DATA_HEADER_DEFAULT &default_header_data

/******************************************************************************
*  PRIVATE DATA TYPES
*******************************************************************************/


/******************************************************************************
*  PRIVATE VARIABLES
*******************************************************************************/
/* Default RF calibration data for HW Varian*/
#ifdef NB_RF_CUSTOM_SINGLE_PA
static const struct N1RfDefaultCalDatabase  rf_hw_var0_default_cal_db = 
{
  NB_CAL_DATA_DEFAULT_AFC(HW_VAR0),
  {
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 1), /* Band 1 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 2), /* Band 2 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 3), /* Band 3 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 4), /* Band 4 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 5), /* Band 5 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 8), /* Band 8 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 11), /* Band 11 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 12), /* Band 12 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 13), /* Band 13 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 14), /* Band 14 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 17), /* Band 17 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 18), /* Band 18 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 19), /* Band 19 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 20), /* Band 20 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 21), /* Band 21 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 25), /* Band 25 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 26), /* Band 26 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 28), /* Band 28 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 31), /* Band 31 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 66), /* Band 66 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 70), /* Band 70 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 71), /* Band 71 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 72), /* Band 72 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 73), /* Band 73 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 74), /* Band 74 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR0, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 1), /* Band 1 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 2), /* Band 2 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 3), /* Band 3 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 4), /* Band 4 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 5), /* Band 5 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 8), /* Band 8 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 11), /* Band 11 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 12), /* Band 12 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 13), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 14), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 17), /* Band 17 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 18), /* Band 18 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 19), /* Band 19 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 20), /* Band 20 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 21), /* Band 21 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 25), /* Band 25 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 26), /* Band 26 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 28), /* Band 28 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 31), /* Band 31 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 66), /* Band 66 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 70), /* Band 70 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 71), /* Band 71 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 72), /* Band 72 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 73), /* Band 73 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 74), /* Band 74 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR0, 85), /* Band 85 */
  },
  NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT,
  {
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 1), /* Band 1 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 2), /* Band 2 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 3), /* Band 3 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 4), /* Band 4 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 5), /* Band 5 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 8), /* Band 8 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 11), /* Band 11 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 12), /* Band 12 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 13), /* Band 13 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 14), /* Band 14 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 17), /* Band 17 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 18), /* Band 18 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 19), /* Band 19 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 20), /* Band 20 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 21), /* Band 21 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 25), /* Band 25 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 26), /* Band 26 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 28), /* Band 28 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 31), /* Band 31 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 66), /* Band 66 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 70), /* Band 70 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 71), /* Band 71 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 72), /* Band 72 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 73), /* Band 73 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 74), /* Band 74 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR0, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 1), /* Band 1 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 2), /* Band 2 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 3), /* Band 3 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 4), /* Band 4 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 5), /* Band 5 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 8), /* Band 8 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 11), /* Band 11 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 12), /* Band 12 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 13), /* Band 13 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 14), /* Band 14 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 17), /* Band 17 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 18), /* Band 18 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 19), /* Band 19 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 20), /* Band 20 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 21), /* Band 21 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 25), /* Band 25 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 26), /* Band 26 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 28), /* Band 28 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 31), /* Band 31 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 66), /* Band 66 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 70), /* Band 70 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 71), /* Band 71 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 72), /* Band 72 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 73), /* Band 73 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 74), /* Band 74 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 1), /* Band 1 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 2), /* Band 2 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 3), /* Band 3 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 4), /* Band 4 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 5), /* Band 5 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 8), /* Band 8 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 11), /* Band 11 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 12), /* Band 12 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 13), /* Band 13 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 14), /* Band 14 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 17), /* Band 17 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 18), /* Band 18 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 19), /* Band 19 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 20), /* Band 20 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 21), /* Band 21 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 25), /* Band 25 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 26), /* Band 26 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 28), /* Band 28 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 31), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 66), /* Band 66 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 70), /* Band 70 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 71), /* Band 71 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 72), /* Band 72 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 73), /* Band 73 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 74), /* Band 74 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 85), /* Band 85 */
  },
  NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(HW_VAR0),
  NB_CAL_DATA_HEADER_DEFAULT,
  NB_DATA_DEFAULT_EXT(HW_VAR0),
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
  {
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 14), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR0, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 14), /* Band 14 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR0, 85), /* Band 85 */
    },
#endif
};
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
/* Default RF calibration data for HW Variant */
static const struct N1RfDefaultCalDatabase  rf_hw_var1_default_cal_db = 
{
  NB_CAL_DATA_DEFAULT_AFC(HW_VAR1),
  {
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 1), /* Band 1 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 2), /* Band 2 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 3), /* Band 3 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 4), /* Band 4 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 5), /* Band 5 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 8), /* Band 8 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 11), /* Band 11 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 12), /* Band 12 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 13), /* Band 13 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 14), /* Band 14 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 17), /* Band 17 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 18), /* Band 18 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 19), /* Band 19 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 20), /* Band 20 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 21), /* Band 21 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 25), /* Band 25 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 26), /* Band 26 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 28), /* Band 28 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 31), /* Band 31 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 66), /* Band 66 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 70), /* Band 70 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 71), /* Band 71 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 72), /* Band 72 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 73), /* Band 73 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 74), /* Band 74 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR1, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 1), /* Band 1 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 2), /* Band 2 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 3), /* Band 3 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 4), /* Band 4 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 5), /* Band 5 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 8), /* Band 8 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 11), /* Band 11 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 12), /* Band 12 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 13), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 14), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 17), /* Band 17 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 18), /* Band 18 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 19), /* Band 19 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 20), /* Band 20 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 21), /* Band 21 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 25), /* Band 25 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 26), /* Band 26 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 28), /* Band 28 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 31), /* Band 31 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 66), /* Band 66 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 70), /* Band 70 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 71), /* Band 71 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 72), /* Band 72 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 73), /* Band 73 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 74), /* Band 74 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR1, 85), /* Band 85 */
  },
  NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT,
  {
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 1), /* Band 1 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 2), /* Band 2 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 3), /* Band 3 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 4), /* Band 4 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 5), /* Band 5 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 8), /* Band 8 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 11), /* Band 11 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 12), /* Band 12 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 13), /* Band 13 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 14), /* Band 14 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 17), /* Band 17 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 18), /* Band 18 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 19), /* Band 19 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 20), /* Band 20 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 21), /* Band 21 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 25), /* Band 25 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 26), /* Band 26 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 28), /* Band 28 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 31), /* Band 31 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 66), /* Band 66 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 70), /* Band 70 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 71), /* Band 71 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 72), /* Band 72 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 73), /* Band 73 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 74), /* Band 74 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR1, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 1), /* Band 1 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 2), /* Band 2 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 3), /* Band 3 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 4), /* Band 4 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 5), /* Band 5 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 8), /* Band 8 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 11), /* Band 11 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 12), /* Band 12 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 13), /* Band 13 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 14), /* Band 14 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 17), /* Band 17 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 18), /* Band 18 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 19), /* Band 19 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 20), /* Band 20 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 21), /* Band 21 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 25), /* Band 25 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 26), /* Band 26 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 28), /* Band 28 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 31), /* Band 31 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 66), /* Band 66 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 70), /* Band 70 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 71), /* Band 71 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 72), /* Band 72 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 73), /* Band 73 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 74), /* Band 74 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 1), /* Band 1 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 2), /* Band 2 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 3), /* Band 3 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 4), /* Band 4 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 5), /* Band 5 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 8), /* Band 8 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 11), /* Band 11 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 12), /* Band 12 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 13), /* Band 13 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 14), /* Band 14 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 17), /* Band 17 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 18), /* Band 18 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 19), /* Band 19 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 20), /* Band 20 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 21), /* Band 21 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 25), /* Band 25 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 26), /* Band 26 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 28), /* Band 28 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 31), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 66), /* Band 66 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 70), /* Band 70 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 71), /* Band 71 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 72), /* Band 72 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 73), /* Band 73 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 74), /* Band 74 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 85), /* Band 85 */
  },
  NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(HW_VAR1),
  NB_CAL_DATA_HEADER_DEFAULT,
  NB_DATA_DEFAULT_EXT(HW_VAR1),
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
  {
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 14), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR1, 85), /* Band 85 */
  },
 {
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 14), /* Band 14 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR1, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR1, 85), /* Band 85 */
 },
#endif
};
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
/* Default RF calibration data for HW Variant 1 */
static const struct N1RfDefaultCalDatabase  rf_hw_var2_default_cal_db =
{
  NB_CAL_DATA_DEFAULT_AFC(HW_VAR2),
  {
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 1), /* Band 1 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 2), /* Band 2 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 3), /* Band 3 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 4), /* Band 4 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 5), /* Band 5 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 8), /* Band 8 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 11), /* Band 11 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 12), /* Band 12 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 13), /* Band 13 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 14), /* Band 14 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 17), /* Band 17 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 18), /* Band 18 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 19), /* Band 19 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 20), /* Band 20 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 21), /* Band 21 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 25), /* Band 25 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 26), /* Band 26 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 28), /* Band 28 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 31), /* Band 31 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 66), /* Band 66 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 70), /* Band 70 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 71), /* Band 71 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 72), /* Band 72 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 73), /* Band 73 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 74), /* Band 74 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR2, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 1), /* Band 1 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 2), /* Band 2 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 3), /* Band 3 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 4), /* Band 4 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 5), /* Band 5 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 8), /* Band 8 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 11), /* Band 11 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 12), /* Band 12 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 13), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 14), /* Band 14 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 17), /* Band 17 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 18), /* Band 18 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 19), /* Band 19 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 20), /* Band 20 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 21), /* Band 21 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 25), /* Band 25 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 26), /* Band 26 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 28), /* Band 28 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 31), /* Band 31 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 66), /* Band 66 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 70), /* Band 70 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 71), /* Band 71 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 72), /* Band 72 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 73), /* Band 73 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 74), /* Band 74 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR2, 85), /* Band 85 */
  },
    NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT,
  {
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 1), /* Band 1 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 2), /* Band 2 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 3), /* Band 3 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 4), /* Band 4 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 5), /* Band 5 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 8), /* Band 8 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 11), /* Band 11 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 12), /* Band 12 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 13), /* Band 13 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 14), /* Band 14 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 17), /* Band 17 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 18), /* Band 18 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 19), /* Band 19 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 20), /* Band 20 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 21), /* Band 21 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 25), /* Band 25 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 26), /* Band 26 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 28), /* Band 28 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 31), /* Band 31 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 66), /* Band 66 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 70), /* Band 70 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 71), /* Band 71 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 72), /* Band 72 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 73), /* Band 73 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 74), /* Band 74 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR2, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 1), /* Band 1 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 2), /* Band 2 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 3), /* Band 3 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 4), /* Band 4 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 5), /* Band 5 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 8), /* Band 8 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 11), /* Band 11 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 12), /* Band 12 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 13), /* Band 13 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 14), /* Band 14 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 17), /* Band 17 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 18), /* Band 18 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 19), /* Band 19 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 20), /* Band 20 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 21), /* Band 21 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 25), /* Band 25 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 26), /* Band 26 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 28), /* Band 28 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 31), /* Band 31 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 66), /* Band 66 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 70), /* Band 70 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 71), /* Band 71 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 72), /* Band 72 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 73), /* Band 73 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 74), /* Band 74 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 1), /* Band 1 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 2), /* Band 2 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 3), /* Band 3 */ 
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 4), /* Band 4 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 5), /* Band 5 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 8), /* Band 8 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 11), /* Band 11 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 12), /* Band 12 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 13), /* Band 13 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 14), /* Band 14 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 17), /* Band 17 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 18), /* Band 18 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 19), /* Band 19 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 20), /* Band 20 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 21), /* Band 21 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 25), /* Band 25 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 26), /* Band 26 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 28), /* Band 28 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 31), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 66), /* Band 66 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 70), /* Band 70 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 71), /* Band 71 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 72), /* Band 72 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 73), /* Band 73 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 74), /* Band 74 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 85), /* Band 85 */
  },
    NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(HW_VAR2),
    NB_CAL_DATA_HEADER_DEFAULT,
    NB_DATA_DEFAULT_EXT(HW_VAR2),
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
  {
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 14), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR2, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 14), /* Band 14 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR2, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR2, 85), /* Band 85 */
  },
#endif

};
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
/* Default RF calibration data for HW Variant 1 */
static const struct N1RfDefaultCalDatabase  rf_hw_var3_default_cal_db = 
{
  NB_CAL_DATA_DEFAULT_AFC(HW_VAR3),
  {
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 1), /* Band 1 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 2), /* Band 2 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 3), /* Band 3 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 4), /* Band 4 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 5), /* Band 5 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 8), /* Band 8 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 11), /* Band 11 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 12), /* Band 12 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 13), /* Band 13 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 14), /* Band 14 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 17), /* Band 17 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 18), /* Band 18 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 19), /* Band 19 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 20), /* Band 20 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 21), /* Band 21 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 25), /* Band 25 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 26), /* Band 26 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 28), /* Band 28 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 31), /* Band 31 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 66), /* Band 66 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 70), /* Band 70 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 71), /* Band 71 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 72), /* Band 72 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 73), /* Band 73 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 74), /* Band 74 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR3, 85)  /* Band 85 */
  },
  {
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 1), /* Band 1 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 2), /* Band 2 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 3), /* Band 3 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 4), /* Band 4 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 5), /* Band 5 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 8), /* Band 8 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 11), /* Band 11 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 12), /* Band 12 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 13), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 14), /* Band 14 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 17), /* Band 17 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 18), /* Band 18 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 19), /* Band 19 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 20), /* Band 20 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 21), /* Band 21 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 25), /* Band 25 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 26), /* Band 26 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 28), /* Band 28 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 31), /* Band 31 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 66), /* Band 66 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 70), /* Band 70 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 71), /* Band 71 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 72), /* Band 72 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 73), /* Band 73 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 74), /* Band 74 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR3, 85)  /* Band 85 */
  },
  NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT,
  {
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 1), /* Band 1 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 2), /* Band 2 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 3), /* Band 3 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 4), /* Band 4 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 5), /* Band 5 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 8), /* Band 8 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 11), /* Band 11 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 12), /* Band 12 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 13), /* Band 13 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 14), /* Band 14 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 17), /* Band 17 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 18), /* Band 18 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 19), /* Band 19 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 20), /* Band 20 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 21), /* Band 21 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 25), /* Band 25 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 26), /* Band 26 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 28), /* Band 28 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 31), /* Band 31 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 66), /* Band 66 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 70), /* Band 70 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 71), /* Band 71 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 72), /* Band 72 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 73), /* Band 73 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 74), /* Band 74 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR3, 85)  /* Band 85 */
  },
  {
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 1), /* Band 1 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 2), /* Band 2 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 3), /* Band 3 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 4), /* Band 4 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 5), /* Band 5 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 8), /* Band 8 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 11), /* Band 11 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 12), /* Band 12 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 13), /* Band 13 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 14), /* Band 14 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 17), /* Band 17 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 18), /* Band 18 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 19), /* Band 19 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 20), /* Band 20 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 21), /* Band 21 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 25), /* Band 25 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 26), /* Band 26 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 28), /* Band 28 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 31), /* Band 31 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 66), /* Band 66 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 70), /* Band 70 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 71), /* Band 71 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 72), /* Band 72 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 73), /* Band 73 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 74), /* Band 74 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 85)  /* Band 85 */
  },
  {
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 1), /* Band 1 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 2), /* Band 2 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 3), /* Band 3 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 4), /* Band 4 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 5), /* Band 5 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 8), /* Band 8 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 11), /* Band 11 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 12), /* Band 12 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 13), /* Band 13 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 14), /* Band 14 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 17), /* Band 17 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 18), /* Band 18 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 19), /* Band 19 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 20), /* Band 20 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 21), /* Band 21 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 25), /* Band 25 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 26), /* Band 26 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 28), /* Band 28 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 31), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 66), /* Band 66 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 70), /* Band 70 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 71), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 72), /* Band 72 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 73), /* Band 73 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 74), /* Band 74 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 85) /* Band 85 */
  },
    NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(HW_VAR3),
    NB_CAL_DATA_HEADER_DEFAULT,
    NB_DATA_DEFAULT_EXT(HW_VAR3),
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
  {
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 14), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR3, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 14), /* Band 14 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR3, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR3, 85), /* Band 85 */
  },
  #endif
};
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
/* Default RF calibration data for HW Variant */
static const struct N1RfDefaultCalDatabase  rf_hw_var4_default_cal_db =
{
  NB_CAL_DATA_DEFAULT_AFC(HW_VAR4),
   {
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 1), /* Band 1 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 2), /* Band 2 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 3), /* Band 3 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 4), /* Band 4 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 5), /* Band 5 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 8), /* Band 8 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 11), /* Band 11 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 12), /* Band 12 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 13), /* Band 13 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 14), /* Band 14 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 17), /* Band 17 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 18), /* Band 18 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 19), /* Band 19 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 20), /* Band 20 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 21), /* Band 21 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 25), /* Band 25 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 26), /* Band 26 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 28), /* Band 28 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 31), /* Band 31 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 66), /* Band 66 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 70), /* Band 70 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 71), /* Band 71 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 72), /* Band 72 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 73), /* Band 73 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 74), /* Band 74 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR4, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 1), /* Band 1 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 2), /* Band 2 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 3), /* Band 3 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 4), /* Band 4 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 5), /* Band 5 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 8), /* Band 8 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 11), /* Band 11 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 12), /* Band 12 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 13), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 14), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 17), /* Band 17 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 18), /* Band 18 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 19), /* Band 19 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 20), /* Band 20 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 21), /* Band 21 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 25), /* Band 25 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 26), /* Band 26 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 28), /* Band 28 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 31), /* Band 31 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 66), /* Band 66 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 70), /* Band 70 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 71), /* Band 71 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 72), /* Band 72 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 73), /* Band 73 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 74), /* Band 74 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR4, 85), /* Band 85 */
  },
  NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT,
  {
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 1), /* Band 1 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 2), /* Band 2 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 3), /* Band 3 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 4), /* Band 4 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 5), /* Band 5 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 8), /* Band 8 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 11), /* Band 11 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 12), /* Band 12 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 13), /* Band 13 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 14), /* Band 14 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 17), /* Band 17 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 18), /* Band 18 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 19), /* Band 19 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 20), /* Band 20 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 21), /* Band 21 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 25), /* Band 25 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 26), /* Band 26 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 28), /* Band 28 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 31), /* Band 31 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 66), /* Band 66 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 70), /* Band 70 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 71), /* Band 71 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 72), /* Band 72 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 73), /* Band 73 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 74), /* Band 74 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR4, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 1), /* Band 1 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 2), /* Band 2 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 3), /* Band 3 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 4), /* Band 4 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 5), /* Band 5 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 8), /* Band 8 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 11), /* Band 11 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 12), /* Band 12 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 13), /* Band 13 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 14), /* Band 14 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 17), /* Band 17 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 18), /* Band 18 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 19), /* Band 19 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 20), /* Band 20 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 21), /* Band 21 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 25), /* Band 25 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 26), /* Band 26 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 28), /* Band 28 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 31), /* Band 31 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 66), /* Band 66 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 70), /* Band 70 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 71), /* Band 71 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 72), /* Band 72 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 73), /* Band 73 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 74), /* Band 74 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 1), /* Band 1 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 2), /* Band 2 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 3), /* Band 3 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 4), /* Band 4 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 5), /* Band 5 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 8), /* Band 8 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 11), /* Band 11 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 12), /* Band 12 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 13), /* Band 13 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 14), /* Band 14 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 17), /* Band 17 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 18), /* Band 18 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 19), /* Band 19 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 20), /* Band 20 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 21), /* Band 21 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 25), /* Band 25 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 26), /* Band 26 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 28), /* Band 28 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 31), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 66), /* Band 66 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 70), /* Band 70 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 71), /* Band 71 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 72), /* Band 72 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 73), /* Band 73 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 74), /* Band 74 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 85), /* Band 85 */
  },
    NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(HW_VAR4),
    NB_CAL_DATA_HEADER_DEFAULT,
    NB_DATA_DEFAULT_EXT(HW_VAR4),
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
  {
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 14), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR4, 85), /* Band 85 */
   },
   {
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 14), /* Band 14 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR4, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR4, 85), /* Band 85 */
   },
#endif
};
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
/* Default RF calibration data for HW Variant */
static const struct N1RfDefaultCalDatabase rf_hw_var5_default_cal_db = 
{
  NB_CAL_DATA_DEFAULT_AFC(HW_VAR5),
   {
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 1), /* Band 1 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 2), /* Band 2 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 3), /* Band 3 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 4), /* Band 4 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 5), /* Band 5 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 8), /* Band 8 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 11), /* Band 11 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 12), /* Band 12 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 13), /* Band 13 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 14), /* Band 14 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 17), /* Band 17 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 18), /* Band 18 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 19), /* Band 19 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 20), /* Band 20 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 21), /* Band 21 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 25), /* Band 25 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 26), /* Band 26 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 28), /* Band 28 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 31), /* Band 31 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 66), /* Band 66 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 70), /* Band 70 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 71), /* Band 71 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 72), /* Band 72 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 73), /* Band 73 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 74), /* Band 74 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR5, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 1), /* Band 1 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 2), /* Band 2 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 3), /* Band 3 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 4), /* Band 4 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 5), /* Band 5 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 8), /* Band 8 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 11), /* Band 11 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 12), /* Band 12 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 13), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 14), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 17), /* Band 17 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 18), /* Band 18 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 19), /* Band 19 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 20), /* Band 20 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 21), /* Band 21 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 25), /* Band 25 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 26), /* Band 26 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 28), /* Band 28 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 31), /* Band 31 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 66), /* Band 66 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 70), /* Band 70 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 71), /* Band 71 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 72), /* Band 72 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 73), /* Band 73 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 74), /* Band 74 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR5, 85), /* Band 85 */
  },
  NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT,
  {
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 1), /* Band 1 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 2), /* Band 2 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 3), /* Band 3 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 4), /* Band 4 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 5), /* Band 5 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 8), /* Band 8 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 11), /* Band 11 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 12), /* Band 12 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 13), /* Band 13 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 14), /* Band 14 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 17), /* Band 17 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 18), /* Band 18 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 19), /* Band 19 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 20), /* Band 20 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 21), /* Band 21 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 25), /* Band 25 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 26), /* Band 26 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 28), /* Band 28 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 31), /* Band 31 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 66), /* Band 66 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 70), /* Band 70 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 71), /* Band 71 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 72), /* Band 72 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 73), /* Band 73 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 74), /* Band 74 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR5, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 1), /* Band 1 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 2), /* Band 2 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 3), /* Band 3 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 4), /* Band 4 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 5), /* Band 5 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 8), /* Band 8 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 11), /* Band 11 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 12), /* Band 12 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 13), /* Band 13 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 14), /* Band 14 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 17), /* Band 17 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 18), /* Band 18 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 19), /* Band 19 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 20), /* Band 20 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 21), /* Band 21 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 25), /* Band 25 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 26), /* Band 26 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 28), /* Band 28 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 31), /* Band 31 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 66), /* Band 66 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 70), /* Band 70 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 71), /* Band 71 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 72), /* Band 72 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 73), /* Band 73 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 74), /* Band 74 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 1), /* Band 1 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 2), /* Band 2 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 3), /* Band 3 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 4), /* Band 4 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 5), /* Band 5 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 8), /* Band 8 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 11), /* Band 11 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 12), /* Band 12 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 13), /* Band 13 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 14), /* Band 14 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 17), /* Band 17 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 18), /* Band 18 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 19), /* Band 19 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 20), /* Band 20 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 21), /* Band 21 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 25), /* Band 25 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 26), /* Band 26 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 28), /* Band 28 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 31), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 66), /* Band 66 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 70), /* Band 70 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 71), /* Band 71 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 72), /* Band 72 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 73), /* Band 73 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 74), /* Band 74 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 85), /* Band 85 */
  },
    NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(HW_VAR5),
    NB_CAL_DATA_HEADER_DEFAULT,
    NB_DATA_DEFAULT_EXT(HW_VAR5),
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
  {
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 14), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR5, 85), /* Band 85 */
   },
   {
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 14), /* Band 14 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR5, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR5, 85)  /* Band 85 */
   },
#endif

};
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
/* Default RF calibration data for HW Variant */
static const struct N1RfDefaultCalDatabase  rf_hw_var6_default_cal_db =
{
  NB_CAL_DATA_DEFAULT_AFC(HW_VAR6),
   {
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 1), /* Band 1 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 2), /* Band 2 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 3), /* Band 3 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 4), /* Band 4 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 5), /* Band 5 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 8), /* Band 8 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 11), /* Band 11 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 12), /* Band 12 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 13), /* Band 13 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 14), /* Band 14 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 17), /* Band 17 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 18), /* Band 18 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 19), /* Band 19 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 20), /* Band 20 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 21), /* Band 21 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 25), /* Band 25 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 26), /* Band 26 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 28), /* Band 28 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 31), /* Band 31 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 66), /* Band 66 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 70), /* Band 70 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 71), /* Band 71 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 72), /* Band 72 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 73), /* Band 73 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 74), /* Band 74 */
    NB_CAL_DATA_RXPL_DEFAULT(HW_VAR6, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 1), /* Band 1 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 2), /* Band 2 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 3), /* Band 3 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 4), /* Band 4 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 5), /* Band 5 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 8), /* Band 8 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 11), /* Band 11 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 12), /* Band 12 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 13), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 14), /* Band 13 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 17), /* Band 17 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 18), /* Band 18 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 19), /* Band 19 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 20), /* Band 20 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 21), /* Band 21 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 25), /* Band 25 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 26), /* Band 26 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 28), /* Band 28 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 31), /* Band 31 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 66), /* Band 66 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 70), /* Band 70 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 71), /* Band 71 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 72), /* Band 72 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 73), /* Band 73 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 74), /* Band 74 */
    NB_CAL_DATA_TPC_DEFAULT(HW_VAR6, 85), /* Band 85 */
  },
  NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_DEFAULT,
  {
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 1), /* Band 1 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 2), /* Band 2 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 3), /* Band 3 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 4), /* Band 4 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 5), /* Band 5 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 8), /* Band 8 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 11), /* Band 11 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 12), /* Band 12 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 13), /* Band 13 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 14), /* Band 14 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 17), /* Band 17 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 18), /* Band 18 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 19), /* Band 19 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 20), /* Band 20 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 21), /* Band 21 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 25), /* Band 25 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 26), /* Band 26 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 28), /* Band 28 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 31), /* Band 31 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 66), /* Band 66 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 70), /* Band 70 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 71), /* Band 71 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 72), /* Band 72 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 73), /* Band 73 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 74), /* Band 74 */
    NB_CAL_DATA_TX_MPR_DEFAULT(HW_VAR6, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 1), /* Band 1 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 2), /* Band 2 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 3), /* Band 3 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 4), /* Band 4 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 5), /* Band 5 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 8), /* Band 8 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 11), /* Band 11 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 12), /* Band 12 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 13), /* Band 13 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 14), /* Band 14 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 17), /* Band 17 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 18), /* Band 18 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 19), /* Band 19 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 20), /* Band 20 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 21), /* Band 21 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 25), /* Band 25 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 26), /* Band 26 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 28), /* Band 28 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 31), /* Band 31 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 66), /* Band 66 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 70), /* Band 70 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 71), /* Band 71 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 72), /* Band 72 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 73), /* Band 73 */
    NB_CAL_DATA_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 74), /* Band 74 */
    NB_CAL_DATA_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 85), /* Band 85 */
  },
  {
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 1), /* Band 1 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 2), /* Band 2 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 3), /* Band 3 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 4), /* Band 4 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 5), /* Band 5 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 8), /* Band 8 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 11), /* Band 11 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 12), /* Band 12 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 13), /* Band 13 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 14), /* Band 14 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 17), /* Band 17 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 18), /* Band 18 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 19), /* Band 19 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 20), /* Band 20 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 21), /* Band 21 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 25), /* Band 25 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 26), /* Band 26 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 28), /* Band 28 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 31), /* Band 31 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 66), /* Band 66 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 70), /* Band 70 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 71), /* Band 71 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 72), /* Band 72 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 73), /* Band 73 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 74), /* Band 74 */
    NB_CAL_DATA_MAX_PWR_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 85), /* Band 85 */
  },
  NB_CAL_DATA_TX_TPC_CTRL_DEFAULT(HW_VAR6),
  NB_CAL_DATA_HEADER_DEFAULT,
  NB_DATA_DEFAULT_EXT(HW_VAR6),
  #ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
  {
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 14), /* Band 13 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_TPC_DEFAULT(HW_VAR6, 85), /* Band 85 */
   },
   {
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 1), /* Band 1 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 2), /* Band 2 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 3), /* Band 3 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 4), /* Band 4 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 5), /* Band 5 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 8), /* Band 8 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 11), /* Band 11 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 12), /* Band 12 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 13), /* Band 13 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 14), /* Band 14 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 17), /* Band 17 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 18), /* Band 18 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 19), /* Band 19 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 20), /* Band 20 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 21), /* Band 21 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 25), /* Band 25 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 26), /* Band 26 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 28), /* Band 28 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 31), /* Band 31 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 66), /* Band 66 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 70), /* Band 70 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 71), /* Band 71 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 72), /* Band 72 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 73), /* Band 73 */
    NB_CAL_DATA_SINGLE_PA_BIAS_GPIO_DATA_DEFAULT(HW_VAR6, 74), /* Band 74 */
    NB_CAL_DATA_SINGLE_PA_BIAS_RFFE_DEFAULT(HW_VAR6, 85), /* Band 85 */
   },
   #endif
};
#endif


/* Mapping of Custom database pointers according to HW ID's */
static const struct N1RfDefaultCalDatabase *nb_rf_calib_db_ptrs[RF_HW_IDX_MAX_VAR_COUNT] =
{
#ifdef NB_RF_CUSTOM_SINGLE_PA
  [RF_HW_IDX_SINGLE_BAND_PA] = &rf_hw_var0_default_cal_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
  [RF_HW_IDX_VAR1] = &rf_hw_var1_default_cal_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
  [RF_HW_IDX_VAR2] = &rf_hw_var2_default_cal_db,
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
  [RF_HW_IDX_VAR3] = &rf_hw_var3_default_cal_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
  [RF_HW_IDX_VAR4] = &rf_hw_var4_default_cal_db,
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
  [RF_HW_IDX_HS8023_12] = &rf_hw_var5_default_cal_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
  [RF_HW_IDX_HS8018_31] = &rf_hw_var6_default_cal_db,
#endif
};

/* Data structure for RF default calibration data DRDI info */
const NB_RF_CALIB_DRDI_INFO_T nb_rf_calib_drdi_info =
{
  NB_RF_CALIB_DRDI_ENABLED,   /* DRDI feature enabled */
  RF_HW_IDX_MAX_VAR_COUNT,   /* 3 different variants */
  nb_rf_calib_db_ptrs        /* Pointers to different db's */
};

/* end of file */
