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
#ifndef NB_CUSTOM_DATA_H
#define NB_CUSTOM_DATA_H
/******************************************************************************
*  Include
*******************************************************************************/
#ifndef GEN_NVDM_DATABASE_FOR_PC 
#include <stdint.h>
#include <stdbool.h>
//Standard headers
#include <stdio.h>
#include <string.h>
#endif

#include "n1_rf_cal_data.h"
#include "nb_calib_defaults.h"
/******************************************************************************
 * CONSTANTS
 ******************************************************************************/
/* BPI controls for IDC. Bit positions fixed by MT2625 BB Top design. BPI pins *
 * muxed to GPIO pins. Pin muxing controls done by MT2625 BB Top drivers.      */
/* For NBIOT Active signalling for BT/Wifi */
#define NB_IDC_NBIOT_ACT_BPI_BIT_SHIFT        6 /* BPI6 is for NBIOT_ACT signal */
#define NB_IDC_NBIOT_ACT_BPI_BIT_WIDTH        1 /* Single BPI pin. */

#define NB_IDC_NBIOT_ACT_BPI_BIT_MASK \
    (((1 << NB_IDC_NBIOT_ACT_BPI_BIT_WIDTH) - 1) << NB_IDC_NBIOT_ACT_BPI_BIT_SHIFT)

/* For NBIOT Tx Priority signalling for BT/Wifi */
#define NB_IDC_NBIOT_PRI_BPI_BIT_SHIFT        5 /* BPI5 is for NBIOT_PRI signal */
#define NB_IDC_NBIOT_PRI_BPI_BIT_WIDTH        1 /* Single BPI pin. */

#define NB_IDC_NBIOT_PRI_BPI_BIT_MASK \
    (((1 << NB_IDC_NBIOT_PRI_BPI_BIT_WIDTH) - 1) << NB_IDC_NBIOT_PRI_BPI_BIT_SHIFT)

/* For NBIOT GPS blanking signalling for BT/Wifi */
#define NB_IDC_NBIOT_GPS_BLANK_BPI_BIT_SHIFT  8 /* BPI8 is for GPS BLANK signal */
#define NB_IDC_NBIOT_GPS_BLANK_GPI_BIT_WIDTH  1 /* Single BPI pin. */

#define NB_IDC_NBIOT_GPS_BLANK_BPI_BIT_MASK \
    (((1 << NB_IDC_NBIOT_GPS_BLANK_GPI_BIT_WIDTH) - 1) << NB_IDC_NBIOT_GPS_BLANK_BPI_BIT_SHIFT)

/* Timing offset of BPI controls for IDC. All time values are offsets from   *
 * Tx starting over the air or Tx stopping over the air time. During Tx start*
 * offsets are positive as these events are before Tx starting on air, and   *
 * offsets are negative for events during Tx off, as these events are after  *
 * Tx is stopped over the air.                                               */
/* FIXME: Following timing values needs to be determined and agreed with IOT *
 * BU's Wifi team.                                                           */
#define NB_IDC_NBIOT_ACT_ON_TIMING_OFFSET         NB_RFFE_TIME_US(-50)
#define NB_IDC_NBIOT_PRI_1_ON_TIMING_OFFSET       NB_RFFE_TIME_US(-45)
#define NB_IDC_NBIOT_PRI_2_ON_TIMING_OFFSET       NB_RFFE_TIME_US(-25)
/* FIXME: Following timing values needs to be determined and agreed with WSD *
 * GPS team.                                                                 */
#define NB_IDC_NBIOT_GPS_BLANK_ON_TIMING_OFFSET   NB_RFFE_TIME_US(-40)

/* Event timings while Tx is turned OFF. */
#define NB_IDC_NBIOT_ACT_OFF_TIMING_OFFSET        NB_RFFE_TIME_US(10)
#define NB_IDC_NBIOT_PRI_OFF_TIMING_OFFSET        NB_RFFE_TIME_US(11)
#define NB_IDC_NBIOT_GPS_BLANK_OFF_TIMING_OFFSET  NB_RFFE_TIME_US(16)

