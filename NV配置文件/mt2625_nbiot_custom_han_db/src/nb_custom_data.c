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
#include <assert.h>
#include <limits.h>

//Other modules

//Own header
#include "nb_custom_data.h"
#include "nb_custom_rffe.h"
#include "nb_drdi_data.h"
#include "nb_custom_defaults.h"

/******************************************************************************
*  PRIVATE CONSTANTS
*******************************************************************************/

/******************************************************************************
*  PRIVATE MACROS
*******************************************************************************/
#define ATTR_MD_RODATA_IN_RAM            __attribute__ ((__section__(".md_ram_rodata")))

/* Macro to build Common/Basic/Misc info regarding RF FE components/controls */
#define NB_RFFE_INFO_CONFIG(_hw_var) \
{ \
  { \
    NB_RFFE_##_hw_var##_SCURVE_3_ORDER_FITTING_C3, \
    NB_RFFE_##_hw_var##_SCURVE_3_ORDER_FITTING_C2, \
    NB_RFFE_##_hw_var##_SCURVE_3_ORDER_FITTING_C1, \
    NB_RFFE_##_hw_var##_SCURVE_INFLECTION_POINT, \
    0, \
  }, \
  { \
    NB_RFFE_##_hw_var##_FEM_MANUFACTURER_ID_ADDR, \
    NB_RFFE_##_hw_var##_FEM_MANUFACTURER_ID_DATA, \
    NB_RFFE_##_hw_var##_FEM_PRODUCT_ID_ADDR, \
    NB_RFFE_##_hw_var##_FEM_PRODUCT_ID_DATA, \
    NB_RFFE_##_hw_var##_FEM_REVISION_ID_ADDR, \
    NB_RFFE_##_hw_var##_FEM_REVISION_ID_DATA, \
    NB_RFFE_##_hw_var##_FEM_USER_ID_ADDR, \
    NB_RFFE_##_hw_var##_FEM_USER_ID_DATA, \
  }, \
  NB_RFFE_##_hw_var##_FEM_ID_READ_DELAY_US, \
  NB_RFFE_##_hw_var##_USID_FEM_1, \
  NB_RFFE_##_hw_var##_NPRACH_NPUSCH_TX_ON_TIME_DIFF, \
  NB_RFFE_##_hw_var##_RFM_NTC_TEMPERATURE_ITEM, \
  NB_RFFE_##_hw_var##_MTK_MANAGER_SetDefault, \
  NB_RFFE_##_hw_var##_CUSTOMER_MANAGER_SetDeafault,\
  NB_RFFE_##_hw_var##_CUSTOM_FILE, \
  NB_RFFE_##_hw_var##_RFIC_CONTROL_TIMING_ITEM,\
  NB_RFFE_##_hw_var##_RFC_MS_FLAG,\
  0,0,0,0,\
  (uint16_t)0,\
  (uint16_t)0,\
}

