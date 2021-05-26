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
#ifndef NB_CUSTOM_RFFE_HW_VAR1_H
#define NB_CUSTOM_RFFE_HW_VAR1_H

/* ========================================================================= */
/* RFFE Main configuration                                                   */
/* ========================================================================= */
/* The main RF FE configuration defines the FE configuration for each band.  *
 *                                                                           *
 * For each band, the band support is enabled or disabled by using the key,  *
 * RFFE_BAND_SUPPORTED or RFFE_BAND_NOT_SUPPORTED, respectively.             *
 *                                                                           *
 * For both Rx and Tx paths, there are 4 possible FE paths and for each band *
 * the desired front end path can be chosen, as RFFE_RX_PATH_1, _2, _3 & _4, *
 * for Rx and RFFE_TX_PATH_1, _2, _3 & _4 for Tx.                            *
 *                                                                           *
 * For Rx and Tx paths, the respective RFIC Rx and Tx ports can be assigned  *
 * as well. This field is not really open for customization as RFIC ports can*
 * only receive or transmit specific bands, but they are added here for more *
 * information and completeness.                                             *
 *                                                                           *
 * The supported Tx power class can be specified using RFFE_TX_POWER_CLASS_1,*
 * _2, _3, _4 & _5.                                                          *
 *                                                                           *
 * For unsupported bands, the respective fields may carry RFFE_RX_NO_PATH,   *
 * RFFE_TX_NO_PATH, and RFFE_TX_NO_POWER_CLASS values.                       *
 *                                                                           *
 * By default only CMCC (3,5,8 & 20) and CT (1,3 & 5) bands enabled.         */

/* Band 1 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_1    RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_1         RFFE_RX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_1         RFIC_RX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_1         RFFE_TX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_1         RFIC_TX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_1  RFFE_TX_POWER_CLASS_3

/* Band 2 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_2    RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_2         RFFE_RX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_2         RFIC_RX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_2         RFFE_TX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_2         RFIC_TX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_2  RFFE_TX_POWER_CLASS_3

/* Band 3 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_3    RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_3         RFFE_RX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_3         RFIC_RX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_3         RFFE_TX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_3         RFIC_TX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_3  RFFE_TX_POWER_CLASS_3

/* Band 4 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_4    RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_4         RFFE_RX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_4         RFIC_RX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_4         RFFE_TX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_4         RFIC_TX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_4  RFFE_TX_POWER_CLASS_3

/* Band 5 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_5    RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_5         RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_5         RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_5         RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_5         RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_5  RFFE_TX_POWER_CLASS_3

/* Band 8 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_8    RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_8         RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_8         RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_8         RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_8         RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_8  RFFE_TX_POWER_CLASS_3

/* Band 11 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_11   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_11        RFFE_RX_PATH_3
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_11        RFIC_RX_PORT_MB1
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_11        RFFE_TX_PATH_3
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_11        RFIC_TX_PORT_MB1
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_11 RFFE_TX_POWER_CLASS_3

/* Band 12 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_12   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_12        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_12        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_12        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_12        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_12 RFFE_TX_POWER_CLASS_3

/* Band 13 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_13   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_13        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_13        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_13        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_13        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_13 RFFE_TX_POWER_CLASS_3

/* Band 14 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_14   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_14        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_14        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_14        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_14        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_14 RFFE_TX_POWER_CLASS_3

/* Band 17 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_17   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_17        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_17        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_17        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_17        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_17 RFFE_TX_POWER_CLASS_3

/* Band 18 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_18   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_18        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_18        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_18        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_18        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_18 RFFE_TX_POWER_CLASS_3

/* Band 19 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_19   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_19        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_19        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_19        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_19        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_19 RFFE_TX_POWER_CLASS_3

/* Band 20 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_20   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_20        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_20        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_20        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_20        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_20 RFFE_TX_POWER_CLASS_3

/* Band 21 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_21   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_21        RFFE_RX_PATH_3
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_21        RFIC_RX_PORT_MB1
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_21        RFFE_TX_PATH_3
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_21        RFIC_TX_PORT_MB1
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_21 RFFE_TX_POWER_CLASS_3

/* Band 25 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_25   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_25        RFFE_RX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_25        RFIC_RX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_25        RFFE_TX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_25        RFIC_TX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_25 RFFE_TX_POWER_CLASS_3

/* Band 26 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_26   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_26        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_26        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_26        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_26        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_26 RFFE_TX_POWER_CLASS_3

/* Band 28 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_28   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_28        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_28        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_28        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_28        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_28 RFFE_TX_POWER_CLASS_3

/* Band 31 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_31   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_31        RFFE_RX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_31        RFIC_RX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_31        RFFE_TX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_31        RFIC_TX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_31 RFFE_TX_POWER_CLASS_3

/* Band 66 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_66   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_66        RFFE_RX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_66        RFIC_RX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_66        RFFE_TX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_66        RFIC_TX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_66 RFFE_TX_POWER_CLASS_3

/* Band 70 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_70   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_70        RFFE_RX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_70        RFIC_RX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_70        RFFE_TX_PATH_4
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_70        RFIC_TX_PORT_MB2
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_70 RFFE_TX_POWER_CLASS_3

/* Band 71 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_71   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_71        RFFE_RX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_71        RFIC_RX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_71        RFFE_TX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_71        RFIC_TX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_71 RFFE_TX_POWER_CLASS_3

/* Band 72 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_72   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_72        RFFE_RX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_72        RFIC_RX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_72        RFFE_TX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_72        RFIC_TX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_72 RFFE_TX_POWER_CLASS_3

/* Band 73 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_73   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_73        RFFE_RX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_73        RFIC_RX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_73        RFFE_TX_PATH_1
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_73        RFIC_TX_PORT_ULB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_73 RFFE_TX_POWER_CLASS_3


/* Band 74 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_74   RFFE_BAND_NOT_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_74        RFFE_RX_PATH_3
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_74        RFIC_RX_PORT_MB1
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_74        RFFE_TX_PATH_3
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_74        RFIC_TX_PORT_MB1
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_74 RFFE_TX_POWER_CLASS_3

/* Band 85 information */
#define NB_RFFE_HW_VAR1_BAND_SUPPORT_INFO_BAND_85   RFFE_BAND_SUPPORTED
#define NB_RFFE_HW_VAR1_RX_PATH_INFO_BAND_85        RFFE_RX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_RX_PORT_BAND_85        RFIC_RX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_PATH_INFO_BAND_85        RFFE_TX_PATH_2
#define NB_RFFE_HW_VAR1_RFIC_TX_PORT_BAND_85        RFIC_TX_PORT_LB
#define NB_RFFE_HW_VAR1_TX_POWER_CLASS_INFO_BAND_85 RFFE_TX_POWER_CLASS_3

