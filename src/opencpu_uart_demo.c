/*
   n10sg_uart.c
   created by xgl,2019/1/22
*/

#include "n10sg_opencpu.h"

#define OPENCPU_MAIN_UART HAL_UART_1

 unsigned char uart_cmd = 0;

//uart中断回调函数
static void user_uart_callback(hal_uart_callback_event_t status, void *user_data)
{
   char buffer[64];
   char *pbuf;
   pbuf = buffer;
   int temp1;
   if(status == HAL_UART_EVENT_READY_TO_READ)
   {
	   memset(buffer,0,64);
       temp1 = opencpu_uart_receive(OPENCPU_MAIN_UART, pbuf, 64);
	  // opencpu_printf("get:%d\n",temp1);
	   opencpu_printf("%s",pbuf);
	   uart_cmd = pbuf[0];
   }
}

/*
  打印函数
*/
void opencpu_printf (const char *str, ...)
{

    static unsigned char s[600]; //This needs to be large enough to store the string TODO Change magic number
	int i,j;
	unsigned char *p;
    va_list args;
    int str_len;

    if ((str == NULL) || (strlen(str) == 0))
    {
        return;
    }
    va_start (args, str);
    str_len = (unsigned int)vsprintf ((char*)s, str, args);
    va_end (args);
    p =s;
	while(str_len > 0)
	{
		j = opencpu_uart_send(OPENCPU_MAIN_UART, p, str_len);
		p=p+j;
		str_len = str_len - j;
	}
}
void custom_uart_init(void)
{
	opencpu_uart_open(OPENCPU_MAIN_UART,HAL_UART_BAUDRATE_115200,user_uart_callback);
}
	