/* Macro to build RFFE configuration for a band */
#define NB_RFFE_BAND_CONFIG(_hw_var, _band) \
{ \
  ((uint8_t)_band), \
  ((uint8_t)NB_RFFE_##_hw_var##_BAND_SUPPORT_INFO_BAND_##_band), \
  ((uint8_t)NB_RFFE_##_hw_var##_RX_PATH_INFO_BAND_##_band), \
  ((uint8_t)NB_RFFE_##_hw_var##_RFIC_RX_PORT_BAND_##_band), \
  ((uint8_t)NB_RFFE_##_hw_var##_TX_PATH_INFO_BAND_##_band), \
  ((uint8_t)NB_RFFE_##_hw_var##_RFIC_TX_PORT_BAND_##_band), \
  ((uint8_t)NB_RFFE_##_hw_var##_TX_POWER_CLASS_INFO_BAND_##_band), \
  ((uint8_t)0), \
}

/* Master RFFE configuration for each band */
#define NB_RFFE_BAND_CONFIG_DB(_hw_var) \
{ \
  [NB_LTE_BAND1] = NB_RFFE_BAND_CONFIG(_hw_var, 1), /* Band 1 */ \
  [NB_LTE_BAND2] = NB_RFFE_BAND_CONFIG(_hw_var, 2), /* Band 2 */ \
  [NB_LTE_BAND3] = NB_RFFE_BAND_CONFIG(_hw_var, 3), /* Band 3 */ \
  [NB_LTE_BAND4] = NB_RFFE_BAND_CONFIG(_hw_var, 4), /* Band 4 */ \
  [NB_LTE_BAND5] = NB_RFFE_BAND_CONFIG(_hw_var, 5), /* Band 5 */ \
  [NB_LTE_BAND8] = NB_RFFE_BAND_CONFIG(_hw_var, 8), /* Band 8 */ \
  [NB_LTE_BAND11] = NB_RFFE_BAND_CONFIG(_hw_var, 11), /* Band 1 */ \
  [NB_LTE_BAND12] = NB_RFFE_BAND_CONFIG(_hw_var, 12), /* Band 12 */ \
  [NB_LTE_BAND13] = NB_RFFE_BAND_CONFIG(_hw_var, 13), /* Band 13 */ \
  [NB_LTE_BAND14] = NB_RFFE_BAND_CONFIG(_hw_var, 14), /* Band 14 */ \
  [NB_LTE_BAND17] = NB_RFFE_BAND_CONFIG(_hw_var, 17), /* Band 17 */ \
  [NB_LTE_BAND18] = NB_RFFE_BAND_CONFIG(_hw_var, 18), /* Band 18 */ \
  [NB_LTE_BAND19] = NB_RFFE_BAND_CONFIG(_hw_var, 19), /* Band 19 */ \
  [NB_LTE_BAND20] = NB_RFFE_BAND_CONFIG(_hw_var, 20), /* Band 20 */ \
  [NB_LTE_BAND21] = NB_RFFE_BAND_CONFIG(_hw_var, 21), /* Band 21 */ \
  [NB_LTE_BAND25] = NB_RFFE_BAND_CONFIG(_hw_var, 25), /* Band 25 */ \
  [NB_LTE_BAND26] = NB_RFFE_BAND_CONFIG(_hw_var, 26), /* Band 26 */ \
  [NB_LTE_BAND28] = NB_RFFE_BAND_CONFIG(_hw_var, 28), /* Band 28 */ \
  [NB_LTE_BAND31] = NB_RFFE_BAND_CONFIG(_hw_var, 31), /* Band 31 */ \
  [NB_LTE_BAND66] = NB_RFFE_BAND_CONFIG(_hw_var, 66), /* Band 66 */ \
  [NB_LTE_BAND70] = NB_RFFE_BAND_CONFIG(_hw_var, 70), /* Band 70 */ \
  [NB_LTE_BAND71] = NB_RFFE_BAND_CONFIG(_hw_var, 71), /* Band 71 */ \
  [NB_LTE_BAND72] = NB_RFFE_BAND_CONFIG(_hw_var, 72), /* Band 72 */ \
  [NB_LTE_BAND73] = NB_RFFE_BAND_CONFIG(_hw_var, 73), /* Band 73 */ \
  [NB_LTE_BAND74] = NB_RFFE_BAND_CONFIG(_hw_var, 74), /* Band 74 */ \
  [NB_LTE_BAND85] = NB_RFFE_BAND_CONFIG(_hw_var, 85)  /* Band 85 */ \
}

#define N1_RF_CAPABI_MAX_PWR_LIMIT_CONFIG(_hw_var) \
{ \
    N1_CAPABILITY_##_hw_var##_LIMITED_BAND_BITMAP, \
    N1_CAPABILITY_##_hw_var##_LIMITED_MAX_TX_POWER, \
    (uint16_t)0,\
}

/******************************************************************************
*  PRIVATE DATA TYPES
*******************************************************************************/


/******************************************************************************
*  PRIVATE VARIABLES
*******************************************************************************/
/* Event and Data tables for RFFE controls for each Rx path */
ATTR_MD_RODATA_IN_RAM

static const NB_RFFE_EVENT_TABLE_T rffe_ctrl_event_rx_path[RF_HW_IDX_MAX_VAR_COUNT][RFFE_RX_PATH_COUNT][RFFE_RX_EVT_COUNT] =
{
#ifdef NB_RF_CUSTOM_SINGLE_PA
    [RF_HW_IDX_SINGLE_BAND_PA] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
    [RF_HW_IDX_VAR1] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
    [RF_HW_IDX_VAR2] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
    [RF_HW_IDX_VAR3]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
    [RF_HW_IDX_VAR4]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
    [RF_HW_IDX_HS8023_12] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
    [RF_HW_IDX_HS8018_31] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_RX_PATH_4,
    },
#endif
  };

ATTR_MD_RODATA_IN_RAM
static const NB_RFFE_DATA_TABLE_T rffe_ctrl_data_rx_path[RF_HW_IDX_MAX_VAR_COUNT][RFFE_RX_PATH_COUNT][RFFE_RX_DATA_COUNT] =
{
#ifdef NB_RF_CUSTOM_SINGLE_PA
    [RF_HW_IDX_SINGLE_BAND_PA] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR0_CTRL_DATA_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR0_CTRL_DATA_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR0_CTRL_DATA_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR0_CTRL_DATA_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
    [RF_HW_IDX_VAR1] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
    [RF_HW_IDX_VAR2] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR2_CTRL_DATA_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR2_CTRL_DATA_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR2_CTRL_DATA_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR2_CTRL_DATA_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
    [RF_HW_IDX_VAR3]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR3_CTRL_DATA_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR3_CTRL_DATA_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR3_CTRL_DATA_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR3_CTRL_DATA_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
    [RF_HW_IDX_VAR4]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR4_CTRL_DATA_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR4_CTRL_DATA_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR4_CTRL_DATA_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR4_CTRL_DATA_RX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
    [RF_HW_IDX_HS8023_12] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR5_CTRL_DATA_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR5_CTRL_DATA_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR5_CTRL_DATA_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR5_CTRL_DATA_RX_PATH_4
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
    [RF_HW_IDX_HS8018_31] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] = NB_RFFE_HW_VAR6_CTRL_DATA_RX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] = NB_RFFE_HW_VAR6_CTRL_DATA_RX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] = NB_RFFE_HW_VAR6_CTRL_DATA_RX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] = NB_RFFE_HW_VAR6_CTRL_DATA_RX_PATH_4,
    },
#endif
  };

