 /***********************************************
  *  @file    opencpu_gnss_demo.c
  *  @brief   description
  *  Copyright (c) 2019 China Mobile IOT.
  *  All rights reserved.
  *  created by zhangxw @2019/11/12
  *  description: gnss demo
  **********************************************/

#include "n10sg_opencpu.h"

/**
 * \brief gnss callback
 *
 * \param [in] loc location struct
 * \return none
 *
 * \details triggered when positioning succeeds
 */
static void opencpu_gnss_callback(const cmgnss_loc_t* loc)
{
	opencpu_printf("latitude:%.4f%c,longtitude:%.4f%c\r\n", loc->latitude,//get location
					loc->lat_n_s,
					loc->longtitude,
					loc->lng_e_w);

	opencpu_gnss_stop();//turn off gnss
}


/**
 * \brief gnss demo
 *
 *
 * \details gnss standalone mode demo
 */
void opencpu_gnss_standalone_test(void)
{
	opencpu_gnss_set_callback(opencpu_gnss_callback);//set callback function
	opencpu_gnss_start();//turn on gnss

	vTaskDelay(4000 / portTICK_RATE_MS);//wait for gnss fully started
	/*ToDo: get nmea*/
}


/**
 * \brief gnss demo
 *
 *
 * \details gnss agnss mode demo
 */
void opencpu_gnss_agnss_test(void)
{
	cmagnss_data_t agnss_data = {0};
	while(1)
	{
		opencpu_agnss_is_data_valid(&agnss_data);

		if(agnss_data.valid == 1)//agnss data is valid
		{
			break;
		}

		opencpu_agnss_manual_update();//request agnss data
		vTaskDelay(10000 / portTICK_RATE_MS);//delay 10s for downloading data
	}

	opencpu_gnss_set_mode(1);
	opencpu_gnss_set_callback(opencpu_gnss_callback);//set callback function
	opencpu_gnss_start();

	vTaskDelay(4000 / portTICK_RATE_MS);//wait for gnss fully started
	/*ToDo: get nmea*/
}


