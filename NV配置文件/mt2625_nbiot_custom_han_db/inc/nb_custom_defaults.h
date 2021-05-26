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
#ifndef NB_CUSTOM_DEFAULTS_H
#define NB_CUSTOM_DEFAULTS_H


/* ========================================================================= */
/*   FORMAT CONVERSION MULTIPLIERS                                           */
/* ========================================================================= */
#define NB_CUSTOM_Q8_FIXEDPOINT_MULT        (256)

#include "nb_custom_defaults_hw_var0.h"
#include "nb_custom_defaults_hw_var1.h"
#include "nb_custom_defaults_hw_var2.h"
#include "nb_custom_defaults_hw_var3.h"
#include "nb_custom_defaults_hw_var4.h"
#include "nb_custom_defaults_hw_var5.h"
#include "nb_custom_defaults_hw_var6.h"
#include "nb_custom_rffe.h"

/***************************************************************************************************************************************
* [Description]
* DRDI structure has new change, it mainly cares that most of customer don't use DRDI feature, but
* this part maybe cost code size, and DRDI configuration is not also very flexible.
*
* [DRDI configuration step1]
* For the detail introduction, customer can refer to the MTK release of custom file SOP.
*
* "NB_CUSTOM_DRDI_MODE_PARAM_SET" is custom file DRDI mode option. you can use the below these configuration.
*
*     NB_CUSTOM_RFFE_HW_VAR_DYNAMIC    ---> DRDI enable, code size will contain VAR1/VAR2/VAR3 codebase;
*
*     NB_RFFE_HW_VAR0_CUSTOM_FILE         ---> DRDI disable, only VAR0 codebase, default value support single PA;
*
*     NB_RFFE_HW_VAR1_CUSTOM_FILE         ---> DRDI disable, only VAR1 codebase, default value support Skyworks FEM ES1 + MT2625 design
*
*     NB_RFFE_HW_VAR2_CUSTOM_FILE         ---> DRDI disable, only VAR2 codebase, default value support Skyworks FEM ES2 + MT2625 design
*
*     NB_RFFE_HW_VAR3_CUSTOM_FILE         ---> DRDI disable, only VAR3 codebase, default value support Skyworks FEM ES2 + MT2621 design
*
*     NB_RFFE_HW_VAR4_CUSTOM_FILE         ---> DRDI disable, only VAR4 codebase, default value support qorvo QM55001_E2 FEM + MT2625 design
*
*     NB_RFFE_HW_VAR5_CUSTOM_FILE         ---> DRDI disable, only VAR5 codebase, default value support HS8023-12 FEM + MT2621 design
*
*     NB_RFFE_HW_VAR6_CUSTOM_FILE         ---> DRDI disable, only VAR6 codebase, default value support HS8018-31 FEM + MT2625 design
*****************************************************************************************************************************************/
#define NB_CUSTOM_DRDI_MODE_PARAM_SET                NB_RFFE_HW_VAR0_CUSTOM_FILE

/******************************************************************************************************************************************
* This is pre-compiled area, please modify above"NB_CUSTOM_DRDI_MODE_PARAM_SET". if you enable DRDI feature, please configure DRDI mode set
* For the DRDI dynamic mode, you can use "Aux_adc" and "FEM ID" to achivement.
*
*  [DRDI configuration step2]
*      NB_CUSTOM_DATA_DRDI_MODE_SET  --->  RF_HW_DYNAMIC                    "judge voltage range by aux_adc" 
*      
*      NB_CUSTOM_DATA_DRDI_MODE_SET  ---> RF_HW_DYNAMIC_USID             "read FEM USID by mipi"
*******************************************************************************************************************************************/
#if NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_CUSTOM_RFFE_HW_VAR_DYNAMIC
  //enable drdi feature, and set custom file
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_DYNAMIC
  /* enable DRDI dynamic mode*/
  #define NB_RF_CUSTOM_DRDI_ENABLE
#elif NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_RFFE_HW_VAR0_CUSTOM_FILE
  //enable drdi feature, and set custom file
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_VAR_SINGLE_PA
  /* mapping to VAR0 file*/
  #define NB_RF_CUSTOM_SINGLE_PA
#elif NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_RFFE_HW_VAR1_CUSTOM_FILE
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_VAR_1
  /* mapping to VAR1 file*/
  #define NB_RF_CUSTOM_MT2625_SKY68018_ES1

#elif NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_RFFE_HW_VAR2_CUSTOM_FILE
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_VAR_2
  /* mapping to VAR2 file*/
  #define NB_RF_CUSTOM_MT2625_SKY68018_ES2