/* Event and Data tables for RFFE controls for each Rx path */
ATTR_MD_RODATA_IN_RAM
static const NB_RFFE_EVENT_TABLE_T rffe_ctrl_event_tx_path[RF_HW_IDX_MAX_VAR_COUNT][RFFE_TX_PATH_COUNT][RFFE_TX_EVT_COUNT] =
{
#ifdef NB_RF_CUSTOM_SINGLE_PA
    [RF_HW_IDX_SINGLE_BAND_PA] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR0_CTRL_EVENTS_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
    [RF_HW_IDX_VAR1] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
    [RF_HW_IDX_VAR2] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR2_CTRL_EVENTS_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
    [RF_HW_IDX_VAR3]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_TX_PATH_4,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)] = NB_RFFE_HW_VAR3_CTRL_EVENTS_TX_PATH_5,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
    [RF_HW_IDX_VAR4]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR4_CTRL_EVENTS_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
    [RF_HW_IDX_HS8023_12] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR5_CTRL_EVENTS_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
    [RF_HW_IDX_HS8018_31] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR6_CTRL_EVENTS_TX_PATH_4,
    },
#endif
  };

ATTR_MD_RODATA_IN_RAM
static const NB_RFFE_DATA_TABLE_T rffe_ctrl_data_tx_path[RF_HW_IDX_MAX_VAR_COUNT][RFFE_TX_PATH_COUNT][RFFE_TX_DATA_COUNT] =
{
#ifdef NB_RF_CUSTOM_SINGLE_PA
    [RF_HW_IDX_SINGLE_BAND_PA] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR0_CTRL_DATA_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR0_CTRL_DATA_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR0_CTRL_DATA_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR0_CTRL_DATA_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
    [RF_HW_IDX_VAR1] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
    [RF_HW_IDX_VAR2] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR2_CTRL_DATA_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR2_CTRL_DATA_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR2_CTRL_DATA_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR2_CTRL_DATA_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
    [RF_HW_IDX_VAR3]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR3_CTRL_DATA_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR3_CTRL_DATA_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR3_CTRL_DATA_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR3_CTRL_DATA_TX_PATH_4,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)] = NB_RFFE_HW_VAR3_CTRL_DATA_TX_PATH_5,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
    [RF_HW_IDX_VAR4]=
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR4_CTRL_DATA_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR4_CTRL_DATA_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR4_CTRL_DATA_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR4_CTRL_DATA_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
    [RF_HW_IDX_HS8023_12] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR5_CTRL_DATA_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR5_CTRL_DATA_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR5_CTRL_DATA_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR5_CTRL_DATA_TX_PATH_4,
    },
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
    [RF_HW_IDX_HS8018_31] =
    {
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] = NB_RFFE_HW_VAR6_CTRL_DATA_TX_PATH_1,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] = NB_RFFE_HW_VAR6_CTRL_DATA_TX_PATH_2,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] = NB_RFFE_HW_VAR6_CTRL_DATA_TX_PATH_3,
      [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] = NB_RFFE_HW_VAR6_CTRL_DATA_TX_PATH_4,
    },
#endif

  };