/******************************************************************************
 * MACROS
 ******************************************************************************/
/* System clock is 1.92MHz */
#define NB_RFFE_TIME_US(val_)   (int32_t)(val_*1.92)

/* Get path index from the path definition */
#define NB_RFFE_GET_RF_PATH_INDEX(val_)   ((val_) - 1)

/******************************************************************************
 * DATA TYPES
 *****************************************************************************/
typedef enum
{
  NB_LTE_BAND1 = 0,
  NB_LTE_BAND2 = 1,
  NB_LTE_BAND3 = 2,
  NB_LTE_BAND4 = 3,
  NB_LTE_BAND5 = 4,
  NB_LTE_BAND8 = 5,
  NB_LTE_BAND11 = 6,
  NB_LTE_BAND12 = 7,
  NB_LTE_BAND13 = 8,
  NB_LTE_BAND14 = 9,
  NB_LTE_BAND17 = 10,
  NB_LTE_BAND18 = 11,
  NB_LTE_BAND19 = 12,
  NB_LTE_BAND20 = 13,
  NB_LTE_BAND21 = 14,
  NB_LTE_BAND25 = 15,
  NB_LTE_BAND26 = 16,
  NB_LTE_BAND28 = 17,
  NB_LTE_BAND31 = 18,
  NB_LTE_BAND66 = 19,
  NB_LTE_BAND70 = 20,
  NB_LTE_BAND71 = 21,
  NB_LTE_BAND72 = 22,
  NB_LTE_BAND73 = 23,
  NB_LTE_BAND74 = 24,
  NB_LTE_BAND85 = 25,
  NB_LTE_MAX_NO_OF_BANDS
} NB_RFFE_BAND;

typedef enum
{
  RFFE_BAND_NOT_SUPPORTED = 0,
  RFFE_BAND_SUPPORTED     = 1,
} NB_RFFE_BAND_SUPPORT;

typedef enum
{
  RFFE_RX_NO_PATH = 0,
  RFFE_RX_PATH_1  = 1,
  RFFE_RX_PATH_2  = 2,
  RFFE_RX_PATH_3  = 3,
  RFFE_RX_PATH_4  = 4,
  RFFE_RX_PATH_COUNT = RFFE_RX_PATH_4
} NB_RFFE_RX_PATH;

typedef enum
{
  RFIC_RX_NO_PORT = 0,
  RFIC_RX_PORT_ULB = 1,
  RFIC_RX_PORT_LB  = 2,
  RFIC_RX_PORT_MB1 = 3,
  RFIC_RX_PORT_MB2 = 4,
  RFIC_RX_PORT_COUNT = RFIC_RX_PORT_MB2
} NB_RFIC_RX_PORT;

typedef enum
{
  RFFE_TX_NO_PATH = 0,
  RFFE_TX_PATH_1  = 1,
  RFFE_TX_PATH_2  = 2,
  RFFE_TX_PATH_3  = 3,
  RFFE_TX_PATH_4  = 4,
  RFFE_TX_PATH_5  = 5,
  RFFE_TX_PATH_COUNT = RFFE_TX_PATH_5
} NB_RFFE_TX_PATH;

typedef enum
{
  RFIC_TX_NO_PORT = 0,
  RFIC_TX_PORT_ULB = 1,
  RFIC_TX_PORT_LB  = 2,
  RFIC_TX_PORT_MB1 = 3,
  RFIC_TX_PORT_MB2 = 4,
  RFIC_TX_PORT_COUNT = RFIC_TX_PORT_MB2
} NB_RFIC_TX_PORT;

typedef enum
{
  RFFE_TX_NO_POWER_CLASS = 0,
  RFFE_TX_POWER_CLASS_1  = 1,
  RFFE_TX_POWER_CLASS_2  = 2,
  RFFE_TX_POWER_CLASS_3  = 3,
  RFFE_TX_POWER_CLASS_4  = 4,
  RFFE_TX_POWER_CLASS_5  = 5,
  RFFE_TX_POWER_CLASS_6  = 6,
} NB_RFFE_TX_POWER_CLASS;