#elif NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_RFFE_HW_VAR3_CUSTOM_FILE
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_VAR_3
  /* mapping to VAR3 file*/
  #define NB_RF_CUSTOM_MT2621_SKY68018_ES2
  
#elif NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_RFFE_HW_VAR4_CUSTOM_FILE
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_VAR_4
  /* mapping to VAR4 file*/
  #define NB_RF_CUSTOM_MT2625_QM55001

#elif NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_RFFE_HW_VAR5_CUSTOM_FILE
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_VAR_HS8023_12
  /* mapping to VAR5 file*/
  #define NB_RF_CUSTOM_MT2621_HS8023_12

#elif NB_CUSTOM_DRDI_MODE_PARAM_SET == NB_RFFE_HW_VAR6_CUSTOM_FILE
  #define NB_CUSTOM_DATA_DRDI_MODE_SET                   RF_HW_VAR_HS8018_31
  /* mapping to VAR5 file*/
  #define NB_RF_CUSTOM_MT2625_HS8018_31

#endif

/********************************************************************************************************************************************
* This is precompiled area, please modify above code for DRDI mode param set. if you enable DRDI feature, please configure var file codebase
*
*[DRDI configuration step3]
* DRDI defalut file is  VAR1, VAR2, VAR3. 
*
********************************************************************************************************************************************/
#ifdef NB_RF_CUSTOM_DRDI_ENABLE
/* mapping to VAR0 file*/
//#define NB_RF_CUSTOM_SINGLE_PA
/* mapping to VAR1 file*/
#define NB_RF_CUSTOM_MT2625_SKY68018_ES1
/* mapping to VAR2 file*/
#define NB_RF_CUSTOM_MT2625_SKY68018_ES2
/* mapping to VAR3 file*/
//#define NB_RF_CUSTOM_MT2621_SKY68018_ES2
/* mapping to VAR4 file*/
//#define NB_RF_CUSTOM_MT2625_QM55001
/* mapping to VAR5 file*/
//#define NB_RF_CUSTOM_MT2621_HS8023_12
/* mapping to VAR6 file*/
//#define NB_RF_CUSTOM_MT2625_HS8018_31

#define NB_RF_CUSTOM_VAR_0                           0
#define NB_RF_CUSTOM_VAR_1                           0
#define NB_RF_CUSTOM_VAR_2                           1
#define NB_RF_CUSTOM_VAR_3                           0
#define NB_RF_CUSTOM_VAR_4                           0
#define NB_RF_CUSTOM_VAR_5                           0
#define NB_RF_CUSTOM_VAR_6                           0
#else
#define NB_RF_CUSTOM_VAR_0                           0
#define NB_RF_CUSTOM_VAR_1                           0
#define NB_RF_CUSTOM_VAR_2                           0
#define NB_RF_CUSTOM_VAR_3                           0
#define NB_RF_CUSTOM_VAR_4                           0
#define NB_RF_CUSTOM_VAR_5                           0
#define NB_RF_CUSTOM_VAR_6                           0
#endif

/*default DRDI data values*/
#define Low_VOLTAGE_HW_VAR0                         (uint16_t)0
#define High_VOLTAGE_HW_VAR0                        (uint16_t)0
#define Low_VOLTAGE_HW_VAR1                         (uint16_t)0
#define High_VOLTAGE_HW_VAR1                        (uint16_t)200
#define Low_VOLTAGE_HW_VAR2                         (uint16_t)800
#define High_VOLTAGE_HW_VAR2                        (uint16_t)1000
#define Low_VOLTAGE_HW_VAR3                         (uint16_t)1000
#define High_VOLTAGE_HW_VAR3                        (uint16_t)1200
#define Low_VOLTAGE_HW_VAR4                         (uint16_t)0
#define High_VOLTAGE_HW_VAR4                        (uint16_t)0
#define Low_VOLTAGE_HW_VAR5                         (uint16_t)0
#define High_VOLTAGE_HW_VAR5                        (uint16_t)0
#define Low_VOLTAGE_HW_VAR6                         (uint16_t)0
#define High_VOLTAGE_HW_VAR6                        (uint16_t)0


/* internal band list control,
  **for custom, it should be disabled.
  ** for internal use, it can be enabled */
#define INTERNAL_BAND_LIST_CTRL            RF_INTERNAL_BAND_LIST_DISABLED

#endif /* NB_CUSTOM_DEFAULTS_H */
/* end of file */