/* ========================================================================= */
/*   ADDR and DATA to read and build RF Front End Module Identification      */
/* ========================================================================= */
#define INVALID 0xFF
#define NB_RFFE_HW_VAR1_FEM_MANUFACTURER_ID_ADDR    0x1E
#define NB_RFFE_HW_VAR1_FEM_PRODUCT_ID_ADDR         0x1D
#define NB_RFFE_HW_VAR1_FEM_REVISION_ID_ADDR        0x21
#define NB_RFFE_HW_VAR1_FEM_USER_ID_ADDR            0x1F

#define NB_RFFE_HW_VAR1_FEM_MANUFACTURER_ID_DATA    0xA5
#define NB_RFFE_HW_VAR1_FEM_PRODUCT_ID_DATA         INVALID
#define NB_RFFE_HW_VAR1_FEM_REVISION_ID_DATA        0x00
#define NB_RFFE_HW_VAR1_FEM_USER_ID_DATA            INVALID


/*****************************************************************************
 **NTC temperature sensor driver item
*  1  ---> support NTC sensor
*  0  ---> Not support NTC sensor
*display temperature informration by meta tool
*****************************************************************************/
#define NB_RFFE_HW_VAR1_RFM_NTC_TEMPERATURE_ITEM    0x00

/***********************************************************************************
*To separate single tone and multi tone calibration item, and keep this feature version capatibility,
* this feature mainly optimize the single tone power consumption, if you don't need this feature please ignore it
*add the Multi-tone/single-tone calibration flag;
************************************************************************************/
#define NB_RFFE_HW_VAR1_RFC_MS_FLAG                 RFFE_CAL_MODE

/****************************************************************************
** this itme is RF tranceiver controlled timing option,  qorvo FEM needs use new controlled timing;
* MTK only do GCF test in the qorvo FEM platform, if customer wants use new timing in the other FEM,
* please do related GCF test to ensure its performance;
*
*   PA_CONTROL_SCHEME_LEGACY :  this is the legacy control timing, it is also default setting;
*   PA_CONTROL_SCHEME_1: it only support qorvo FEM;
****************************************************************************/
#define NB_RFFE_HW_VAR1_RFIC_CONTROL_TIMING_ITEM    PA_CONTROL_SCHEME_LEGACY

/* ========================================================================= */
/*   Crystal Scurve fitting - this should be set according to crystal spec   */
/*   Use 3 order scurve fitting equation:                                    */
/*   y = C3(t-t0)^3 + C2(t-t0)^2 + C1(t-t0) + C0                             */
/*   C0 is calibrated in AFC calibration, so do not care.                    */
/*   C3/C2/C1 should in S6.25 format: C3/C2/C1 * 2^25                        */
/*   t0 is the inflection point, here we use Q8 format: t0 * 256             */
/* ========================================================================= */
#define NB_RFFE_HW_VAR1_SCURVE_3_ORDER_FITTING_C3   3298
#define NB_RFFE_HW_VAR1_SCURVE_3_ORDER_FITTING_C2   -261217
#define NB_RFFE_HW_VAR1_SCURVE_3_ORDER_FITTING_C1   -5423313

#define NB_RFFE_HW_VAR1_SCURVE_INFLECTION_POINT     0   


/* ========================================================================= */
/*   MIPI USID Default Value                                                 */
/* ========================================================================= */
#define NB_RFFE_HW_VAR1_USID_FEM_1                  0x0F
#define NB_RFFE_HW_VAR1_USID_PA_1                   0x00
#define NB_RFFE_HW_VAR1_USID_ANT_1                  0x00
#define NB_RFFE_HW_VAR1_FEM_ID_READ_DELAY_US         0

/* Max Power limited parameters in Signaling Test and NSFT from RfCapability */
/* LIMITED_BITMAP_BAND_INFO:                                                                                              */
/* default bitmap 0x00000000 means 26 band not use limited max power(band control only for Signaling Test)    */
/* 0x03FFFFFF means 26 bands all use limited max power(band control only for Signaling Test)                          */
/* bit31 means LIMIT_NSFT_MAX_TX_PWR_FLAG,bit31=1 means enable limit NSFT max Tx power                      */
#define N1_CAPABILITY_HW_VAR1_LIMITED_BITMAP_BAND_INFO  0x00000000
/* for example,set band1 & band28 use limited max power, band1->band index0 ->bit0 of limited_bitmap, band28 ->band index17 ->bit17 of limited_bitmap*/
/* band index of specific band can be referred to enum NB_RFFE_BAND in nb_custom_data.h  of custom file       */
/*   0x00000000|(1<<0)|(1<<17) =0x00020001   --> #define     N1_CAPABILITY_HW_VAR1_LIMITED_BITMAP_BAND_INFO          0x00020001                     */