/* Methods to control RF Front End components */
typedef enum
{
  RFFE_CTRL_NULL = 0,
  RFFE_BPI  = 1,
  RFFE_MIPI = 2
} NB_RFFE_CTRL_TYPE;

/* Indices for RFFE Rx path control event database */
typedef enum
{
  RFFE_RX_EVT_1 = 0,
  RFFE_RX_EVT_2 = 1,
  RFFE_RX_EVT_3 = 2,
  RFFE_RX_EVT_4 = 3,
  RFFE_RX_EVT_COUNT
} NB_RFFE_RX_CTRL_EVT_INDEX;

/* Indices for RFFE Rx path control data database*/
typedef enum
{
  RFFE_TX_EVT_1 = 0,
  RFFE_TX_EVT_2 = 1,
  RFFE_TX_EVT_3 = 2,
  RFFE_TX_EVT_4 = 3,
  RFFE_TX_EVT_5 = 4,
  RFFE_TX_EVT_6 = 5,
  RFFE_TX_EVT_7 = 6,
  RFFE_TX_EVT_8 = 7,
  RFFE_TX_EVT_9 = 8,
  RFFE_TX_EVT_COUNT
} NB_RFFE_TX_CTRL_EVT_INDEX;

/* Indices for RFFE Tx path control event database */
typedef enum
{
  RFFE_RX_DATA_1 = 0,
  RFFE_RX_DATA_2 = 1,
  RFFE_RX_DATA_3 = 2,
  RFFE_RX_DATA_4 = 3,
  RFFE_RX_DATA_5 = 4,
  RFFE_RX_DATA_6 = 5,
  RFFE_RX_DATA_7 = 6,
  RFFE_RX_DATA_8 = 7,
  RFFE_RX_DATA_COUNT
} NB_RFFE_RX_CTRL_DATA_INDEX;

/* Indices for RFFE Tx path control data database*/
typedef enum
{
  RFFE_TX_DATA_1 = 0,
  RFFE_TX_DATA_2 = 1,
  RFFE_TX_DATA_3 = 2,
  RFFE_TX_DATA_4 = 3,
  RFFE_TX_DATA_5 = 4,
  RFFE_TX_DATA_6 = 5,
  RFFE_TX_DATA_7 = 6,
  RFFE_TX_DATA_8 = 7,
  RFFE_TX_DATA_9 = 8,
  RFFE_TX_DATA_10 = 9,
  RFFE_TX_DATA_11 = 10,
  RFFE_TX_DATA_COUNT
} NB_RFFE_TX_CTRL_DATA_INDEX;

/* Event Types during RF Front End controls */
typedef enum
{
  RFFE_EVENT_NULL  = 0,
  RFFE_RX_ON_1     = 1,
  RFFE_RX_EVT_BASE = RFFE_RX_ON_1,
  RFFE_RX_ON_2     = 2,
  RFFE_RX_OFF_1    = 3,
  RFFE_RX_OFF_2    = 4,
  RFFE_TX_ON_1     = 5,
  RFFE_TX_EVT_BASE = RFFE_TX_ON_1,
  RFFE_TX_ON_2     = 6,
  RFFE_TX_ON_3     = 7,
  RFFE_TX_PWR_OFF  = 8, /* Used for Tx Blanking */
  RFFE_TX_PWR_ON   = 9, /* Used for Tx Un-blanking */
  RFFE_TX_PWR_CHG  = 10, /* For in-device co-existance */
  RFFE_TX_OFF_1    = 11,
  RFFE_TX_OFF_2    = 12,
  RFFE_TX_OFF_3    = 13,
} NB_RFFE_CTRL_EVT_TYPE;

/* Different types of RF Front End components */
typedef enum
{
  RFFE_COMP_NULL = 0,
  RFFE_FEM       = 1,
  RFFE_ASM       = 2,
  RFFE_PA        = 3,
  RFFE_PA_BIAS   = 4, /* Data associated with this control is variable */
} NB_RFFE_CTRL_FUNC;