/* RF Customization database */
ATTR_MD_RODATA_IN_RAM
//var0 mode
#ifdef NB_RF_CUSTOM_SINGLE_PA
static const NB_RFFE_CUSTOM_DATABASE_T nb_hw_var0_rffe_custom_db =
{
  /* Basic/Common/Misc information for RF FE components */
  NB_RFFE_INFO_CONFIG(HW_VAR0),
  /* Master RFFE configuration for each band */
  NB_RFFE_BAND_CONFIG_DB(HW_VAR0),
  /* Path indexed master rffe control information for Rx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
      }
  },
  /* Path indexed master rffe control information for Tx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_SINGLE_BAND_PA][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
      }
  },
  N1_RF_CAPABI_MAX_PWR_LIMIT_CONFIG(HW_VAR0),
};
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
//var1 mode
static const NB_RFFE_CUSTOM_DATABASE_T nb_hw_var1_rffe_custom_db =
{
  /* Basic/Common/Misc information for RF FE components */
  NB_RFFE_INFO_CONFIG(HW_VAR1),
  /* Master RFFE configuration for each band */
  NB_RFFE_BAND_CONFIG_DB(HW_VAR1),
  /* Path indexed master rffe control information for Rx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
      }
  },
  /* Path indexed master rffe control information for Tx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR1][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
      }
  },
  N1_RF_CAPABI_MAX_PWR_LIMIT_CONFIG(HW_VAR1),
};
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
//var2
static const NB_RFFE_CUSTOM_DATABASE_T nb_hw_var2_rffe_custom_db =
{
  /* Basic/Common/Misc information for RF FE components */
  NB_RFFE_INFO_CONFIG(HW_VAR2),
  /* Master RFFE configuration for each band */
  NB_RFFE_BAND_CONFIG_DB(HW_VAR2),
  /* Path indexed master rffe control information for Rx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
      }
  },
  /* Path indexed master rffe control information for Tx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR2][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
      }
  },
  N1_RF_CAPABI_MAX_PWR_LIMIT_CONFIG(HW_VAR2),
};
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
/* default custom database for hw var3 */
static const NB_RFFE_CUSTOM_DATABASE_T nb_hw_var3_rffe_custom_db =
{
  /* Basic/Common/Misc information for RF FE components */
  NB_RFFE_INFO_CONFIG(HW_VAR3),
  /* Master RFFE configuration for each band */
  NB_RFFE_BAND_CONFIG_DB(HW_VAR3),
  /* Path indexed master rffe control information for Rx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
      }
  },
  /* Path indexed master rffe control information for Tx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR3][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)][0],
      }
  },
  N1_RF_CAPABI_MAX_PWR_LIMIT_CONFIG(HW_VAR3),
};
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
/* RF Customization database */
ATTR_MD_RODATA_IN_RAM
/* default custom database for hw var4 */
static const NB_RFFE_CUSTOM_DATABASE_T nb_hw_var4_rffe_custom_db =
{
  /* Basic/Common/Misc information for RF FE components */
  NB_RFFE_INFO_CONFIG(HW_VAR4),
  /* Master RFFE configuration for each band */
  NB_RFFE_BAND_CONFIG_DB(HW_VAR4),
  /* Path indexed master rffe control information for Rx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
      }
  },
  /* Path indexed master rffe control information for Tx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_VAR4][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_5)][0],
      }
  },
  N1_RF_CAPABI_MAX_PWR_LIMIT_CONFIG(HW_VAR4),
};
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
/* RF Customization database */
ATTR_MD_RODATA_IN_RAM
/* default custom database for hw var5 */
static const NB_RFFE_CUSTOM_DATABASE_T nb_hw_var5_rffe_custom_db =
{
  /* Basic/Common/Misc information for RF FE components */
  NB_RFFE_INFO_CONFIG(HW_VAR5),
  /* Master RFFE configuration for each band */
  NB_RFFE_BAND_CONFIG_DB(HW_VAR5),
  /* Path indexed master rffe control information for Rx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
      }
  },
  /* Path indexed master rffe control information for Tx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8023_12][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
      }
  },
  };
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
/* RF Customization database */
ATTR_MD_RODATA_IN_RAM
/* default custom database for hw var6 */
static const NB_RFFE_CUSTOM_DATABASE_T nb_hw_var6_rffe_custom_db =
{
  /* Basic/Common/Misc information for RF FE components */
  NB_RFFE_INFO_CONFIG(HW_VAR6),
  /* Master RFFE configuration for each band */
  NB_RFFE_BAND_CONFIG_DB(HW_VAR6),
  /* Path indexed master rffe control information for Rx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)] =
      {
        &rffe_ctrl_event_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
        &rffe_ctrl_data_rx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_RX_PATH_4)][0],
      }
  },
  /* Path indexed master rffe control information for Tx paths */
  {
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_1)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_2)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_3)][0],
      },
    [NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)] =
      {
        &rffe_ctrl_event_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
        &rffe_ctrl_data_tx_path[RF_HW_IDX_HS8018_31][NB_RFFE_GET_RF_PATH_INDEX(RFFE_TX_PATH_4)][0],
      }
  },
  N1_RF_CAPABI_MAX_PWR_LIMIT_CONFIG(HW_VAR6),
};
#endif