#define N1_CAPABILITY_HW_VAR1_LIMITED_MAX_TX_POWER   0x1700 //S7.8 format, 0x1700 means 0x1700>>8 =0x17 =23dBm

#define HW_VAR1_LIMIT_NSFT_MAX_TX_PWR_FLAG_LIMITED_BITMAP_BIT31   0 // 0 means disable limit NSFT max Tx power,1 means enable limit NSFT max Tx power
                                                                    //when NSFT max Tx power limit enabled, max tx power in all band will be limited in NSFT.

#define N1_CAPABILITY_HW_VAR1_LIMITED_BAND_BITMAP  (N1_CAPABILITY_HW_VAR1_LIMITED_BITMAP_BAND_INFO|(HW_VAR1_LIMIT_NSFT_MAX_TX_PWR_FLAG_LIMITED_BITMAP_BIT31 << 31))

/* ========================================================================= */
/*   BPI/GPIO Control Default Value                                          */
/* ========================================================================= */
/* 10 BPI pins (BPI_0 to BPI_9) are available in MT2625 for RF FE controls   */
/*  Following are the parameters that define the control of a component by   */
/* BPI pins. As an eg.if there is a PA module controlled by BPI pins 5,6&7   */
/* then it will have the definitions as                                      */
/* #define BPI_LBIT_PA_Eg_SetDefault        0x05 Lowest control bit is 5    */
/* #define BPI_MASK_PA_Eg_SetDefault        0x03 Total 3 bits are used      */

#define NB_RFFE_HW_VAR1_BPI_SHFT_ANT_1              0x00 /* Number of BPI shift bits*/
#define NB_RFFE_HW_VAR1_BPI_MASK_ANT_1              0x00 /* BPI bitmask for control */

#define NB_RFFE_HW_VAR1_BPI_SHFT_PA_1_EN            0x00 /* Number of BPI shift bits*/
#define NB_RFFE_HW_VAR1_BPI_MASK_PA_1_EN            0x01 /* BPI bitmask for control */

#define NB_RFFE_HW_VAR1_BPI_SHFT_PA_1_BIAS          0x01 /* Number of BPI shift bits*/
#define NB_RFFE_HW_VAR1_BPI_MASK_PA_1_BIAS          0x03 /* BPI bitmask for control */

#define NB_RFFE_HW_VAR1_BPI_SHFT_PA_2_EN            0x00 /* Number of BPI shift bits*/
#define NB_RFFE_HW_VAR1_BPI_MASK_PA_2_EN            0x01 /* BPI bitmask for control */

#define NB_RFFE_HW_VAR1_BPI_SHFT_PA_2_BIAS          0x01 /* Number of BPI shift bits*/
#define NB_RFFE_HW_VAR1_BPI_MASK_PA_2_BIAS          0x03 /* BPI bitmask for control */

/* ========================================================================= */
/*   RFFE (MIPI or BPI controlled) T/R ON/OFF event timing                   */
/*   Antenna Switch Module and PA module controls for Tx/Rx operations       */
/*   All time values specified in microseconds.                              */
/* ========================================================================= */
/* Two separate controls are possible during Rx ON. These controls can target*/
/* antenna, FEM or any of the switches in Rx path. Time value specifies the  */
/* time delay after receiving the first useful symbol at the antenna.        */
#define  NB_RFFE_HW_VAR1_RX_ON_1_SetDefault         NB_RFFE_TIME_US(-70) /* First control event */
#define  NB_RFFE_HW_VAR1_RX_ON_2_SetDefault         NB_RFFE_TIME_US(0)  /* Second control event */

/* Two separate controls are possible during Rx OFF. These controls can targ-*/
/* et antenna, FEM or any of the switches in Rx path. Time value specifies   */
/* the time delay after receiving the last useful symbol at the antenna.     */
#define  NB_RFFE_HW_VAR1_RX_OFF_1_SetDefault        NB_RFFE_TIME_US(5+300) /* First control event */
#define  NB_RFFE_HW_VAR1_RX_OFF_2_SetDefault        NB_RFFE_TIME_US(5)     /* Second control event */

/* Three separate controls are possible during Tx ON for NPRACH. These contr-*/
/* ols can target Antenna, FEM, PA or any of the components in Tx path.Time  */
/* value specifies the time delay after transmitting the first useful symbol */
/* at the ant. Timing controls for NPUSCH needs to be different due to diffe-*/
/* rrent ON/OFF mask requirement.                                            */
#define  NB_RFFE_HW_VAR1_TX_ON_1_FEM_PA             NB_RFFE_TIME_US(-75-50) /* First control event */
#define  NB_RFFE_HW_VAR1_TX_ON_2_FEM_PA             NB_RFFE_TIME_US(-5)  /* Second control event */
#define  NB_RFFE_HW_VAR1_TX_ON_3_FEM_PA             NB_RFFE_TIME_US(0)  /* Third control event */
/* controls for satellite PA route */
#define  NB_RFFE_HW_VAR1_TX_ON_1_SAT_PA             NB_RFFE_TIME_US(-75-50) /* First control event */
#define  NB_RFFE_HW_VAR1_TX_ON_2_SAT_PA             NB_RFFE_TIME_US(-20) /* Second control event */
#define  NB_RFFE_HW_VAR1_TX_ON_3_SAT_PA             NB_RFFE_TIME_US(-5)  /* Third control event */

/* NPUSCH Tx timing controls are derived from the NPRACH timing controls def-*/
/* ined above by adding a delta time offset to each of the controls. Defined */
/* below is the time offset which would be added to each TX ON timing during */
/* NPUSCH Tx.                                                                */
#define  NB_RFFE_HW_VAR1_NPRACH_NPUSCH_TX_ON_TIME_DIFF NB_RFFE_TIME_US(7)

