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
#ifndef N1_RF_CAL_DATA_H
#define N1_RF_CAL_DATA_H

/**
 * Version Control:                                                              *
 * This header file is supposed to be used across multiple product variants and  *
 * software branches. There might be modifications done for specific product     *
 * variant or software branch. The following version numbers will be used to     *
 * keep this unified header file backward compatible across all possible products*
 *                                                                               *
 * At any point of time, any backward compatible interface header could be made  *
 * by setting up the version numbers appropriately.                              */
/** User can specify own version before including this file */
#ifndef MTK_NBIOT_TARGET_BUILD
#define FEA_TEMP_MULTI_SINGLE_TONE_CAL
#endif

#ifndef N1_RF_CAL_DATA_MAJOR_VERSION
/** Following is the latest version number, major. */
#define N1_RF_CAL_DATA_MAJOR_VERSION        1
#endif

/** User can specify own version before including this file */
#ifndef N1_RF_CAL_DATA_MINOR_VERSION
/** Following is the latest version number, minor. */
#define N1_RF_CAL_DATA_MINOR_VERSION        3
#endif

#define N1_RF_EXT_NVDM_ITEM_VERSION     0x00000001

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

#ifndef TX_BW_NUM
#define TX_BW_NUM 2
#endif

#endif

/******************************************************************************
 * CONSTANTS
 ******************************************************************************/
#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/* Maximum number of supported bands in MT2625 -> SHOULD NOT BE CHANGED! */
#define NB_MT2625_MAX_NO_SUPPORTED_BANDS    26

/** Defines maximum number of frequency compensation points per band */
#define NB_CAL_MAX_FREQ_COMP_POINTS         5

/** Defines the number of PGA gain modes supported */
#define NB_CAL_TX_PGA_MODE_COUNT            15
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */

/**Defines TPC_FREEZE mode for PGA and PA calibration */
#define TPC_FREEZE_NULL                   0     //normal mode no freeze
#define TPC_FREEZE_FOR_GET_PGA_INDEX      1     //for get pga index when pa cal
#define TPC_FREEZE_PARTIAL                2     //to partial freeze pa_gain and pga_gain 
#define TPC_FREEZE_FULL                   3     //freeze all of tx power part 

#if defined ( WIN32 )
/* __attribute__ is gcc own keyword, so we declare it empty. */
#define __attribute__(X)
#endif


/******************************************************************************
 * DATA TYPES
 *****************************************************************************/
/** Defines the number of LNA modes supported. Also defines the indexes to be *
 ** used to refer to each one of the LNA modes.                               */

typedef enum
{
  NB_CAL_RX_LNA_MODE_LOW  = 0,
  NB_CAL_RX_LNA_MODE_MID  = 1,
  NB_CAL_RX_LNA_MODE_HIGH = 2,
  NB_CAL_RX_LNA_MODE_COUNT
} N1RfRxLnaMode;

/** Defines the number of PA gain modes supported. Also defines the index and *
 ** value to be used while referring to each of the PA gain modes.            */
typedef enum
{
  NB_CAL_TX_PA_MODE_LOW   = 0,
  NB_CAL_TX_PA_MODE_HIGH  = 1,
  NB_CAL_TX_PA_MODE_COUNT
} N1RfTxPaMode;

/** Defines the number of PA gain stages supported. Also defines the index to *
 ** be used while referring to each of the PA gain stages.                    */
typedef enum
{
  NB_CAL_TX_PA_GAIN_HIGH      = 0,
  NB_CAL_TX_PA_GAIN_MID_HIGH  = 1,
  NB_CAL_TX_PA_GAIN_MID       = 2,
  NB_CAL_TX_PA_GAIN_MID_LOW   = 3,
  NB_CAL_TX_PA_GAIN_LOW       = 4,
  NB_CAL_TX_PA_GAIN_STAGE_COUNT
} N1RfTxPaGainStage;

/** Defines the different types of sub-carrier configuration supported in UL. *
 ** Also defines the index to be used while applying controls for each conf.  */