/* Ports for MIPI and GPIO controls. In MT2625 there is only one MIPI port */
/* and one GPIO port (contains 10 GPIO pins).                              */
typedef enum
{
  RFFE_PORT_NULL = 0,
  RFFE_BPI_PORT0  = 1,
  RFFE_MIPI_PORT0 = 2
} NB_RFFE_PORT_SEL;

/* Information regarding FEM which is useful for FEM identification */
typedef struct
{
  uint8_t  manufacturer_id_addr;
  uint8_t  manufacturer_id_data;
  uint8_t  product_id_addr;
  uint8_t  product_id_data;
  uint8_t  revision_id_addr;
  uint8_t  revision_id_data;
  uint8_t  user_id_addr;
  uint8_t  user_id_data;
} NB_RFFE_FEM_ID_T;

/* Crystal scurve information */
typedef struct
{
  /* crystal scurve 3 order curve fitting coefficient */
  int32_t c3;
  int32_t c2;
  int32_t c1;

  /* crytal scurve inflection point */
  uint16_t t0;
  uint16_t rsv;
}NB_RFFE_SCURVE_T;

/* Max Power limited parameters in Signaling Test from RfCapability    */
typedef struct
{
  uint32_t        limit_band_bitmap; //indicates:  bit0 ->band_index0, bit1 ->band_index1, bit25->band_index25 ;bit_x =1 means using limited max power in this Band
                                     //bit26~bit30 reserved, bit31 is used as limit NSFT max Tx power flag,bit31=1,means enable limit.
  uint16_t        limited_tx_power;  //S7.8 limited max power
  uint16_t        reserve;
} N1_RF_CAPABI_MAX_PWR_LIMIT;

/* Common/Basic/Misc information regarding RF FE components */
typedef struct
{
  NB_RFFE_SCURVE_T scurve;
  NB_RFFE_FEM_ID_T fem_id;
  uint32_t         fem_id_read_delay_us;
  uint8_t          fem_usid;
  int8_t           nprach_npusch_tx_on_time_delta;
  uint8_t          ntc_flag;
  uint8_t          mtk_version;
  uint8_t          customer_version;
  uint8_t          current_var;
  uint8_t          timing_flag;
  uint8_t          MS_flag;
  uint8_t          rsv_1;
  uint8_t          rsv_2;
  uint8_t          rsv_3;
  uint8_t          rsv_4;
  uint16_t         rsv_5;
  uint16_t         rsv_6;
} NB_RFFE_INFO_T;

/* RFFE top level configuration info for each band. */
typedef struct
{
  uint8_t  band_no;         /* 3GPP Band no */
  uint8_t  band_supported;  /* values from type NB_RFFE_BAND_SUPPORT will be used */
  uint8_t  rx_rffe_path;    /* values from type NB_RFFE_RX_PATH will be used */
  uint8_t  rfic_rx_port;    /* values from type NB_RFIC_RX_PORT will be used */
  uint8_t  tx_rffe_path;    /* values from type NB_RFFE_TX_PATH will be used */
  uint8_t  rfic_tx_port;    /* values from type NB_RFIC_TX_PORT will be used */
  uint8_t  tx_power_class;  /* values from type NB_RFFE_TX_POWER_CLASS will be used */
  uint8_t  rsv_0;           /* Reserved for future use */
} NB_RFFE_CONFIG_T;

/* Start and Stop index in control data table */
typedef struct
{
  uint8_t  start_index;
  uint8_t  stop_index;
} NB_RFFE_MIPI_DATA_STSP;

/* RF Front End control event definition */
typedef struct
{
  NB_RFFE_CTRL_TYPE       ctrl;
  NB_RFFE_MIPI_DATA_STSP  data_index;
  NB_RFFE_CTRL_EVT_TYPE   event_type;
  int32_t                 offset;
} NB_RFFE_EVENT_TABLE_T;

/* Defines elements of MIPI or GPIO control data */
typedef union
{
  struct
  {
    uint8_t   usid;
    uint8_t   addr;
    uint8_t   data;
  } mipi;
  struct
  {
    uint8_t   shift;
    uint8_t   mask;
    uint8_t   data;
  } gpio;
} NB_RFFE_CTRL_DATA;