/* One control event during Tx power change to update PA controls. Time value*/
/* specifies the time delay after the power change is affected.              */
#define NB_RFFE_HW_VAR1_TX_PWR_CHG_FEM_PA           NB_RFFE_TIME_US(-20)
#define NB_RFFE_HW_VAR1_TX_PWR_CHG_SAT_PA           NB_RFFE_TIME_US(-20)

/* One control event each for Tx power blanking. FEM is put into high isolat-*/
/* ion mode during blanking, and enabled while coming out of blanking.       */
#define NB_RFFE_HW_VAR1_TX_PWR_OFF_SetDefault       NB_RFFE_TIME_US(0)
#define NB_RFFE_HW_VAR1_TX_PWR_ON_SetDefault        NB_RFFE_TIME_US(-5)

/* Three separate controls are possible during Tx OFF. These controls can    */
/* target Antenna, FEM, PA or any of the components in Tx path.Time value    */
/* specifies the time delay after transmitting the last useful symbol at the */
/* antenna.                                                                  */
#define  NB_RFFE_HW_VAR1_TX_OFF_1_SetDefault        NB_RFFE_TIME_US(50)  /* First control event */
#define  NB_RFFE_HW_VAR1_TX_OFF_2_SetDefault        NB_RFFE_TIME_US(70) /* Second control event */
#define  NB_RFFE_HW_VAR1_TX_OFF_3_SetDefault        NB_RFFE_TIME_US(80) /* Third control event */

/* ========================================================================= */
/* RFFE RX Event and Control data Tables for each RF FE Rx path              */
/* ========================================================================= */
/* Rx Events for FE path 1 (for ULB RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_1 \
{ \
  /* No.             ctrl type      ,  data idx                       , evt_type       , evt_offset             */ \
  /*                                  { start        , stop          },                  ( us )                 */ \
  [RFFE_RX_EVT_1] = {RFFE_MIPI      , {RFFE_RX_DATA_1, RFFE_RX_DATA_4}, RFFE_RX_ON_1   , NB_RFFE_HW_VAR1_RX_ON_2_SetDefault }, \
  [RFFE_RX_EVT_2] = {RFFE_CTRL_NULL , {RFFE_RX_DATA_7, RFFE_RX_DATA_7}, RFFE_RX_ON_2   , NB_RFFE_HW_VAR1_RX_ON_2_SetDefault }, \
  [RFFE_RX_EVT_3] = {RFFE_MIPI      , {RFFE_RX_DATA_5, RFFE_RX_DATA_5}, RFFE_RX_OFF_1  , NB_RFFE_HW_VAR1_RX_OFF_2_SetDefault}, \
  [RFFE_RX_EVT_4] = {RFFE_MIPI      , {RFFE_RX_DATA_6, RFFE_RX_DATA_6}, RFFE_RX_OFF_2  , NB_RFFE_HW_VAR1_RX_OFF_2_SetDefault}, \
}

/* Rx FE control Data for FE path 1 (for ULB RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_1 \
{ \
  /*No.               elm type , port_sel        , { { MIPI USID                  , mipi_addr/, mipi_data/,} )*/ \
  /*                                               { { gpio_bit_position          , gpio_bitmask   , gpio_data  } }*/ \
  [RFFE_RX_DATA_1] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x1C      , 0x38       } }, }, \
  [RFFE_RX_DATA_2] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xBC       } }, }, \
  [RFFE_RX_DATA_3] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x01      , 0x00       } }, }, \
  [RFFE_RX_DATA_4] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x03      , 0x80       } }, }, \
  [RFFE_RX_DATA_5] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x81       } }, }, \
  [RFFE_RX_DATA_6] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xFD       } }, }, \
  [RFFE_RX_DATA_7] = {RFFE_COMP_NULL, RFFE_PORT_NULL, { { 0                       , 0         , 0          } }, }, \
}

/* Rx Events for FE path 2 (for LB RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_2 \
{ \
  /* No.             ctrl type      , data idx                         , evt_type       , evt_offset             */ \
  /*                                  { start         , stop          },                  ( us )                 */ \
  [RFFE_RX_EVT_1] = {RFFE_MIPI      , {RFFE_RX_DATA_1, RFFE_RX_DATA_4}, RFFE_RX_ON_1   , NB_RFFE_HW_VAR1_RX_ON_1_SetDefault }, \
  [RFFE_RX_EVT_2] = {RFFE_CTRL_NULL , {RFFE_RX_DATA_7, RFFE_RX_DATA_7}, RFFE_RX_ON_2   , NB_RFFE_HW_VAR1_RX_ON_2_SetDefault }, \
  [RFFE_RX_EVT_3] = {RFFE_MIPI      , {RFFE_RX_DATA_5, RFFE_RX_DATA_5}, RFFE_RX_OFF_1  , NB_RFFE_HW_VAR1_RX_OFF_1_SetDefault}, \
  [RFFE_RX_EVT_4] = {RFFE_MIPI      , {RFFE_RX_DATA_6, RFFE_RX_DATA_6}, RFFE_RX_OFF_2  , NB_RFFE_HW_VAR1_RX_OFF_2_SetDefault}, \
}

