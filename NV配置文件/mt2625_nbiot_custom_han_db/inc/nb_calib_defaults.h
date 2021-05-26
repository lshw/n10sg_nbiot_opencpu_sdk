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
#ifndef NB_CALIB_DEFAULTS_H
#define NB_CALIB_DEFAULTS_H

/* ========================================================================= */
/*   UE SOFTWARE VERSION INFORMATION                                         */
/* ========================================================================= */
/* Version number of UE calibraiton flow/software. Major version updates are *
 * used for version in-compatible calibration software updates to previously *
 * calibrated devices. Minor version number updates can be used when old     *
 * calibration data is made compatible with new software.                    */
#define NB_CAL_SW_VERSION_MAJOR             (1)
#define NB_CAL_SW_VERSION_MINOR             (0)

/* ========================================================================= */
/*   FORMAT CONVERSION MULTIPLIERS                                           */
/* ========================================================================= */
#define NB_CAL_Q8_FIXEDPOINT_MULT           (256)
#define NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT  (10)

/* Include HW variant specific calibration defaults */
#include "nb_calib_defaults_hw_var0.h"
#include "nb_calib_defaults_hw_var1.h"
#include "nb_calib_defaults_hw_var2.h"
#include "nb_calib_defaults_hw_var3.h"
#include "nb_calib_defaults_hw_var4.h"
#include "nb_calib_defaults_hw_var5.h"
#include "nb_calib_defaults_hw_var6.h"

/* ==================================================================================*/
/* define the calibration solution*/
/* LEGACY_VERSION_CALIBRATION :  multi tone and single tone combine CAL*/
/* LPM_VERSION_CALIBRATION      :  new calibration method, multi tone and single tone is dependent calibration*/
/* =================================================================================*/
#define LEGACY_VERSION_CALIBRATION                         0
#define LPM_VERSION_CALIBRATION                            1

//#define FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
#ifndef FEA_TEMP_MULTI_SINGLE_TONE_CAL_CUSTOM
#define RFFE_CAL_MODE                                      LEGACY_VERSION_CALIBRATION
#else
#define RFFE_CAL_MODE                                      LPM_VERSION_CALIBRATION
#endif

/* ========================================================================= */
/*   TEMPERATURE SENSOR ADC DATA DEFAULT                                     */
/* ========================================================================= */
/* Default temperature Sensor ADC offset */
#define NB_CAL_DATA_TEMPERATURE_SENSOR_ADC_OFFSET         (int16_t)0

/* Temperature segment 1 from -50degC to -30degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_1 (int16_t)(-50.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 1 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_1    (uint16_t)93

/* Temperature segment 2 from -30degC to -10degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_2 (int16_t)(-30.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 2 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_2    (uint16_t)124

/* Temperature segment 3 from -10degC to +15degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_3 (int16_t)(-10.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 3 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_3    (uint16_t)162

/* Temperature segment 4 from +15degC to +30degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_4 (int16_t)(15.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 4 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_4    (uint16_t)208

/* Temperature segment 5 from +30degC to +45degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_5 (int16_t)(30.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 5 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_5    (uint16_t)236

/* Temperature segment 6 from +45degC to +60degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_6 (int16_t)(45.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 6 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_6    (uint16_t)264

/* Temperature segment 7 from +60degC to +80degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_7 (int16_t)(60.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 7 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_7    (uint16_t)293

/* Temperature segment 8 from +80degC to +125degC. Low boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_8 (int16_t)(80.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding low boundary ADC sensor data for segment 8 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_8    (uint16_t)333

/* Temperature segment 8 from +80degC to +125degC. High boundary value defined */
#define NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_HIGH_BOUND_SEG_8 (int16_t)(125.0f * NB_CAL_Q8_FIXEDPOINT_MULT)
/* Corresponding high boundary ADC sensor data for segment 8 */
#define NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_HIGH_BOUND_SEG_8    (uint16_t)423

/* Slope of Temperature vs ADC sensor data curve for each segment */
#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_1  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_2 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_1)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_2 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_1))

#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_2  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_3 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_2)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_3 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_2))

#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_3  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_4 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_3)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_4 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_3))

#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_4  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_5 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_4)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_5 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_4))

#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_5  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_6 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_5)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_6 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_5))

#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_6  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_7 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_6)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_7 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_6))

#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_7  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_8 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_7)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_8 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_7))

#define NB_CAL_DATA_TEMP_SENSOR_SLOPE_SEG_8  \
                              (int16_t)((NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_HIGH_BOUND_SEG_8 - \
                                         NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_8)/ \
                                         (NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_HIGH_BOUND_SEG_8 - \
                                          NB_CAL_DATA_TEMP_SENSOR_ADC_DATA_LOW_BOUND_SEG_8))
 
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_1  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_2 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_1))
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_2  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_3 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_2))
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_3  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_4 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_3))
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_4  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_5 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_4))
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_5  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_6 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_5))                                 
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_6  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_7 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_6))
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_7  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_8 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_7))
#define NB_CAL_DATA_TEMP_RECIPROCAL_SLOPE_SEG_8  \
                                  (int16_t)(NB_CAL_Q8_FIXEDPOINT_MULT*NB_CAL_Q8_FIXEDPOINT_MULT/ \
                                  (NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_HIGH_BOUND_SEG_8 - \
                                             NB_CAL_DATA_TEMPERATURE_DEG_CELSIUS_LOW_BOUND_SEG_8))

/* Default calibration data header values */
#define NB_CAL_DATA_HEADER_STATUS_DEFAULT           (uint16_t)0  
#define NB_CAL_DATA_HEADER_DB_VERSION_MAJOR_DEFAULT (uint8_t)N1_RF_CAL_DATA_MAJOR_VERSION
#define NB_CAL_DATA_HEADER_DB_VERSION_MINOR_DEFAULT (uint8_t)N1_RF_CAL_DATA_MINOR_VERSION
#define NB_CAL_DATA_HEADER_BANDS_RX_DEFAULT_1       (uint32_t)0
#define NB_CAL_DATA_HEADER_BANDS_RX_DEFAULT_2       (uint32_t)0
#define NB_CAL_DATA_HEADER_BANDS_RX_DEFAULT_3       (uint32_t)0
#define NB_CAL_DATA_HEADER_BANDS_TX_DEFAULT_1       (uint32_t)0
#define NB_CAL_DATA_HEADER_BANDS_TX_DEFAULT_2       (uint32_t)0
#define NB_CAL_DATA_HEADER_BANDS_TX_DEFAULT_3       (uint32_t)0
#define NB_CAL_DATA_HEADER_UE_SW_VERSION_DEFAULT    (((uint32_t)NB_CAL_SW_VERSION_MAJOR << 16) | ((uint32_t)NB_CAL_SW_VERSION_MINOR))
#define NB_CAL_DATA_HEADER_META_SW_VERSION_DEFAULT  (uint32_t)0

#endif /* NB_CALIB_DEFAULTS_H */
/* end of file */