/* GPIO or MIPI control data table. */
typedef struct
{
  NB_RFFE_CTRL_FUNC   comp;
  NB_RFFE_PORT_SEL    port;
  NB_RFFE_CTRL_DATA   data;
} NB_RFFE_DATA_TABLE_T;

/* RF Front End control information for each FE path */
typedef struct
{
  const NB_RFFE_EVENT_TABLE_T *event_info;
  const NB_RFFE_DATA_TABLE_T  *event_data;
} NB_RFFE_PATH_CTRL_T;

typedef struct
{
  NB_RFFE_INFO_T      nb_rffe_info;
  NB_RFFE_CONFIG_T    nb_rffe_config[NB_LTE_MAX_NO_OF_BANDS];
  NB_RFFE_PATH_CTRL_T nb_rffe_rx_ctrl_info[RFFE_RX_PATH_COUNT];
  NB_RFFE_PATH_CTRL_T nb_rffe_tx_ctrl_info[RFFE_TX_PATH_COUNT];
  N1_RF_CAPABI_MAX_PWR_LIMIT rf_capabi_max_pwr_limit;
} NB_RFFE_CUSTOM_DATABASE_T;

/***********************************************************************
* @detail  custom file store nvram, define custom file structure databse
*
* @aim  customer can modify custom file by nv-editor
* 
***********************************************************************/
enum N1RfCustomID
{
  RFFE_FEM_CONFIG      = 0,
  RFCAPABI_LIMIT_TX_PWR= 1,
  RFFE_BAND_CONFIG     = 2,
  RFFE_RX_EVENT        = 3,
  RFFE_RX_DATA         = 4,
  RFFE_TX_EVENT        = 5,
  RFFE_TX_DATA         = 6,
  RFFE_CUSTOM_ITEM_COUNT,
};

/*custom RX EVENT TABLE*/
typedef struct
{
  NB_RFFE_EVENT_TABLE_T  rx_event[RFFE_RX_EVT_COUNT];
}NB_RFFE_RX_EVENT_TABLE;
/*custom RX DATA TABLE*/
typedef struct
{
  NB_RFFE_DATA_TABLE_T   rx_data[RFFE_RX_DATA_COUNT];
}NB_RFFE_RX_DATA_TABLE;
/*custom TX EVENT TABLE*/
typedef struct
{
  NB_RFFE_EVENT_TABLE_T  tx_event[RFFE_TX_EVT_COUNT];
}NB_RFFE_TX_EVENT_TABLE;
/*custom TX DATA TABLE*/
typedef struct
{
  NB_RFFE_DATA_TABLE_T   tx_data[RFFE_TX_DATA_COUNT];
}NB_RFFE_TX_DATA_TABLE;

/*nvdm custom file database define*/
typedef struct
{
  NB_RFFE_INFO_T             nb_rffe_info; /* fem configuration*/
  NB_RFFE_CONFIG_T           nb_rffe_config[NB_LTE_MAX_NO_OF_BANDS];  /*band information config*/
  NB_RFFE_RX_EVENT_TABLE     nb_rffe_rx_event[RFFE_RX_PATH_COUNT];   /*rffe rx event table configuration */
  NB_RFFE_RX_DATA_TABLE      nb_rffe_rx_data[RFFE_RX_PATH_COUNT];    /*rffe rx data table configuration*/
  NB_RFFE_TX_EVENT_TABLE     nb_rffe_tx_event[RFFE_TX_PATH_COUNT];   /*rffe tx event table configuration*/
  NB_RFFE_TX_DATA_TABLE      nb_rffe_tx_data[RFFE_TX_PATH_COUNT];    /*rffe tx data table configuration*/
  N1_RF_CAPABI_MAX_PWR_LIMIT rf_capabi_max_pwr_limit;
}NB_RFFE_CUSTOM_DATABASE;

#endif /* NB_CUSTOM_DATA_H */
/* end of file */