/* Rx FE control Data for FE path 2 (for LB RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_2 \
{ \
  /*No.               elm type , port_sel        , { { MIPI USID                  , mipi_addr/, mipi_data/,} )*/ \
  /*                                               { { gpio_bit_position          , gpio_bitmask   , gpio_data  } }*/ \
  [RFFE_RX_DATA_1] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x1C      , 0x38       } }, }, \
  [RFFE_RX_DATA_2] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x8C       } }, }, \
  [RFFE_RX_DATA_3] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x01      , 0x00       } }, }, \
  [RFFE_RX_DATA_4] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x03      , 0x80       } }, }, \
  [RFFE_RX_DATA_5] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x81       } }, }, \
  [RFFE_RX_DATA_6] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xFD       } }, }, \
  [RFFE_RX_DATA_7] = {RFFE_COMP_NULL, RFFE_PORT_NULL, { { 0                       , 0         , 0          } }, }, \
}

/* Rx Events for FE path 3 (for MB1 RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_3 \
{ \
  /* No.             ctrl type      , data idx       , evt_type       , evt_offset             */ \
  /*                                  { start, stop },                  ( us )                 */ \
  [RFFE_RX_EVT_1] = {RFFE_MIPI      , {RFFE_RX_DATA_1, RFFE_RX_DATA_4}, RFFE_RX_ON_1   , NB_RFFE_HW_VAR1_RX_ON_1_SetDefault }, \
  [RFFE_RX_EVT_2] = {RFFE_CTRL_NULL , {RFFE_RX_DATA_7, RFFE_RX_DATA_7}, RFFE_RX_ON_2   , NB_RFFE_HW_VAR1_RX_ON_2_SetDefault }, \
  [RFFE_RX_EVT_3] = {RFFE_MIPI      , {RFFE_RX_DATA_5, RFFE_RX_DATA_5}, RFFE_RX_OFF_1  , NB_RFFE_HW_VAR1_RX_OFF_1_SetDefault}, \
  [RFFE_RX_EVT_4] = {RFFE_MIPI      , {RFFE_RX_DATA_6, RFFE_RX_DATA_6}, RFFE_RX_OFF_2  , NB_RFFE_HW_VAR1_RX_OFF_2_SetDefault}, \
}

/* Rx FE control Data for FE path 3 (for MB1 RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_3 \
{ \
  /*No.               elm type , port_sel        , { { MIPI USID                  , mipi_addr/, mipi_data/,} )*/ \
  /*                                               { { gpio_bit_position          , gpio_bitmask   , gpio_data  } }*/ \
  [RFFE_RX_DATA_1] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x1C      , 0x38       } }, }, \
  [RFFE_RX_DATA_2] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xBC       } }, }, \
  [RFFE_RX_DATA_3] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x01      , 0x00       } }, }, \
  [RFFE_RX_DATA_4] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x03      , 0x80       } }, }, \
  [RFFE_RX_DATA_5] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x81       } }, }, \
  [RFFE_RX_DATA_6] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xFD       } }, }, \
  [RFFE_RX_DATA_7] = {RFFE_COMP_NULL, RFFE_PORT_NULL, { { 0                       , 0         , 0          } }, }, \
}

/* Rx Events for FE path 4 (for MB2 RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_RX_PATH_4 \
{ \
  /* No.             ctrl type      , data idx                         , evt_type       , evt_offset             */ \
  /*                                  { start         , stop          },                  ( us )                 */ \
  [RFFE_RX_EVT_1] = {RFFE_MIPI      , {RFFE_RX_DATA_1, RFFE_RX_DATA_4}, RFFE_RX_ON_1   , NB_RFFE_HW_VAR1_RX_ON_1_SetDefault }, \
  [RFFE_RX_EVT_2] = {RFFE_CTRL_NULL , {RFFE_RX_DATA_7, RFFE_RX_DATA_7}, RFFE_RX_ON_2   , NB_RFFE_HW_VAR1_RX_ON_2_SetDefault }, \
  [RFFE_RX_EVT_3] = {RFFE_MIPI      , {RFFE_RX_DATA_5, RFFE_RX_DATA_5}, RFFE_RX_OFF_1  , NB_RFFE_HW_VAR1_RX_OFF_1_SetDefault}, \
  [RFFE_RX_EVT_4] = {RFFE_MIPI      , {RFFE_RX_DATA_6, RFFE_RX_DATA_6}, RFFE_RX_OFF_2  , NB_RFFE_HW_VAR1_RX_OFF_2_SetDefault}, \
}

/* Rx FE control Data for FE path 4 (for MB2 RFIC input) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_RX_PATH_4 \
{ \
  /*No.               elm type , port_sel        , { { MIPI USID                  , mipi_addr/, mipi_data/,} )*/ \
  /*                                               { { gpio_bit_position          , gpio_bitmask   , gpio_data  } }*/ \
  [RFFE_RX_DATA_1] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x1C      , 0x38       } }, }, \
  [RFFE_RX_DATA_2] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x94       } }, }, \
  [RFFE_RX_DATA_3] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x01      , 0x00       } }, }, \
  [RFFE_RX_DATA_4] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x03      , 0x80       } }, }, \
  [RFFE_RX_DATA_5] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x81       } }, }, \
  [RFFE_RX_DATA_6] = {RFFE_FEM , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xFD       } }, }, \
  [RFFE_RX_DATA_7] = {RFFE_COMP_NULL, RFFE_PORT_NULL, { { 0                       , 0         , 0          } }, }, \
}

