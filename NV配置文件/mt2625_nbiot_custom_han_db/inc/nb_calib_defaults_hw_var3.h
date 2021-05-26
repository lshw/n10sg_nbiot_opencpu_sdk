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
#ifndef NB_CALIB_DEFAULTS_HW_VAR3_H
#define NB_CALIB_DEFAULTS_HW_VAR3_H

/* ========================================================================= */
/*   AFC CALIBRATION DATA DEFAULT                                            */
/* ========================================================================= */
#define NB_CAL_DATA_HW_VAR3_DEFAULT_CAP_ID          (uint16_t)0x193
#define NB_CAL_DATA_HW_VAR3_DEFAULT_INIT_PPM        (uint16_t)0
/* ========================================================================= */
/*   EXT DATA DEFAULT                                            */
/* ========================================================================= */
#define NB_DATA_HW_VAR3_DEFAULT_RF_ADC      (uint32_t)230
#define NB_DATA_HW_VAR3_DEFAULT_NTC_ADC     (uint32_t)1552*8
#define NB_DATA_HW_VAR3_DEFAULT_RF_temp     (int16_t)0x1900
#define NB_DATA_HW_VAR3_DEFAULT_NTC_temp    (int16_t)0x1900
/* ========================================================================= */
/*   RX PATH LOSS CALIBRATION DATA DEFAULT                                   */
/* ========================================================================= */
/* Default Rx path loss data per frequency point per LNA gain mode. One may  *
 * use this definition on all unused bands.                                  */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_DEFAULT \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}


