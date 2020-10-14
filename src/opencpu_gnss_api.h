
/************************************���ݽṹ��װ********************************************************/
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

/** GNSS��λ�ɹ��ص�����*/
typedef void (*cmiot_gnss_callback)(const cmgnss_loc_t* loc);


/************************************GNSS�ӿڲ���********************************************************/
/**
 * \brief ����GNSS��λģʽ
 *
 * \param [in] mode 0��standaloneģʽ��1��AGNSSģʽ
 * \return true or false
 *
 * \details ������GNSS����ǰ���ã����򽫻�����ʧ�ܡ�ʹ��AGNSSģʽʱ���뱣֤AGNSS����������Ч�����򽫻���䵽standaloneģʽ
 */
bool opencpu_gnss_set_mode(int mode);

/**
 * \brief ��ȡGNSS��λģʽ
 *
 * \return 0��standaloneģʽ��1��AGNSSģʽ
 *
 * \details
 */
int opencpu_gnss_get_mode(void);

/**
 * \brief ����GNSS
 *
 * \return true or false
 * \details �첽����λ������ģ���޷�����˯�ߣ�ֹͣ��λ��ģ��ɽ���˯��
 */
bool opencpu_gnss_start(void);

/**
 * \brief �ر�GNSS
 *
 * \return true or false
 * \details �첽
 */
bool opencpu_gnss_stop(void);

/**
 * \brief ��ȡGNSS����״̬
 *
 * \return 0��GNSSδ������1��GNSS������
 *
 * \details
 */
bool opencpu_gnss_is_active(void);

/**
 * \brief ��/��/������GNSS
 *
 * \param [in] rst 0����������1����������2��������
 *
 * \return true or false
 * \details ������GNSS���������ʹ�ô˹���
 */
bool opencpu_gnss_reset(int rst);

/**
 * \brief ����GNSS�ص���������GNSS����ǰ����
 *
 * \param [in] callback �ص�����
 * \return true or false
 *
 * \details �ص����������ڶ�λ�ɹ��󴥷���ÿ�ζ�λ�ɹ����ᱻ����
 */
bool opencpu_gnss_set_callback(cmiot_gnss_callback callback);

/**
 * \brief ��ȡNMEA����
 *
 * \param [in] type NMEA���ͣ�0-63
 * \param [in] nmea nmea�洢��ÿ��nmea����200�ֽ�����
 *
 * \details GGA(0x1<<0) RMC(0x1<<1) GSV(0x1<<2) GSA(0x1<<3) VTG(0x1<<4) GLL(0x1<<5)
 */
bool opencpu_gnss_get_nmea(int type, char* nmea);

/**
 * \brief ��ȡGNSS��λ��Ϣ
 *
 * \param [in] location λ����Ϣ���ṹ���װ
 * \return true or false
 *
 * \details ����GNSS�����ҳɹ���λ֮��ſɻ�ȡ��λ����Ϣ
 */
bool opencpu_gnss_get_loc(cmgnss_loc_t* location);


/************************************AGNSS�ӿڲ���********************************************************/

/**
 * \brief ��ѯAGNSS�������ݵ���Ч��
 *
 * \param [in] data �洢��ѯ���ݣ��ṹ���װ
 * \return true or false
 *
 * \details ����AGNSSģʽǰ����ж������Ƿ���Ч
 */
bool opencpu_agnss_is_data_valid(cmagnss_data_t* data);

/**
 * \brief �ֶ�����AGNSS��������
 *
 * \return true or false
 *
 * \details �ֶ��������£������������������
 */
bool opencpu_agnss_manual_update(void);

/**
 * \brief �����Զ�������ANGSS��������
 *
 * \param [in] auto_enable 0����ֹ�Զ������£�Ĭ��ֵ����1�������Զ�������
 * \param [in] interval ���������λ�����ӣ���Χ��1-60��
 * \return true or false
 *
 * \details ���ú󣬺�̨����ÿ��interval���Ӽ��һ�����ݣ���ʧЧ���������������
 */
bool opencpu_agnss_set_auto_update(bool auto_enable, int interval);

/**
 * \brief ��ȡ�Զ�������״̬
 *
 * \param [in] auto_enable 0����ֹ�Զ������£�Ĭ��ֵ����1�������Զ�������
 * \param [in] interval ���������λ�����ӣ���Χ��1-60��
 * \return true or false
 *
 * \details
 */
bool opencpu_agnss_get_auto_update(bool* auto_enable, int* interval);

/**
 * \brief ����AGNSS��������ַ
 *
 * \param [in] url ��������ַ
 * \return true or false
 *
 * \details �������������������ô���
 */
bool opencpu_agnss_set_url(char* url);

/**
 * \brief ��ȡAGNSS��������ַ
 *
 * \param [in] url ��������ַ
 * \return true or false
 *
 * \details
 */
bool opencpu_agnss_get_url(char* url);


/************************************���Խӿڲ���********************************************************/
/**
 * \brief ��ȡ���յ���GNSS���ݳ���
 *
 * \return ���ݳ��Ȼ���󷵻�-1
 *
 * \details ���ڵ���ʱʹ��
 */
int opencpu_gnss_get_recv_len(void);

/**
 * \brief ��ȡ���յ���GNSS����
 *
 * \param [in] data ���ݴ洢
 * \param [in] len ���ݳ���
 * \return ʵ�ʶ�ȡ���Ȼ���󷵻�-1
 *
 * \details ���ڵ���ʱʹ��
 */
int opencpu_gnss_get_recv_data(char* data, int len);

/**
 * \brief ����ָ����GNSSоƬ
 *
 * \param [in] cmd ָ������
 * \param [in] len ָ���
 * \return true or false
 *
 * \details ���ڵ���ʱʹ��
 */
bool opencpu_gnss_send_cmd(char* cmd, int len);

/**
 * \brief ����GNSS���ݽ���͸��
 *
 * \param [in] debug 0����ֹ����͸����Ĭ��ֵ����1���������͸��
 * \return 
 *
 * \details ���ڵ���ʱʹ�ã�����͸��������API��ȡnmea���ݡ���λ���ݣ��ص��������ܴ���
 */
bool opencpu_gnss_set_debug(int debug);

/**
 * \brief ��ȡ����͸��״̬
 *
 * \return 0����ֹ����͸����Ĭ��ֵ����1���������͸��
 *
 * \details ���ڵ���ʱʹ��
 */
int opencpu_gnss_get_debug(void);



/************************************ʹ������********************************************************/
/*
1��standaloneģʽ��
������GNSS�ص�����
������GNSS
�ۻص�������������λ�ɹ�
�ܶ�ȡ��λ��Ϣ
�ݹر�GNSS
*/

/*
2��agnssģʽ��
�ټ�鸨�����ݵ���Ч��
�ڸ��¸������ݣ���ȷ�ϸ��³ɹ�
�����ö�λģʽΪagnssģʽ
�����ûص�����
������GNSS
�޻ص�������������λ�ɹ�
�߻�ȡ��λ��Ϣ
��ر�GNSS
*/

/*
3������ģʽ��
������GNSS
�����ý���͸��
�ۻ�ȡGNSS�������ݳ���
�ܶ�ȡGNSS����
�ݴ��ڴ�ӡ����
��ָ���
�ߴӢۿ�ʼѭ��
��ر�GNSS
*/