/* ========================================================================= */
/* RFFE TX Event and Control data Tables for each RF FE Tx path              */
/* ========================================================================= */
/* Tx Events for FE path 1 (for ULB RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_1 \
{ \
  /* No.             ctrl type      ,   data idx                       , evt_type       , evt_offset             */ \
  /*                                  { start         , stop          },                  ( us )                 */ \
  [RFFE_TX_EVT_1] = {RFFE_MIPI      , { RFFE_TX_DATA_1, RFFE_TX_DATA_2}, RFFE_TX_ON_1   , NB_RFFE_HW_VAR1_TX_ON_1_SAT_PA        }, \
  [RFFE_TX_EVT_2] = {RFFE_BPI       , { RFFE_TX_DATA_3, RFFE_TX_DATA_4}, RFFE_TX_ON_2   , NB_RFFE_HW_VAR1_TX_ON_2_SAT_PA        }, \
  [RFFE_TX_EVT_3] = {RFFE_MIPI      , { RFFE_TX_DATA_5, RFFE_TX_DATA_5}, RFFE_TX_ON_3   , NB_RFFE_HW_VAR1_TX_ON_3_SAT_PA        }, \
  [RFFE_TX_EVT_4] = {RFFE_MIPI      , { RFFE_TX_DATA_2, RFFE_TX_DATA_2}, RFFE_TX_PWR_OFF, NB_RFFE_HW_VAR1_TX_PWR_OFF_SetDefault }, \
  [RFFE_TX_EVT_5] = {RFFE_MIPI      , { RFFE_TX_DATA_5, RFFE_TX_DATA_5}, RFFE_TX_PWR_ON , NB_RFFE_HW_VAR1_TX_PWR_ON_SetDefault  }, \
  [RFFE_TX_EVT_6] = {RFFE_BPI       , { RFFE_TX_DATA_3, RFFE_TX_DATA_3}, RFFE_TX_PWR_CHG, NB_RFFE_HW_VAR1_TX_PWR_CHG_SAT_PA     }, \
  [RFFE_TX_EVT_7] = {RFFE_BPI       , { RFFE_TX_DATA_6, RFFE_TX_DATA_7}, RFFE_TX_OFF_1  , NB_RFFE_HW_VAR1_TX_OFF_1_SetDefault   }, \
  [RFFE_TX_EVT_8] = {RFFE_MIPI      , { RFFE_TX_DATA_8, RFFE_TX_DATA_8}, RFFE_TX_OFF_2  , NB_RFFE_HW_VAR1_TX_OFF_2_SetDefault   }, \
  [RFFE_TX_EVT_9] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_9, RFFE_TX_DATA_9}, RFFE_TX_OFF_3  , NB_RFFE_HW_VAR1_TX_OFF_3_SetDefault   }, \
}

/* TX FE control Data for FE Tx path 1 (for ULB RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_1 \
{ \
  /*No.               elm type     , port_sel        , { { MIPI USID                         , mipi_addr/                        , mipi_data/,} )*/ \
  /*                                                   { { gpio_bit_position                        , gpio_bitmask                     , gpio_data  } }*/ \
  [RFFE_TX_DATA_1] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x1C                              , 0x38                     } }, }, \
  [RFFE_TX_DATA_2] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x00                              , 0xFC                     } }, }, \
  [RFFE_TX_DATA_3] = {RFFE_PA_BIAS , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_1_BIAS, NB_RFFE_HW_VAR1_BPI_MASK_PA_1_BIAS, NB_RFFE_TX_PA_PWR_CTRL_1 } }, }, \
  [RFFE_TX_DATA_4] = {RFFE_PA      , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_1_EN  , NB_RFFE_HW_VAR1_BPI_MASK_PA_1_EN  , 0x01                     } }, }, \
  [RFFE_TX_DATA_5] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x00                              , 0x9C                     } }, }, \
  [RFFE_TX_DATA_6] = {RFFE_PA      , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_1_BIAS, NB_RFFE_HW_VAR1_BPI_MASK_PA_1_BIAS, 0x00                     } }, }, \
  [RFFE_TX_DATA_7] = {RFFE_PA      , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_1_EN  , NB_RFFE_HW_VAR1_BPI_MASK_PA_1_EN  , 0x00                     } }, }, \
  [RFFE_TX_DATA_8] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x00                              , 0x81                     } }, }, \
  [RFFE_TX_DATA_9] = {RFFE_COMP_NULL, RFFE_PORT_NULL , { { 0                                 , 0                                 , 0                        } }, }, \
}

/* Tx Events for FE path 2 (for LB RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_2 \
{ \
  /* No.             ctrl type      ,   data idx                       , evt_type       , evt_offset             */ \
  /*                                  { start         , stop          },                  ( us )                 */ \
  [RFFE_TX_EVT_1] = {RFFE_MIPI      , { RFFE_TX_DATA_1, RFFE_TX_DATA_2}, RFFE_TX_ON_1   , NB_RFFE_HW_VAR1_TX_ON_1_FEM_PA        }, \
  [RFFE_TX_EVT_2] = {RFFE_MIPI      , { RFFE_TX_DATA_3, RFFE_TX_DATA_5}, RFFE_TX_ON_2   , NB_RFFE_HW_VAR1_TX_ON_2_FEM_PA        }, \
  [RFFE_TX_EVT_3] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_7, RFFE_TX_DATA_7}, RFFE_TX_ON_3   , NB_RFFE_HW_VAR1_TX_ON_3_FEM_PA        }, \
  [RFFE_TX_EVT_4] = {RFFE_MIPI      , { RFFE_TX_DATA_2, RFFE_TX_DATA_2}, RFFE_TX_PWR_OFF, NB_RFFE_HW_VAR1_TX_PWR_OFF_SetDefault }, \
  [RFFE_TX_EVT_5] = {RFFE_MIPI      , { RFFE_TX_DATA_3, RFFE_TX_DATA_3}, RFFE_TX_PWR_ON , NB_RFFE_HW_VAR1_TX_PWR_ON_SetDefault  }, \
  [RFFE_TX_EVT_6] = {RFFE_MIPI      , { RFFE_TX_DATA_4, RFFE_TX_DATA_5}, RFFE_TX_PWR_CHG, NB_RFFE_HW_VAR1_TX_PWR_CHG_FEM_PA     }, \
  [RFFE_TX_EVT_7] = {RFFE_MIPI      , { RFFE_TX_DATA_6, RFFE_TX_DATA_6}, RFFE_TX_OFF_1  , NB_RFFE_HW_VAR1_TX_OFF_1_SetDefault   }, \
  [RFFE_TX_EVT_8] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_7, RFFE_TX_DATA_7}, RFFE_TX_OFF_2  , NB_RFFE_HW_VAR1_TX_OFF_2_SetDefault   }, \
  [RFFE_TX_EVT_9] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_7, RFFE_TX_DATA_7}, RFFE_TX_OFF_3  , NB_RFFE_HW_VAR1_TX_OFF_3_SetDefault   }, \
}