/* Default temperature compensation data for Rx Path loss. One may use this *
 * definition on all unused/unsupported bands.                              */
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_DEFAULT  \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 1 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_1 { \
                                             /* Freq 1 */ 21100, /* 100Khz */\
                                             /* Freq 2 */ 21250, /* 100Khz */\
                                             /* Freq 3 */ 21400, /* 100Khz */\
                                             /* Freq 4 */ 21550, /* 100Khz */\
                                             /* Freq 5 */ 21700  /* 100Khz */\
                                             }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_1  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_1      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 2 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_2 { \
                                             /* Freq 1 */ 19300, /* 100Khz */\
                                             /* Freq 2 */ 19450, /* 100Khz */\
                                             /* Freq 3 */ 19600, /* 100Khz */\
                                             /* Freq 4 */ 19750, /* 100Khz */\
                                             /* Freq 5 */ 19900  /* 100Khz */\
                                             }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_2  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_2      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 3 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_3 { \
                                             /* Freq 1 */ 18050, /* 100Khz */\
                                             /* Freq 2 */ 18238, /* 100Khz */\
                                             /* Freq 3 */ 18425, /* 100Khz */\
                                             /* Freq 4 */ 18613, /* 100Khz */\
                                             /* Freq 5 */ 18800  /* 100Khz */\
                                             }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_3  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_3      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 4 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_4 { \
                                             /* Freq 1 */ 21100, /* 100Khz */\
                                             /* Freq 2 */ 21212, /* 100Khz */\
                                             /* Freq 3 */ 21325, /* 100Khz */\
                                             /* Freq 4 */ 21438, /* 100Khz */\
                                             /* Freq 5 */ 21550  /* 100Khz */\
                                             }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_4  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_4      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 5 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_5 { \
                                             /* Freq 1 */ 8690, /* 100Khz */\
                                             /* Freq 2 */ 8753, /* 100Khz */\
                                             /* Freq 3 */ 8815, /* 100Khz */\
                                             /* Freq 4 */ 8878, /* 100Khz */\
                                             /* Freq 5 */ 8940  /* 100Khz */\
                                             }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_5  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_5      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 8 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_8 { \
                                             /* Freq 1 */ 9250, /* 100Khz */\
                                             /* Freq 2 */ 9338, /* 100Khz */\
                                             /* Freq 3 */ 9425, /* 100Khz */\
                                             /* Freq 4 */ 9513, /* 100Khz */\
                                             /* Freq 5 */ 9600  /* 100Khz */\
                                             }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_8  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_8      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 11 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_11 { \
                                              /* Freq 1 */ 14759, /* 100Khz */\
                                              /* Freq 2 */ 14809, /* 100Khz */\
                                              /* Freq 3 */ 14859, /* 100Khz */\
                                              /* Freq 4 */ 14909, /* 100Khz */\
                                              /* Freq 5 */ 14959  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_11 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_11     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 12 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_12 { \
                                              /* Freq 1 */ 7290, /* 100Khz */\
                                              /* Freq 2 */ 7333, /* 100Khz */\
                                              /* Freq 3 */ 7375, /* 100Khz */\
                                              /* Freq 4 */ 7418, /* 100Khz */\
                                              /* Freq 5 */ 7460  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_12 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_12     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 13 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_13 { \
                                              /* Freq 1 */ 7460, /* 100Khz */\
                                              /* Freq 2 */ 7485, /* 100Khz */\
                                              /* Freq 3 */ 7510, /* 100Khz */\
                                              /* Freq 4 */ 7535, /* 100Khz */\
                                              /* Freq 5 */ 7560  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_13 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_13     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 14 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_14 { \
                                              /* Freq 1 */ 7580, /* 100Khz */\
                                              /* Freq 2 */ 7605, /* 100Khz */\
                                              /* Freq 3 */ 7630, /* 100Khz */\
                                              /* Freq 4 */ 7655, /* 100Khz */\
                                              /* Freq 5 */ 7680  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_14 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}

#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_14     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 17 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_17 { \
                                              /* Freq 1 */ 7340, /* 100Khz */\
                                              /* Freq 2 */ 7370, /* 100Khz */\
                                              /* Freq 3 */ 7400, /* 100Khz */\
                                              /* Freq 4 */ 7430, /* 100Khz */\
                                              /* Freq 5 */ 7460  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_17 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_17     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 18 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_18 { \
                                              /* Freq 1 */ 8600, /* 100Khz */\
                                              /* Freq 2 */ 8638, /* 100Khz */\
                                              /* Freq 3 */ 8675, /* 100Khz */\
                                              /* Freq 4 */ 8713, /* 100Khz */\
                                              /* Freq 5 */ 8750  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_18 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_18     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 19 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_19 { \
                                              /* Freq 1 */ 8750, /* 100Khz */\
                                              /* Freq 2 */ 8788, /* 100Khz */\
                                              /* Freq 3 */ 8788, /* 100Khz */\
                                              /* Freq 4 */ 8863, /* 100Khz */\
                                              /* Freq 5 */ 8900  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_19 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_19     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 20 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_20 { \
                                              /* Freq 1 */ 7910, /* 100Khz */\
                                              /* Freq 2 */ 7985, /* 100Khz */\
                                              /* Freq 3 */ 8060, /* 100Khz */\
                                              /* Freq 4 */ 8135, /* 100Khz */\
                                              /* Freq 5 */ 8210  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_20  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_20      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 21 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_21 { \
                                              /* Freq 1 */ 14959, /* 100Khz */\
                                              /* Freq 2 */ 14997, /* 100Khz */\
                                              /* Freq 3 */ 15034, /* 100Khz */\
                                              /* Freq 4 */ 15072, /* 100Khz */\
                                              /* Freq 5 */ 15109  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_21  \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_21      \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 25 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_25 { \
                                              /* Freq 1 */ 19300, /* 100Khz */\
                                              /* Freq 2 */ 19463, /* 100Khz */\
                                              /* Freq 3 */ 19625, /* 100Khz */\
                                              /* Freq 4 */ 19788, /* 100Khz */\
                                              /* Freq 5 */ 19950  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_25 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_25     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 26 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_26 { \
                                              /* Freq 1 */ 8590, /* 100Khz */\
                                              /* Freq 2 */ 8678, /* 100Khz */\
                                              /* Freq 3 */ 8765, /* 100Khz */\
                                              /* Freq 4 */ 8853, /* 100Khz */\
                                              /* Freq 5 */ 8940  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_26 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_26     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 28 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_28 { \
                                              /* Freq 1 */ 7580, /* 100Khz */\
                                              /* Freq 2 */ 7693, /* 100Khz */\
                                              /* Freq 3 */ 7805, /* 100Khz */\
                                              /* Freq 4 */ 7918, /* 100Khz */\
                                              /* Freq 5 */ 8030  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_28 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_28     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 31 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_31 { \
                                              /* Freq 1 */ 4625, /* 100Khz */\
                                              /* Freq 2 */ 4638, /* 100Khz */\
                                              /* Freq 3 */ 4650, /* 100Khz */\
                                              /* Freq 4 */ 4663, /* 100Khz */\
                                              /* Freq 5 */ 4675  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_31 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_31     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 66 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_66 { \
                                              /* Freq 1 */ 21100, /* 100Khz */\
                                              /* Freq 2 */ 21325, /* 100Khz */\
                                              /* Freq 3 */ 21550, /* 100Khz */\
                                              /* Freq 4 */ 21775, /* 100Khz */\
                                              /* Freq 5 */ 22000  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_66 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_66     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 70 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_70 { \
                                              /* Freq 1 */ 19950, /* 100Khz */\
                                              /* Freq 2 */ 20013, /* 100Khz */\
                                              /* Freq 3 */ 20075, /* 100Khz */\
                                              /* Freq 4 */ 20138, /* 100Khz */\
                                              /* Freq 5 */ 20200  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_70 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_70     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 71 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_71 { \
                                              /* Freq 1 */ 6170, /* 100Khz */\
                                              /* Freq 2 */ 6258, /* 100Khz */\
                                              /* Freq 3 */ 6345, /* 100Khz */\
                                              /* Freq 4 */ 6433, /* 100Khz */\
                                              /* Freq 5 */ 6519  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_71 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_71     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}


/* Default data set for Rx path loss calibration in Band 72 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_72 { \
                                              /* Freq 1 */ 4610, /* 100Khz */\
                                              /* Freq 2 */ 4623, /* 100Khz */\
                                              /* Freq 3 */ 4635, /* 100Khz */\
                                              /* Freq 4 */ 4648, /* 100Khz */\
                                              /* Freq 5 */ 4660  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_72 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_72     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 73 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_73 { \
                                              /* Freq 1 */ 4600, /* 100Khz */\
                                              /* Freq 2 */ 4613, /* 100Khz */\
                                              /* Freq 3 */ 4625, /* 100Khz */\
                                              /* Freq 4 */ 4638, /* 100Khz */\
                                              /* Freq 5 */ 4650  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_73 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_73     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 74 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_74 { \
                                              /* Freq 1 */ 14750, /* 100Khz */\
                                              /* Freq 2 */ 14860, /* 100Khz */\
                                              /* Freq 3 */ 14970, /* 100Khz */\
                                              /* Freq 4 */ 15073, /* 100Khz */\
                                              /* Freq 5 */ 15180  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_74 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_74     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default data set for Rx path loss calibration in Band 85 */
#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_POINTS_BAND_85 { \
                                              /* Freq 1 */ 7280, /* 100Khz */\
                                              /* Freq 2 */ 7325, /* 100Khz */\
                                              /* Freq 3 */ 7370, /* 100Khz */\
                                              /* Freq 4 */ 7415, /* 100Khz */\
                                              /* Freq 5 */ 7460  /* 100Khz */\
                                              }

#define NB_CAL_DATA_HW_VAR3_RX_PL_FREQ_LNA_COMP_BAND_85 \
{ \
  /* Freq 1 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 2 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 3 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 4 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
  /* Freq 5 */ \
  { \
  /* LNA low gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA mid gain */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
  /* LNA high gain */(int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_RX_PL_TEMP_COMP_BAND_85     \
{ \
/* -20degC to -10degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* -10degC to +5degC  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +5degC  to +20degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +20degC to +35degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +35degC to +55degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +55degC to +70degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +70degC to +85degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* +85degC to +95degC */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* ========================================================================= */
/*   TX POWER CONTROL CALIBRATION DATA DEFAULT                               */
/* ========================================================================= */
/* Default Highest Tx Power level in each PA gain stage. One may use this    *
 * definition in unused/unsupported bands.                                   */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_DEFAULT  \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(18.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 18.0dBm */ \
/* Power P3 */ (uint16_t)(16.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 16.0dBm */ \
/* Power P4 */ (uint16_t)(12.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 12.0dBm */ \
/* Power P5 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
}

/* Default PA mode used in each PA gain stage. One may use this definition in*
 * unused/unsupported bands.                                                 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_DEFAULT  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}

/* Default PA gain value in each PA gain stage. One may use this definition  *
 * in unused/unsupported bands.                                              */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_DEFAULT  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}

/* Default PA bias voltage in each PA gain stage. One may use this definition*
 * in unused/unsupported bands.                                              */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_DEFAULT  \
{ \
/* For power P1 */ (uint8_t)(1.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(1.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.5 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

/* Default RFIC PGA gain offset values. One may use this definition in       *
 * unused/unsupported bands.                                                 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_DEFAULT  \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

/* Default Tx power compensation per temp, per freq point, per PA mode.      *
 * One may use this definition in unused/unsupported bands.                  */
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_DEFAULT \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}

/* Tx Power control calibration default data set for Band 1 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_1     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_1   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_1   \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(21.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_1    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 1 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_1     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_1   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_1   \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(21.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_1    \
{ \
/* For power P1 */ (uint8_t)(2.6 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.6 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_1 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_1 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_1  { \
                                            /* Freq 1 */ 19200, /* 100Khz */ \
                                            /* Freq 2 */ 19350, /* 100Khz */ \
                                            /* Freq 3 */ 19500, /* 100Khz */ \
                                            /* Freq 4 */ 19650, /* 100Khz */ \
                                            /* Freq 5 */ 19800  /* 100Khz */ \
                                            }

/* Tx Power control calibration default data set for Band 2 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_2     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_2   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_2   \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_2    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 2 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_2     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_2   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_2   \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_2    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_2 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_2 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_2  { \
                                            /* Freq 1 */ 18500, /* 100Khz */ \
                                            /* Freq 2 */ 18650, /* 100Khz */ \
                                            /* Freq 3 */ 18800, /* 100Khz */ \
                                            /* Freq 4 */ 18950, /* 100Khz */ \
                                            /* Freq 5 */ 19100  /* 100Khz */ \
                                            }

/* Tx Power control calibration default data set for Band 3 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_3     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_3   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_3   \
{ \
/* For power P1 */ (uint16_t)(26.41 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.41dBm */ \
/* For power P2 */ (uint16_t)(26.41 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.41dBm */ \
/* For power P3 */ (uint16_t)(26.23 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.23dBm */ \
/* For power P4 */ (uint16_t)(25.41 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.41dBm */ \
/* For power P5 */ (uint16_t)(13.73 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.73dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_3    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 3 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_3     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_3   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_3   \
{ \
/* For power P1 */ (uint16_t)(26.41 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.41dBm */ \
/* For power P2 */ (uint16_t)(26.41 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.41dBm */ \
/* For power P3 */ (uint16_t)(26.23 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.23dBm */ \
/* For power P4 */ (uint16_t)(25.41 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.41dBm */ \
/* For power P5 */ (uint16_t)(13.73 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.73dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_3    \
{ \
/* For power P1 */ (uint8_t)(2.6 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.6 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_3 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_3 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_3  { \
                                            /* Freq 1 */ 17100, /* 100Khz */ \
                                            /* Freq 2 */ 17288, /* 100Khz */ \
                                            /* Freq 3 */ 17475, /* 100Khz */ \
                                            /* Freq 4 */ 17663, /* 100Khz */ \
                                            /* Freq 5 */ 17850  /* 100Khz */ \
                                            }

/* Tx Power control calibration default data set for Band 4 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_4     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_4   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_4   \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(21.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_4    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 4 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_4     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_4   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_4   \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(21.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_4    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_4 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_4 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_4 { \
                                            /* Freq 1 */ 17100, /* 100Khz */ \
                                            /* Freq 2 */ 17212, /* 100Khz */ \
                                            /* Freq 3 */ 17325, /* 100Khz */ \
                                            /* Freq 4 */ 17438, /* 100Khz */ \
                                            /* Freq 5 */ 17550  /* 100Khz */ \
                                            }

/* Tx Power control calibration default data set for Band 5 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_5     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_5   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_5   \
{ \
/* For power P1 */ (uint16_t)(25.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(23.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(21.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_5    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 5 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_5     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_5   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_5   \
{ \
/* For power P1 */ (uint16_t)(25.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(23.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(21.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_5    \
{ \
/* For power P1 */ (uint8_t)(2.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.6 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_5 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_5 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_5  { \
                                            /* Freq 1 */ 8240, /* 100Khz */ \
                                            /* Freq 2 */ 8303, /* 100Khz */ \
                                            /* Freq 3 */ 8365, /* 100Khz */ \
                                            /* Freq 4 */ 8428, /* 100Khz */ \
                                            /* Freq 5 */ 8490  /* 100Khz */ \
                                            }

/* Tx Power control calibration default data set for Band 8 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_8     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_8   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_8   \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(23.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(22.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_8    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 8 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_8     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_8   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_8   \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(23.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(22.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}

#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_8    \
{ \
/* For power P1 */ (uint8_t)(2.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.6 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.1 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_8 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_8 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_8  { \
                                            /* Freq 1 */ 8800, /* 100Khz */ \
                                            /* Freq 2 */ 8888, /* 100Khz */ \
                                            /* Freq 3 */ 8975, /* 100Khz */ \
                                            /* Freq 4 */ 9063, /* 100Khz */ \
                                            /* Freq 5 */ 9150  /* 100Khz */ \
                                            }

/* Tx Power control calibration default data set for Band 11 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_11    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_11  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_11  \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(22.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_11   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.5 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 11 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_11    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_11  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_11  \
{ \
/* For power P1 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(22.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_11   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.5 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_11 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_11 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_11  { \
                                             /* Freq 1 */ 14279, /* 100Khz */ \
                                             /* Freq 2 */ 14329, /* 100Khz */ \
                                             /* Freq 3 */ 14379, /* 100Khz */ \
                                             /* Freq 4 */ 14429, /* 100Khz */ \
                                             /* Freq 5 */ 14479  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 12 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_12    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_12  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_12  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_12   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 12 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_12    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_12  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_12  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_12   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_12 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_12 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_12  { \
                                             /* Freq 1 */ 6990, /* 100Khz */ \
                                             /* Freq 2 */ 7033, /* 100Khz */ \
                                             /* Freq 3 */ 7075, /* 100Khz */ \
                                             /* Freq 4 */ 7118, /* 100Khz */ \
                                             /* Freq 5 */ 7160  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 13 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_13    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_13  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_13  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_13   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 13 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_13    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_13  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_13  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_13   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_13 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}

#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_13 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}

#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_13  { \
                                             /* Freq 1 */ 7770, /* 100Khz */ \
                                             /* Freq 2 */ 7795, /* 100Khz */ \
                                             /* Freq 3 */ 7820, /* 100Khz */ \
                                             /* Freq 4 */ 7845, /* 100Khz */ \
                                             /* Freq 5 */ 7870  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 14 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_14    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_14  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_14  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_14   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 14 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_14    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_14  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_14  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_14   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_14 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_14 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_14  { \
                                             /* Freq 1 */ 7880, /* 100Khz */ \
                                             /* Freq 2 */ 7905, /* 100Khz */ \
                                             /* Freq 3 */ 7930, /* 100Khz */ \
                                             /* Freq 4 */ 7955, /* 100Khz */ \
                                             /* Freq 5 */ 7980  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 17 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_17    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_17  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_17  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_17   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 17 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_17    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_17  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_17  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_17   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_17 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_17 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_17  { \
                                             /* Freq 1 */ 7040, /* 100Khz */ \
                                             /* Freq 2 */ 7070, /* 100Khz */ \
                                             /* Freq 3 */ 7100, /* 100Khz */ \
                                             /* Freq 4 */ 7130, /* 100Khz */ \
                                             /* Freq 5 */ 7160  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 18 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_18    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_18  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_18  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_18   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 18 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_18    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_18  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_18  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_18   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_18 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_18 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_18  { \
                                             /* Freq 1 */ 8150, /* 100Khz */ \
                                             /* Freq 2 */ 8188, /* 100Khz */ \
                                             /* Freq 3 */ 8225, /* 100Khz */ \
                                             /* Freq 4 */ 8263, /* 100Khz */ \
                                             /* Freq 5 */ 8300  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 19 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_19    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_19  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_19  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_19   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 19 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_19    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_19  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_19  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_19   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_19 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_19 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_19  { \
                                             /* Freq 1 */ 8300, /* 100Khz */ \
                                             /* Freq 2 */ 8338, /* 100Khz */ \
                                             /* Freq 3 */ 8375, /* 100Khz */ \
                                             /* Freq 4 */ 8413, /* 100Khz */ \
                                             /* Freq 5 */ 8450  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 20 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_20    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_20  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_20  \
{ \
/* For power P1 */ (uint16_t)(25.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(14.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_20   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 20 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_20    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_20  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_20  \
{ \
/* For power P1 */ (uint16_t)(25.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(14.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_20   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_20 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_20 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_20  { \
                                             /* Freq 1 */ 8320, /* 100Khz */ \
                                             /* Freq 2 */ 8395, /* 100Khz */ \
                                             /* Freq 3 */ 8470, /* 100Khz */ \
                                             /* Freq 4 */ 8545, /* 100Khz */ \
                                             /* Freq 5 */ 8620  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 11 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_21    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_21  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_21  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(26.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(14.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_21   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.5 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 11 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_21    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_21  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_21  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(26.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(22.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(14.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_21   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.4 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.5 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_21 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_21 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_21  { \
                                             /* Freq 1 */ 14479, /* 100Khz */ \
                                             /* Freq 2 */ 14517, /* 100Khz */ \
                                             /* Freq 3 */ 14554, /* 100Khz */ \
                                             /* Freq 4 */ 14592, /* 100Khz */ \
                                             /* Freq 5 */ 14629  /* 100Khz */ \
                                             }


/* Tx Power control calibration default data set for Band 25 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_25    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_25  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_25  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_25   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 25 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_25    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_25  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_25  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_25   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_25 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_25 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_25  { \
                                             /* Freq 1 */ 18500, /* 100Khz */ \
                                             /* Freq 2 */ 18663, /* 100Khz */ \
                                             /* Freq 3 */ 18825, /* 100Khz */ \
                                             /* Freq 4 */ 18988, /* 100Khz */ \
                                             /* Freq 5 */ 19150  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 26 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_26    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_26  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_26  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_26   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 26 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_26    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_26  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_26  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_26   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_26 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_26 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_26  { \
                                             /* Freq 1 */ 8140, /* 100Khz */ \
                                             /* Freq 2 */ 8228, /* 100Khz */ \
                                             /* Freq 3 */ 8315, /* 100Khz */ \
                                             /* Freq 4 */ 8403, /* 100Khz */ \
                                             /* Freq 5 */ 8490  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 28 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_28    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_28  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_28  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_28   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 28 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_28    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_28  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_28  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_28   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_28 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_28 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_28  { \
                                             /* Freq 1 */ 7030, /* 100Khz */ \
                                             /* Freq 2 */ 7143, /* 100Khz */ \
                                             /* Freq 3 */ 7255, /* 100Khz */ \
                                             /* Freq 4 */ 7368, /* 100Khz */ \
                                             /* Freq 5 */ 7480  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 31 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_31    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_31  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_31  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_31   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 31 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_31    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_31  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_31  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_31   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_31 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_31 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_31  { \
                                             /* Freq 1 */ 4525, /* 100Khz */ \
                                             /* Freq 2 */ 4528, /* 100Khz */ \
                                             /* Freq 3 */ 4550, /* 100Khz */ \
                                             /* Freq 4 */ 4563, /* 100Khz */ \
                                             /* Freq 5 */ 4575  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 66 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_66    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_66  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_66  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_66   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 66 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_66    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_66  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_66  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_66   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_66 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_66 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_66  { \
                                             /* Freq 1 */ 17100, /* 100Khz */ \
                                             /* Freq 2 */ 17275, /* 100Khz */ \
                                             /* Freq 3 */ 17450, /* 100Khz */ \
                                             /* Freq 4 */ 17625, /* 100Khz */ \
                                             /* Freq 5 */ 17800  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 70 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_70     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_70   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_70   \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_70    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 70 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_70     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_70   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_70   \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_70    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_70 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_70 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_70  { \
                                             /* Freq 1 */ 16950, /* 100Khz */ \
                                             /* Freq 2 */ 16988, /* 100Khz */ \
                                             /* Freq 3 */ 17025, /* 100Khz */ \
                                             /* Freq 4 */ 17063, /* 100Khz */ \
                                             /* Freq 5 */ 17100  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 71 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_71     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_71   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_71   \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_71    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 71 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_71     \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_71   \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_71   \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_71    \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_71 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_71 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_71  { \
                                             /* Freq 1 */ 6630, /* 100Khz */ \
                                             /* Freq 2 */ 6718, /* 100Khz */ \
                                             /* Freq 3 */ 6805, /* 100Khz */ \
                                             /* Freq 4 */ 6893, /* 100Khz */ \
                                             /* Freq 5 */ 6979  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 72 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_72    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_72  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_72  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_72   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 72 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_72    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_72  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_72  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_72   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_72 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_72 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_72  { \
                                             /* Freq 1 */ 4510, /* 100Khz */ \
                                             /* Freq 2 */ 4523, /* 100Khz */ \
                                             /* Freq 3 */ 4535, /* 100Khz */ \
                                             /* Freq 4 */ 4548, /* 100Khz */ \
                                             /* Freq 5 */ 4560  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 73 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_73    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_73  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_73  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_73   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 73 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_73    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_73  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_73  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_73   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_73 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_73 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_73  { \
                                             /* Freq 1 */ 4500, /* 100Khz */ \
                                             /* Freq 2 */ 4513, /* 100Khz */ \
                                             /* Freq 3 */ 4525, /* 100Khz */ \
                                             /* Freq 4 */ 4538, /* 100Khz */ \
                                             /* Freq 5 */ 4550  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 74 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_74    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_74  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_74  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_74   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 74 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_74    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_74  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_74  \
{ \
/* For power P1 */ (uint16_t)(30.07 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(29.58 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(28.34 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(27.84 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(12.20 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_74   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(0.9 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_74 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_74 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_74  { \
                                             /* Freq 1 */ 14270, /* 100Khz */ \
                                             /* Freq 2 */ 14378, /* 100Khz */ \
                                             /* Freq 3 */ 14485, /* 100Khz */ \
                                             /* Freq 4 */ 14593, /* 100Khz */ \
                                             /* Freq 5 */ 14700  /* 100Khz */ \
                                             }

/* Tx Power control calibration default data set for Band 85 */
#define NB_CAL_DATA_HW_VAR3_TPC_TX_POWER_BAND_85    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_MODE_BAND_85  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_GAIN_BAND_85  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TX_PA_VCC_BAND_85   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

/* Tx Power control calibration default data set for Band 85 */
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_POWER_BAND_85    \
{  \
/* Power P1 */ (uint16_t)(23.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 23.0dBm */ \
/* Power P2 */ (uint16_t)(19.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 19.0dBm */ \
/* Power P3 */ (uint16_t)(15.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 15.0dBm */ \
/* Power P4 */ (uint16_t)(10.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 10.0dBm */ \
/* Power P5 */ (uint16_t)(0.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_MODE_BAND_85  \
{ \
/* For power P1 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P2 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P3 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P4 */ (uint16_t)NB_CAL_TX_PA_MODE_HIGH, \
/* For power P5 */ (uint16_t)NB_CAL_TX_PA_MODE_LOW \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_GAIN_BAND_85  \
{ \
/* For power P1 */ (uint16_t)(26.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 26.5dBm */ \
/* For power P2 */ (uint16_t)(25.5 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 25.5dBm */ \
/* For power P3 */ (uint16_t)(24.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 24.0dBm */ \
/* For power P4 */ (uint16_t)(20.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 20.0dBm */ \
/* For power P5 */ (uint16_t)(13.0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 13.0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_SINGLE_TPC_TX_PA_VCC_BAND_85   \
{ \
/* For power P1 */ (uint8_t)(2.8 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P2 */ (uint8_t)(2.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P3 */ (uint8_t)(1.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P4 */ (uint8_t)(1.2 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
/* For power P5 */ (uint8_t)(0.7 * NB_CAL_VOLTS_TO_100MILLIVOLTS_MULT), \
}

#endif

#define NB_CAL_DATA_HW_VAR3_TPC_TX_PGA_GAIN_OFFSET_BAND_85 \
{ \
/* PGA index 0  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 1  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 2  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 3  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 4  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 5  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 6  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 7  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 8  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 9  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 10 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 11 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 12 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 13 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* PGA index 14 */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
}
#define NB_CAL_DATA_HW_VAR3_TPC_TEMP_FREQ_PA_MODE_COMP_BAND_85 \
{ \
  { /* Temperature -20degC to -10degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature -10degC to +5degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +5degC to +20degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +20degC to +35degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +35degC to +55degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +55degC to +70degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +70degC to +85degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
  { /* Temperature +85degC to +95degC */ \
    { /* Freq 1 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 2 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 3 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 4 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
    { /* Freq 5 */ \
/* NB_CAL_TX_PA_MODE_LOW  */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT), /* 0dBm */ \
/* NB_CAL_TX_PA_MODE_HIGH */ (int16_t)(0 * NB_CAL_Q8_FIXEDPOINT_MULT)  /* 0dBm */ \
    }, \
  }, \
}
#define NB_CAL_DATA_HW_VAR3_TPC_FREQ_POINTS_BAND_85  { \
                                             /* Freq 1 */ 6980, /* 100Khz */ \
                                             /* Freq 2 */ 7025, /* 100Khz */ \
                                             /* Freq 3 */ 7070, /* 100Khz */ \
                                             /* Freq 4 */ 7115, /* 100Khz */ \
                                             /* Freq 5 */ 7160  /* 100Khz */ \
                                             }

#endif /* NB_CALIB_DEFAULTS_HW_VAR3_H */
/* end of file */
