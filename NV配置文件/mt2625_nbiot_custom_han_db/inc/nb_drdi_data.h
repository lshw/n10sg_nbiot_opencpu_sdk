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
#ifndef NB_DRDI_DATA_H
#define NB_DRDI_DATA_H

/******************************************************************************
*  Include
*******************************************************************************/
//Standard headers
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "nb_custom_data.h"
#include "n1_rf_cal_data.h"
#include "nb_custom_defaults.h"

/******************************************************************************
 * CONSTANTS
 ******************************************************************************/

/******************************************************************************
 * MACROS
 ******************************************************************************/

/******************************************************************************
 * DATA TYPES
 *****************************************************************************/
/**define the number of DRDI modes supported.Also defines the indexes to be used*
**  to while referring to each of the DRDI modes.*/
typedef enum
{
  RF_HW_DYNAMIC_USID = -1,
  RF_HW_DYNAMIC = 0,
  RF_HW_VAR_SINGLE_PA = 1,
  RF_HW_VAR_1 = 2,
  RF_HW_VAR_2 = 3,
  RF_HW_VAR_3 = 4,
  RF_HW_VAR_4 = 5,
  RF_HW_VAR_HS8023_12 =6,
  RF_HW_VAR_HS8018_31 = 7,
  RF_HW_MAX_MODE_COUNT
} N1RfDrdiMode;

/* Information related to DRDI */
typedef enum
{
  NB_RFFE_CUSTOM_DRDI_DISABLED = 0,
  NB_RFFE_CUSTOM_DRDI_ENABLED = 1
} NB_RFFE_CUSTOM_DRDI_FEA_FLAG;

typedef enum
{
  NB_RF_CALIB_DRDI_DISABLED = 0,
  NB_RF_CALIB_DRDI_ENABLED = 1
} NB_RF_CALIB_DRDI_FEA_FLAG;

/* Available HW variants for DRDI dynamic detection */
typedef enum
{
  RF_HW_IDX_START = 0,
#ifdef NB_RF_CUSTOM_SINGLE_PA
  RF_HW_IDX_SINGLE_BAND_PA = NB_RF_CUSTOM_VAR_0,
#endif
#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES1
  RF_HW_IDX_VAR1 = NB_RF_CUSTOM_VAR_1,
#endif
#ifdef NB_RF_CUSTOM_MT2625_SKY68018_ES2
  RF_HW_IDX_VAR2 = NB_RF_CUSTOM_VAR_2,
#endif
#ifdef NB_RF_CUSTOM_MT2621_SKY68018_ES2
  RF_HW_IDX_VAR3 = NB_RF_CUSTOM_VAR_3,
#endif
#ifdef NB_RF_CUSTOM_MT2625_QM55001
  RF_HW_IDX_VAR4 = NB_RF_CUSTOM_VAR_4,
#endif
#ifdef NB_RF_CUSTOM_MT2621_HS8023_12
  RF_HW_IDX_HS8023_12 = NB_RF_CUSTOM_VAR_5,
#endif
#ifdef NB_RF_CUSTOM_MT2625_HS8018_31
  RF_HW_IDX_HS8018_31 = NB_RF_CUSTOM_VAR_6,
#endif
  RF_HW_IDX_MAX_VAR_COUNT,
} NB_RF_DRDI_HW_VARIANT;

#if 0
/* Possible HW IDs for DRDI dynamic detection */
typedef enum
{
  RF_HW_ID1 = 1,
  RF_HW_ID2 = 2,
  RF_HW_ID3 = 3,
  RF_HW_ID_MAX_COUNT
} NB_RF_DRDI_HW_ID;
#endif

typedef enum
{
  RF_INTERNAL_BAND_LIST_DISABLED = 0,
  RF_INTERNAL_BAND_LIST_ENABLED = 1
}N1BandListCtrl;

/* DRDI ADC Voltage, thresholds vlot1 and vlot2*/
typedef struct
{
  uint16_t        adc_vlot1;
  uint16_t        adc_vlot2;
}N1RfAdcData;

/* DRDI data infromation in the custom file*/
typedef struct
{
  /*N1RfDrdiMode drdi_hw_mode*/
  N1RfDrdiMode    drdi_hw_mode;
  /*DRDI ADC voltage thresholds*/
  N1RfAdcData     adc_data[RF_HW_IDX_MAX_VAR_COUNT];
} N1RfDrdiData;

/* Data structure carrying all DRDI related information for RFFE customization */
typedef struct
{
  /* Informs whether DRDI feature is used in this customization */
  /* HW ID detection is used only if DRDI feature is turned on. */
  NB_RFFE_CUSTOM_DRDI_FEA_FLAG    drdi_feature_flag;
  /* No of available HW variants/DRDI sets in this customization */
  uint8_t                         no_of_available_hw_variants;
  /* Access to database pointers */
  const NB_RFFE_CUSTOM_DATABASE_T **rf_custom_db;
  /*save customer's DRDI info in custom file*/
  const  N1RfDrdiData             *drdi_data;
} NB_RFFE_CUSTOM_DRDI_INFO_T;

/* Data structure carrying all DRDI related information for default RF calibraiton data */
typedef struct
{
  /* Informs whether DRDI feature is used in this customization */
  /* HW ID detection is used only if DRDI feature is turned on. */
  NB_RF_CALIB_DRDI_FEA_FLAG     drdi_feature_flag;
  /* No of available HW variants/DRDI sets in this customization */
  uint8_t                       no_of_available_hw_variants;
  /* Access to database pointers */
  const struct N1RfDefaultCalDatabase   **rf_default_cal_db;
} NB_RF_CALIB_DRDI_INFO_T;

#endif /* NB_DRDI_DATA_H */
/* end of file */