/* TX FE control Data for FE Tx path 2 (for LB RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_2 \
{ \
  /*No.               elm type     , port_sel        , { { MIPI USID                  , mipi_addr/       , mipi_data/,} )*/ \
  /*                                                   { { gpio_bit_position                 ,gpio_bitmask     , gpio_data  } }*/ \
  [RFFE_TX_DATA_1] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x1C      , 0x38                     } }, }, \
  [RFFE_TX_DATA_2] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xFC                     } }, }, \
  [RFFE_TX_DATA_3] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xA4                     } }, }, \
  [RFFE_TX_DATA_4] = {RFFE_PA_BIAS , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x01      , NB_RFFE_TX_PA_PWR_CTRL_1 } }, }, \
  [RFFE_TX_DATA_5] = {RFFE_PA_BIAS , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x03      , NB_RFFE_TX_PA_PWR_CTRL_2 } }, }, \
  [RFFE_TX_DATA_6] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x81                     } }, }, \
  [RFFE_TX_DATA_7] = {RFFE_COMP_NULL, RFFE_PORT_NULL , { { 0                          , 0         , 0                        } }, }, \
}

/* Tx Events for FE path 3 (for MB1 RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_3 \
{ \
  /* No.             ctrl type      ,   data idx                       , evt_type       , evt_offset             */ \
  /*                                  { start         , stop          },                  ( us )                 */ \
  [RFFE_TX_EVT_1] = {RFFE_MIPI      , { RFFE_TX_DATA_1, RFFE_TX_DATA_2}, RFFE_TX_ON_1   , NB_RFFE_HW_VAR1_TX_ON_1_SAT_PA        }, \
  [RFFE_TX_EVT_2] = {RFFE_BPI       , { RFFE_TX_DATA_3, RFFE_TX_DATA_4}, RFFE_TX_ON_2   , NB_RFFE_HW_VAR1_TX_ON_2_SAT_PA        }, \
  [RFFE_TX_EVT_3] = {RFFE_MIPI      , { RFFE_TX_DATA_5, RFFE_TX_DATA_5}, RFFE_TX_ON_3   , NB_RFFE_HW_VAR1_TX_ON_3_SAT_PA        }, \
  [RFFE_TX_EVT_4] = {RFFE_MIPI      , { RFFE_TX_DATA_2, RFFE_TX_DATA_2}, RFFE_TX_PWR_OFF, NB_RFFE_HW_VAR1_TX_PWR_OFF_SetDefault }, \
  [RFFE_TX_EVT_5] = {RFFE_MIPI      , { RFFE_TX_DATA_5, RFFE_TX_DATA_5}, RFFE_TX_PWR_ON , NB_RFFE_HW_VAR1_TX_PWR_ON_SetDefault  }, \
  [RFFE_TX_EVT_6] = {RFFE_BPI       , { RFFE_TX_DATA_3, RFFE_TX_DATA_3}, RFFE_TX_PWR_CHG, NB_RFFE_HW_VAR1_TX_PWR_CHG_SAT_PA     }, \
  [RFFE_TX_EVT_7] = {RFFE_BPI       , { RFFE_TX_DATA_6, RFFE_TX_DATA_7}, RFFE_TX_OFF_1  , NB_RFFE_HW_VAR1_TX_OFF_1_SetDefault   }, \
  [RFFE_TX_EVT_8] = {RFFE_MIPI      , { RFFE_TX_DATA_8, RFFE_TX_DATA_8}, RFFE_TX_OFF_2  , NB_RFFE_HW_VAR1_TX_OFF_2_SetDefault   }, \
  [RFFE_TX_EVT_9] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_9, RFFE_TX_DATA_9}, RFFE_TX_OFF_3  , NB_RFFE_HW_VAR1_TX_OFF_3_SetDefault   }, \
}

/* TX FE control Data for FE Tx path 3 (for MB1 RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_3 \
{ \
  /*No.               elm type     , port_sel        , { { MIPI USID                  , mipi_addr/, mipi_data/,} )*/ \
  /*                                                   { { gpio_bit_position          , gpio_bitmask   , gpio_data  } }*/ \
  [RFFE_TX_DATA_1] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x1C                              , 0x38                     } }, }, \
  [RFFE_TX_DATA_2] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x00                              , 0xFC                     } }, }, \
  [RFFE_TX_DATA_3] = {RFFE_PA_BIAS , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_2_BIAS, NB_RFFE_HW_VAR1_BPI_MASK_PA_2_BIAS, NB_RFFE_TX_PA_PWR_CTRL_1 } }, }, \
  [RFFE_TX_DATA_4] = {RFFE_PA      , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_2_EN  , NB_RFFE_HW_VAR1_BPI_MASK_PA_2_EN  , 0x01                     } }, }, \
  [RFFE_TX_DATA_5] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x00                              , 0x9C                     } }, }, \
  [RFFE_TX_DATA_6] = {RFFE_PA      , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_2_BIAS, NB_RFFE_HW_VAR1_BPI_MASK_PA_2_BIAS, 0x00                     } }, }, \
  [RFFE_TX_DATA_7] = {RFFE_PA      , RFFE_BPI_PORT0  , { { NB_RFFE_HW_VAR1_BPI_SHFT_PA_2_EN  , NB_RFFE_HW_VAR1_BPI_MASK_PA_2_EN  , 0x00                     } }, }, \
  [RFFE_TX_DATA_8] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1        , 0x00                              , 0x81                     } }, }, \
  [RFFE_TX_DATA_9] = {RFFE_COMP_NULL, RFFE_PORT_NULL , { { 0                                 , 0                                 , 0                        } }, }, \
}