/* Mapping of different HW ID's to HW variants */
#if 0
static const NB_RF_DRDI_HW_VARIANT  nb_custom_hwid_hwvar_map[RF_HW_ID_MAX_COUNT] =
{
  [RF_HW_ID0] = RF_HW_IDX_SINGLE_BAND_PA,
  [RF_HW_ID1] = RF_HW_IDX_VAR1,
  [RF_HW_ID2] = RF_HW_IDX_VAR2,
};
#endif

/* Mapping of Custom database pointers according to HW ID's */
static const NB_RFFE_CUSTOM_DATABASE_T *nb_rf_custom_db_ptrs[RF_HW_IDX_MAX_VAR_COUNT] =
{
#ifdef NB_RF_CUSTOM_SINGLE_PA
  [RF_HW_IDX_SINGLE_BAND_PA] = &nb_hw_var0_rffe_custom_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
  [RF_HW_IDX_VAR1] = &nb_hw_var1_rffe_custom_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
  [RF_HW_IDX_VAR2] = &nb_hw_var2_rffe_custom_db,
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
  [RF_HW_IDX_VAR3] = &nb_hw_var3_rffe_custom_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
  [RF_HW_IDX_VAR4] = &nb_hw_var4_rffe_custom_db,
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
  [RF_HW_IDX_HS8023_12] = &nb_hw_var5_rffe_custom_db,
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
  [RF_HW_IDX_HS8018_31] = &nb_hw_var6_rffe_custom_db,
#endif

};

/* Data structure for DRDI ADC info */
static const N1RfDrdiData nb_custom_hwvar_adc_data = 
{
 NB_CUSTOM_DATA_DRDI_MODE_SET,
 {
#ifdef NB_RF_CUSTOM_SINGLE_PA
 [RF_HW_IDX_SINGLE_BAND_PA] = {
                 Low_VOLTAGE_HW_VAR0,
                 High_VOLTAGE_HW_VAR0
                 },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
 [RF_HW_IDX_VAR1] = { 
                 Low_VOLTAGE_HW_VAR1,
                 High_VOLTAGE_HW_VAR1
                },
#endif

#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
 [RF_HW_IDX_VAR2] = {
                 Low_VOLTAGE_HW_VAR2,
                 High_VOLTAGE_HW_VAR2
                },
#endif

#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
 [RF_HW_IDX_VAR3] = {
                 Low_VOLTAGE_HW_VAR3,
                 High_VOLTAGE_HW_VAR3
                },
#endif

#ifdef NB_RF_CUSTOM_MT2625_QM55001
 [RF_HW_IDX_VAR4] = {
                 Low_VOLTAGE_HW_VAR4,
                 High_VOLTAGE_HW_VAR4
                 },
#endif

#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
 [RF_HW_IDX_HS8023_12] = {
               Low_VOLTAGE_HW_VAR5,
               High_VOLTAGE_HW_VAR5
               },
#endif

#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
 [RF_HW_IDX_HS8018_31] = {
           Low_VOLTAGE_HW_VAR6,
           High_VOLTAGE_HW_VAR6
           },
#endif
 }
};

/* Data structure for RF customization DRDI info */
const NB_RFFE_CUSTOM_DRDI_INFO_T nb_rf_custom_drdi_info =
{
  NB_RFFE_CUSTOM_DRDI_ENABLED,   /* DRDI feature enabled */
  RF_HW_IDX_MAX_VAR_COUNT,       /* DRDI different variant available */
  nb_rf_custom_db_ptrs,          /* No need for any list of custom dbs */
  &nb_custom_hwvar_adc_data      /* customer defines DRDI data*/
};

const N1BandListCtrl n1_custom_band_list_ctrl = INTERNAL_BAND_LIST_CTRL;
 
/******************************************************************************
*  PRIVATE FUNCTIONS
*******************************************************************************/


/******************************************************************************
*  INTERFACE FUNCTIONS
*******************************************************************************/

/* end of file */