typedef enum
{
  NB_CAL_MT_15K_12C       = 0, /* 12 sub-carriers in 15Khz Tx */
  NB_CAL_MT_15K_6C        = 1, /* 6 sub-carriers in 15Khz Tx */
  NB_CAL_MT_15K_3C_BOUND  = 2, /* 3 sub-carriers at spectral bounds in 15Khz Tx */
  NB_CAL_MT_15K_3C_CENTRE = 3, /* 3 sub-carriers at mid-spectrum in 15Khz Tx */
  NB_CAL_ST_15K_1C        = 4, /* Single sub-carrier in 15Khz Tx or 3.75KHz Tx *
                                * or unmodulated Tx for calibration.           */
  NB_CAL_TX_TONE_BW_COUNT      /* Keep this at the end */
} N1RfTxToneInfo;

/** Defines the number of temperature sections over which the thermal sensor  *
 ** ADC output is calibrated.                                                 */
typedef enum
{
  NB_CAL_TEMPERATURE_SEG_1 = 0,
  NB_CAL_TEMPERATURE_SEG_2 = 1,
  NB_CAL_TEMPERATURE_SEG_3 = 2,
  NB_CAL_TEMPERATURE_SEG_4 = 3,
  NB_CAL_TEMPERATURE_SEG_5 = 4,
  NB_CAL_TEMPERATURE_SEG_6 = 5,
  NB_CAL_TEMPERATURE_SEG_7 = 6,
  NB_CAL_TEMPERATURE_SEG_8 = 7,
  NB_CAL_TEMPERATURE_SEG_COUNT = 8
} N1RfTemperatureSections;

/** Defines the indices of RFFE PA power control data. */
typedef enum
{
  NB_RFFE_TX_PA_PWR_CTRL_1 = 0,
  NB_RFFE_TX_PA_PWR_CTRL_2 = 1,
  NB_RFFE_TX_PA_PWR_CTRL_COUNT
} N1RfTxPaPowerCtrlIndex;

/******************************************************************************
 * CALIBRATION DATA STRUCTURES                                                *
 *****************************************************************************/
#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** AFC tuning table */
typedef struct
{
  /** Capacitor bank code for coarce DCXO freqeuncy control */
  uint16_t  cap_id;    /* 0 - 511 */
  /** Fine frequency error (controlled outside DCXO) */
  int16_t   init_ppm;  /* s7.8 */
} N1RfAfcCalData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */


#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
typedef struct
{
   /** NVDM_item_version bit0~bit31 indicate NVDM contain item information,
     bitx=1,means contain some one item, 0 means not contain,
     bit0=1 indicates contain RF_ADC & NTC_ADC item **/
   uint32_t  NVDM_item_version;
   /** RF_ADC of last AFC Cap id cal */
   uint32_t  RF_ADC;
   /** NTC_ADC of last AFC Cap id cal */
   uint32_t  NTC_ADC;
   /** RF_temp of last AFC Cap id cal */
   int16_t RF_temp;
   /** NTC_temp of last AFC Cap id cal */
   int16_t NTC_temp;
   /**reserve information **/
   uint32_t reserve[16];
} N1RfExtData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */


#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** Rx path loss table */
typedef struct
{
  uint8_t         band;     /** Band number */
  uint8_t         filler0;  /** Filler for alignment */
  /** Frequency compensation points in unit of 100KHz */
  uint16_t        subband_freq[NB_CAL_MAX_FREQ_COMP_POINTS];
  /** Rx path loss per each frequency point and each LNA mode in dB. S7.8 format. */
  int16_t         rx_pathloss[NB_CAL_MAX_FREQ_COMP_POINTS][NB_CAL_RX_LNA_MODE_COUNT];
  /** Rx temperature compensation values in dB. S7.8 format. */
  int16_t         rx_temp_comp[NB_CAL_TEMPERATURE_SEG_COUNT];
  /* Dummy filler for 32-bit word alignment */
  uint16_t        filler1;
} N1RfRxCalData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */


#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** Tx power level tuning data */
typedef struct
{
  uint8_t         band;  /** Band number */
  /** PA supply voltage for each PA gain stage in 100millivolts. */
  uint8_t         pa_vcc[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /** Tx power levels for each PA gain stage in dBm. S7.8 format. */
  int16_t         tx_power[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /** PA gain mode (High or Low) for each PA gain stage. *
   *  Takes value from enumeration type N1RfTxPaMode.    */
  uint16_t        pa_mode[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /** PA gain value in dB. S7.8 format. */
  int16_t         pa_gain[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /* RFIC PGA gain offset in dB. S7.8 format. */
  int16_t         pga_gain_offset[NB_CAL_TX_PGA_MODE_COUNT];
  /* Frequency compensation points in unit of 100KHz */
  uint16_t        subband_freq[NB_CAL_MAX_FREQ_COMP_POINTS];
  /** PA gain compensation in dB for each temperature section, freqeuncy point and per PA gain mode. S7.8 format */
  int16_t         pa_gain_comp[NB_CAL_TEMPERATURE_SEG_COUNT][NB_CAL_MAX_FREQ_COMP_POINTS][NB_CAL_TX_PA_MODE_COUNT];
} N1RfTpcCalData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** Tx power level tuning data */
typedef struct
{
  uint8_t         band;  /** Band number */
  /** PA supply voltage for each PA gain stage in 100millivolts. */
  uint8_t         pa_vcc[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /** Tx power levels for each PA gain stage in dBm. S7.8 format. */
  int16_t         tx_power[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /** PA gain mode (High or Low) for each PA gain stage. *
   *  Takes value from enumeration type N1RfTxPaMode.    */
  uint16_t        pa_mode[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /** PA gain value in dB. S7.8 format. */
  int16_t         pa_gain[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
  /* RFIC PGA gain offset in dB. S7.8 format. */
  int16_t         pga_gain_offset[NB_CAL_TX_PGA_MODE_COUNT];
  /* Frequency compensation points in unit of 100KHz */
  uint16_t        subband_freq[NB_CAL_MAX_FREQ_COMP_POINTS];
  /** PA gain compensation in dB for each temperature section, freqeuncy point and per PA gain mode. S7.8 format */
  int16_t         pa_gain_comp[NB_CAL_TEMPERATURE_SEG_COUNT][NB_CAL_MAX_FREQ_COMP_POINTS][NB_CAL_TX_PA_MODE_COUNT];
} N1RfSingleTpcCalData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */

#endif

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/* Thermal sensor ADC calibration data */
typedef struct
{
  /* Calibrated temperature sensor ADC offset value. 9-bit value */
  int16_t  adc_offset;
  /* All data given below is setup by R&D in the Lab. Only the adc_offset *
   * mentioned above is the result of factory calibration.                *
   * The entire thermal sensor range is piece-wise linear approximated by *
   * partitioning it into several segments, each having own slope/linear- *
   * relationship between Temperature vs ADC reading.                     */
  /* Boundary temperature in degree celcius for each segment. Format S7.8. */
  int16_t   temperature_seg_bound[(NB_CAL_TEMPERATURE_SEG_COUNT + 1)];
  /* Boundary ADC value for each segment. 9-bit value */
  uint16_t  adc_data_seg_bound[(NB_CAL_TEMPERATURE_SEG_COUNT + 1)];
  /* Slope of each segment in Temperature vs ADC data x-y plane. Format S7.8.*
   * This information is duplicate, and computed based on the temperature    *
   * bounds and ADC data bounds for each segment given above.                */
  int16_t   temp_sensor_slope[NB_CAL_TEMPERATURE_SEG_COUNT];
  /* Dummy filler for 32-bit word alignment */
  uint16_t        filler;
} N1RfThermalCalData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** Tx Max power reduction - for test purposes. */
typedef struct
{
  uint8_t         band;   /** Band number */
  uint8_t         filler; /** Filler for alignment */
  /** Reduction in maximum Tx power as dB value. S7.8 format. */
  int16_t         mpr;
} N1RfTxMprData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** PA Bias/control data. */
typedef struct
{
  union /* Used to store either RFFE bias data or GPIO bias controls */
  {
    struct /* Controls for Main PA via RFFE commands */
    {
      uint8_t power_ctrl[NB_RFFE_TX_PA_PWR_CTRL_COUNT];  /** Mipi Power control data */
    } pa_rffe_bias[NB_CAL_TX_PA_GAIN_STAGE_COUNT];

    struct /* Controls for Satellite PA's via GPIO controls */
    {
      uint8_t power_ctrl[NB_RFFE_TX_PA_PWR_CTRL_COUNT];  /** Gpio Data for power control */
    } pa_gpio_bias[NB_CAL_TX_PA_GAIN_STAGE_COUNT];

    struct /* Common access point for either GPIO or MIPI */
    {
      uint8_t power_ctrl_raw[NB_RFFE_TX_PA_PWR_CTRL_COUNT]; /** To access either Mipi or GPIO */
    } pa_bias[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
   } pa_bias_data;
  uint8_t band;                 /** Band number */
  uint8_t filler;               /** Filler for alignment */
} N1RfTxPABiasData;
#endif

#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** PA Bias/control data. */
typedef struct
{
  union /* Used to store either RFFE bias data or GPIO bias controls */
  {
    struct /* Controls for Main PA via RFFE commands */
    {
      uint8_t power_ctrl[NB_RFFE_TX_PA_PWR_CTRL_COUNT];  /** Mipi Power control data */
    } pa_rffe_bias[NB_CAL_TX_PA_GAIN_STAGE_COUNT];

    struct /* Controls for Satellite PA's via GPIO controls */
    {
      uint8_t power_ctrl[NB_RFFE_TX_PA_PWR_CTRL_COUNT];  /** Gpio Data for power control */
    } pa_gpio_bias[NB_CAL_TX_PA_GAIN_STAGE_COUNT];

    struct /* Common access point for either GPIO or MIPI */
    {
      uint8_t power_ctrl_raw[NB_RFFE_TX_PA_PWR_CTRL_COUNT]; /** To access either Mipi or GPIO */
    } pa_bias[NB_CAL_TX_PA_GAIN_STAGE_COUNT];
   } pa_bias_data;
  uint8_t band;                 /** Band number */
  uint8_t filler;               /** Filler for alignment */
} N1RfTxSinglePABiasData;
#endif

#endif

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** PA Bias/control data depending on UL sub-carrier configuraiton while attempting max power Tx */
typedef struct
{
  union /* Used to store either RFFE bias data or GPIO bias controls */
  {
    struct /* Controls for Main PA via RFFE commands */
    {
      uint8_t power_ctrl[NB_RFFE_TX_PA_PWR_CTRL_COUNT];  /** Mipi Power control data */
    } pa_rffe_bias[NB_CAL_TX_TONE_BW_COUNT];

    struct /* Controls for Satellite PA's via GPIO controls */
    {
      uint8_t power_ctrl[NB_RFFE_TX_PA_PWR_CTRL_COUNT];  /** Gpio Data for power control */
    } pa_gpio_bias[NB_CAL_TX_TONE_BW_COUNT];

    struct /* Common access point for either GPIO or MIPI */
    {
      uint8_t power_ctrl_raw[NB_RFFE_TX_PA_PWR_CTRL_COUNT]; /** To access either Mipi or GPIO */
    } pa_bias[NB_CAL_TX_TONE_BW_COUNT];
  } pa_bias_data;
  uint8_t band;                 /** Band number */
  uint8_t filler;               /** Filler for alignment */
} N1RfTxMaxPwrPABiasData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1)) */

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/** Tx power control data, to be used to disable TPC algorithm. */
typedef struct
{
  /* Enable/Disable Tx power control freeze mode */
  /* When 1, TPC algorithm is not used, instead entries in this table are used */
  uint8_t         tpc_freeze_mode; 
  uint8_t         band;  /** Band number */
  /* PA gain table entry to be used, 0 to 4, as per enum N1RfTxPaGainStage */
  uint8_t         pa_gain_stage;
  /* RFIC PGA gain stage to be used, 0 to 14 == G0 to G14 */
  uint8_t         pga_index;
  /* Digital gain backoff from DAC set point */
  int16_t         gtpc_backoff;
  /* Fillter for alignment */
  uint16_t        filler;
} N1RfTpcCtrlData;
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RkF_CAL_DATA_MINOR_VERSION >= 1)) */

#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))
/* Calibration data header information */
typedef struct
{
  /* Use N1RfCalItemType enumeration as bit position number to flag *
   * calibration status. 1 = calibrated. 0 = Default values in use  */
  uint16_t      calib_status_per_item;
  /* The calibration database version used for calibration.         *
   * if default, it should be N1_RF_CAL_DATA_MAJOR_VERSION          */
  uint8_t       calib_db_version_major;
  /* If default, it should be N1_RF_CAL_DATA_MINOR_VERSION          */
  uint8_t       calib_db_version_minor;
  /* Bit field to indicated which bands are calibrated for Rx path  */
  /* 3GPP band no. is used as bit position.                         */
  uint32_t      calibrated_bands_rx[3];
  /* Bit field to indicated which bands are calibrated for Tx path  */
  /* 3GPP band no. is used as bit position.                         */
  uint32_t      calibrated_bands_tx[3];
  /* The UE SW version used during calibration */
  uint32_t      UE_sw_version;
  /* The META SW version used during calibration */
  uint32_t      META_sw_version;
} N1RfCalDataHeader;

#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RkF_CAL_DATA_MINOR_VERSION >= 1)) */

#ifndef GEN_NVDM_DATABASE_FOR_PC
#if ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RF_CAL_DATA_MINOR_VERSION >= 1))

/* Data structure containing the full calibration data */
struct N1RfCalDatabase
{
  N1RfAfcCalData          afc_init __attribute__ ((aligned(4)));
  N1RfRxCalData           rx_path_loss[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__ ((aligned(4)));
  N1RfTpcCalData          tpc_cal[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__ ((aligned(4)));
  N1RfThermalCalData      temp_adc __attribute__ ((aligned(4)));
  N1RfTxMprData           tx_mpr_test[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__ ((aligned(4)));
  N1RfTxPABiasData        pa_ctrl_data[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__ ((aligned(4)));
  N1RfTxMaxPwrPABiasData  pa_ctrl_max_pwr_data[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__ ((aligned(4)));
  N1RfTpcCtrlData         tpc_ctrl_data __attribute__ ((aligned(4)));
  N1RfCalDataHeader       cal_data_header __attribute__ ((aligned(4)));
  N1RfExtData             ext_data __attribute__ ((aligned(4)));
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL
  N1RfSingleTpcCalData    single_tpc_cal[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__ ((aligned(4)));
  N1RfTxSinglePABiasData  single_pa_ctrl_data[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__ ((aligned(4)));
#endif
} __attribute__ ((aligned(4)));
#endif /* ((N1_RF_CAL_DATA_MAJOR_VERSION >= 0) && (N1_RkF_CAL_DATA_MINOR_VERSION >= 1)) */
#endif

#ifndef GEN_NVDM_DATABASE_FOR_PC
/* Data structure containing the full default calibration data */
struct N1RfDefaultCalDatabase
{
    const N1RfAfcCalData          *afc_init __attribute__((aligned(4)));
    const N1RfRxCalData           *rx_path_loss[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__((aligned(4)));
    const N1RfTpcCalData          *tpc_cal[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__((aligned(4)));
    const N1RfThermalCalData      *temp_adc __attribute__((aligned(4)));
    const N1RfTxMprData           *tx_mpr_test[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__((aligned(4)));
    const N1RfTxPABiasData        *pa_ctrl_data[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__((aligned(4)));
    const N1RfTxMaxPwrPABiasData  *pa_ctrl_max_pwr_data[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__((aligned(4)));
    const N1RfTpcCtrlData         *tpc_ctrl_data __attribute__((aligned(4)));
    const N1RfCalDataHeader       *cal_data_header __attribute__((aligned(4)));
    const N1RfExtData             *ext_data __attribute__((aligned(4)));
#ifdef FEA_TEMP_MULTI_SINGLE_TONE_CAL
    const N1RfSingleTpcCalData    *single_tpc_cal[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__((aligned(4)));
    const N1RfTxSinglePABiasData  *single_pa_ctrl_data[NB_MT2625_MAX_NO_SUPPORTED_BANDS] __attribute__((aligned(4)));
#endif
} __attribute__((aligned(4)));
#endif

#endif /* N1_RF_CAL_DATA_H */
/* end of file */
