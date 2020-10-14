
/************************************数据结构封装********************************************************/
typedef struct{
	char valid;			/*!< 0:invalid,1:valid,2:unknown status*/
	uint32_t size;		/*!< assistant data length*/
	uint32_t time[2];	/*!< assistant data download time,time[0]:yymmdd,time[1]:hhmmss*/
}cmagnss_data_t;

typedef struct{
	char fix;			/*!< 1:invalid, 2:2D fix, 3:3D fix*/
	char nsat;			/*!< total number of satellites in use*/
	char lat_n_s;		/*!< N:north, S:south*/
	char lng_e_w;		/*!< E:east, W:west*/
	short cog;			/*!< course over Ground*/
	int date;			/*!< yymmdd Date of Fix*/
	float spkm;			/*!< speed over ground (Km/hr)*/
	float spkn;			/*!< speed over ground (knots)*/
	float time;			/*!< UTC time (hhmmss.sss)*/
	float latitude;		/*!< latitude*/
	float longtitude;	/*!< longtidude*/
	float hdop;			/*!< horizontal accuracy factor*/
	float altitude;		/*!< altidude*/
}cmgnss_loc_t;

/** GNSS定位成功回调函数*/
typedef void (*cmiot_gnss_callback)(const cmgnss_loc_t* loc);


/************************************GNSS接口部分********************************************************/
/**
 * \brief 设置GNSS定位模式
 *
 * \param [in] mode 0：standalone模式，1：AGNSS模式
 * \return true or false
 *
 * \details 必须在GNSS启动前设置，否则将会设置失败。使用AGNSS模式时必须保证AGNSS辅助数据有效，否则将会跌落到standalone模式
 */
bool opencpu_gnss_set_mode(int mode);

/**
 * \brief 获取GNSS定位模式
 *
 * \return 0：standalone模式，1：AGNSS模式
 *
 * \details
 */
int opencpu_gnss_get_mode(void);

/**
 * \brief 启动GNSS
 *
 * \return true or false
 * \details 异步，定位开启后模组无法进入睡眠，停止定位后模组可进入睡眠
 */
bool opencpu_gnss_start(void);

/**
 * \brief 关闭GNSS
 *
 * \return true or false
 * \details 异步
 */
bool opencpu_gnss_stop(void);

/**
 * \brief 获取GNSS启动状态
 *
 * \return 0：GNSS未启动，1：GNSS已启动
 *
 * \details
 */
bool opencpu_gnss_is_active(void);

/**
 * \brief 冷/温/热启动GNSS
 *
 * \param [in] rst 0：冷启动，1：温启动，2：热启动
 *
 * \return true or false
 * \details 必须在GNSS启动后才能使用此功能
 */
bool opencpu_gnss_reset(int rst);

/**
 * \brief 设置GNSS回调函数，在GNSS启动前设置
 *
 * \param [in] callback 回调函数
 * \return true or false
 *
 * \details 回调函数将会在定位成功后触发，每次定位成功均会被触发
 */
bool opencpu_gnss_set_callback(cmiot_gnss_callback callback);

/**
 * \brief 获取NMEA数据
 *
 * \param [in] type NMEA类型，0-63
 * \param [in] nmea nmea存储，每条nmea缓存200字节以上
 *
 * \details GGA(0x1<<0) RMC(0x1<<1) GSV(0x1<<2) GSA(0x1<<3) VTG(0x1<<4) GLL(0x1<<5)
 */
bool opencpu_gnss_get_nmea(int type, char* nmea);

/**
 * \brief 获取GNSS定位信息
 *
 * \param [in] location 位置信息，结构体封装
 * \return true or false
 *
 * \details 仅在GNSS开启且成功定位之后才可获取到位置信息
 */
bool opencpu_gnss_get_loc(cmgnss_loc_t* location);


/************************************AGNSS接口部分********************************************************/

