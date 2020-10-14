版本：N10SG-opencpu_sdk_v1.0.0_release
日期：2019\11\20
1.使用前请阅读N10SG OpenCPU 开发指导手册.pdf
2.用户函数在void opencpu_task_main()中添加，该函数作为一个任务运行，不能长时间阻塞，否则会死机
3.请参照src目录下各文件中示例代码进行开发，onenet功能请参照onenet_test.c及opencpu_onenet.h进行开发。
4.编译后会生成新的nbiot_m2m_demo.bin，运行flashtool工具，将程序下载到模组即可
5.请使用软件接口文档提供的接口函数及该文档明确指定的头文件包含的接口函数进行SDK开发，如使用除此以外的接口，不能保证软件稳定性。
6.本SDK可以在debian8下使用