/* Tx Events for FE path 4 (for MB2 RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_EVENTS_TX_PATH_4 \
{ \
  /* No.             ctrl type      , data idx       , evt_type       , evt_offset             */ \
  /*                                  { start, stop },                  ( us )                 */ \
  [RFFE_TX_EVT_1] = {RFFE_MIPI      , { RFFE_TX_DATA_1, RFFE_TX_DATA_2}, RFFE_TX_ON_1   , NB_RFFE_HW_VAR1_TX_ON_1_FEM_PA        }, \
  [RFFE_TX_EVT_2] = {RFFE_MIPI      , { RFFE_TX_DATA_3, RFFE_TX_DATA_5}, RFFE_TX_ON_2   , NB_RFFE_HW_VAR1_TX_ON_2_FEM_PA        }, \
  [RFFE_TX_EVT_3] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_7, RFFE_TX_DATA_7}, RFFE_TX_ON_3   , NB_RFFE_HW_VAR1_TX_ON_3_FEM_PA        }, \
  [RFFE_TX_EVT_4] = {RFFE_MIPI      , { RFFE_TX_DATA_2, RFFE_TX_DATA_2}, RFFE_TX_PWR_OFF, NB_RFFE_HW_VAR1_TX_PWR_OFF_SetDefault }, \
  [RFFE_TX_EVT_5] = {RFFE_MIPI      , { RFFE_TX_DATA_3, RFFE_TX_DATA_3}, RFFE_TX_PWR_ON , NB_RFFE_HW_VAR1_TX_PWR_ON_SetDefault  }, \
  [RFFE_TX_EVT_6] = {RFFE_MIPI      , { RFFE_TX_DATA_4, RFFE_TX_DATA_5}, RFFE_TX_PWR_CHG, NB_RFFE_HW_VAR1_TX_PWR_CHG_FEM_PA     }, \
  [RFFE_TX_EVT_7] = {RFFE_MIPI      , { RFFE_TX_DATA_6, RFFE_TX_DATA_6}, RFFE_TX_OFF_1  , NB_RFFE_HW_VAR1_TX_OFF_1_SetDefault   }, \
  [RFFE_TX_EVT_8] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_7, RFFE_TX_DATA_7}, RFFE_TX_OFF_2  , NB_RFFE_HW_VAR1_TX_OFF_2_SetDefault   }, \
  [RFFE_TX_EVT_9] = {RFFE_CTRL_NULL , { RFFE_TX_DATA_7, RFFE_TX_DATA_7}, RFFE_TX_OFF_3  , NB_RFFE_HW_VAR1_TX_OFF_3_SetDefault   }, \
}

/* TX FE control Data for FE Tx path 4 (for MB2 RFIC output) */
#define NB_RFFE_HW_VAR1_CTRL_DATA_TX_PATH_4 \
{ \
  /*No.               elm type     , port_sel        , { { MIPI USID                  , mipi_addr/, mipi_data/,} )*/ \
  /*                                                   { { gpio_bit_position          , gpio_bitmask   , gpio_data  } }*/ \
  [RFFE_TX_DATA_1] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x1C      , 0x38                     } }, }, \
  [RFFE_TX_DATA_2] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xFC                     } }, }, \
  [RFFE_TX_DATA_3] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0xB4                     } }, }, \
  [RFFE_TX_DATA_4] = {RFFE_PA_BIAS , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x01      , NB_RFFE_TX_PA_PWR_CTRL_1 } }, }, \
  [RFFE_TX_DATA_5] = {RFFE_PA_BIAS , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x03      , NB_RFFE_TX_PA_PWR_CTRL_2 } }, }, \
  [RFFE_TX_DATA_6] = {RFFE_FEM     , RFFE_MIPI_PORT0 , { { NB_RFFE_HW_VAR1_USID_FEM_1 , 0x00      , 0x81                     } }, }, \
  [RFFE_TX_DATA_7] = {RFFE_COMP_NULL, RFFE_PORT_NULL , { { 0                          , 0         , 0                        } }, }, \
}

/* =============================================== */
/*   MIPI Tool Specific                            */
/* =============================================== */
#define  NB_RFFE_HW_VAR1_TOOL_VER_SetDefault      0

/* =================================================================*/
/*   rffe custom file structure manager                          */
/*   MTK_MANAGER_Setdefault  : MTK SDK release custom file version manager */
/*   CUSTOMER_MANAGER_SetDeafault:     Customer's custom file version manager*/
/*   description : custom file version 1.3 is that modify DRDI struture.*/
/* ===============================================================*/
#define  NB_RFFE_HW_VAR1_MTK_MANAGER_SetDefault                0x03
#define  NB_RFFE_HW_VAR1_CUSTOMER_MANAGER_SetDeafault          0x01

/* =============================================== */
/*   Current custom file var number                            */
/* =============================================== */
#define  NB_RFFE_HW_VAR1_CUSTOM_FILE                           1
#endif /* NB_CUSTOM_RFFE_HW_VAR1_H */
/* end of file */