/**
 * \brief 查询AGNSS辅助数据的有效性
 *
 * \param [in] data 存储查询数据，结构体封装
 * \return true or false
 *
 * \details 开启AGNSS模式前务必判断数据是否有效
 */
bool opencpu_agnss_is_data_valid(cmagnss_data_t* data);

/**
 * \brief 手动更新AGNSS辅助数据
 *
 * \return true or false
 *
 * \details 手动触发更新，向服务器请求辅助数据
 */
bool opencpu_agnss_manual_update(void);

/**
 * \brief 设置自动检测更新ANGSS辅助数据
 *
 * \param [in] auto_enable 0：禁止自动检测更新（默认值），1：允许自动检测更新
 * \param [in] interval 检测间隔，单位：分钟，范围（1-60）
 * \return true or false
 *
 * \details 设置后，后台程序每隔interval分钟检测一次数据，若失效则会立即触发更新
 */
bool opencpu_agnss_set_auto_update(bool auto_enable, int interval);

/**
 * \brief 获取自动检测更新状态
 *
 * \param [in] auto_enable 0：禁止自动检测更新（默认值），1：允许自动检测更新
 * \param [in] interval 检测间隔，单位：分钟，范围（1-60）
 * \return true or false
 *
 * \details
 */
bool opencpu_agnss_get_auto_update(bool* auto_enable, int* interval);

/**
 * \brief 设置AGNSS服务器地址
 *
 * \param [in] url 服务器地址
 * \return true or false
 *
 * \details 如无特殊需求请勿设置此项
 */
bool opencpu_agnss_set_url(char* url);

/**
 * \brief 获取AGNSS服务器地址
 *
 * \param [in] url 服务器地址
 * \return true or false
 *
 * \details
 */
bool opencpu_agnss_get_url(char* url);


/************************************调试接口部分********************************************************/
/**
 * \brief 获取接收到的GNSS数据长度
 *
 * \return 数据长度或错误返回-1
 *
 * \details 仅在调试时使用
 */
int opencpu_gnss_get_recv_len(void);

/**
 * \brief 获取接收到的GNSS数据
 *
 * \param [in] data 数据存储
 * \param [in] len 数据长度
 * \return 实际读取长度或错误返回-1
 *
 * \details 仅在调试时使用
 */
int opencpu_gnss_get_recv_data(char* data, int len);

/**
 * \brief 发送指令至GNSS芯片
 *
 * \param [in] cmd 指令内容
 * \param [in] len 指令长度
 * \return true or false
 *
 * \details 仅在调试时使用
 */
bool opencpu_gnss_send_cmd(char* cmd, int len);

/**
 * \brief 控制GNSS数据接收透传
 *
 * \param [in] debug 0：禁止接收透传（默认值），1：允许接收透传
 * \return 
 *
 * \details 仅在调试时使用，开启透传后不能用API获取nmea数据、定位数据，回调函数不能触发
 */
bool opencpu_gnss_set_debug(int debug);

/**
 * \brief 获取接收透传状态
 *
 * \return 0：禁止接收透传（默认值），1：允许接收透传
 *
 * \details 仅在调试时使用
 */
int opencpu_gnss_get_debug(void);



/************************************使用流程********************************************************/
/*
1、standalone模式：
①设置GNSS回调函数
②启动GNSS
③回调函数触发，定位成功
④读取定位信息
⑤关闭GNSS
*/

/*
2、agnss模式：
①检查辅助数据的有效性
②更新辅助数据，并确认更新成功
③设置定位模式为agnss模式
④设置回调函数
⑤启动GNSS
⑥回调函数触发，定位成功
⑦获取定位信息
⑧关闭GNSS
*/

/*
3、调试模式：
①启动GNSS
②设置接收透传
③获取GNSS接收数据长度
④读取GNSS数据
⑤串口打印分析
⑥指令发出
⑦从③开始循环
⑧关闭GNSS
*/

