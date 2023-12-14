/*  Copyright (s) 2023 深圳百问网科技有限公司
 *  All rights reserved
 *
 * 文件名称：driver_mpu6050.c
 * 摘要：
 *
 * 修改历史     版本号        Author       修改内容
 *--------------------------------------------------
 * 2023.08.03      v01         百问科技      创建文件
 *--------------------------------------------------
 */

#ifndef __DRIVER_MPU6050_H
#define __DRIVER_MPU6050_H

#include <stdint.h>
#include "typedefs.h"

QueueHandle_t GetMPU6050QueueHandle(void);

/**********************************************************************
 * 函数名称： MPU6050_Init
 * 功能描述： MPU6050初始化函数,
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 0 - 成功, 其他值 - 失败
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2023/08/03	     V1.0	  韦东山	      创建
 ***********************************************************************/
int MPU6050_Init(void);

/**********************************************************************
 * 函数名称： MPU6050_GetID
 * 功能描述： 读取MPU6050 ID
 * 输入参数： 无
 * 输出参数： 无
 * 返 回 值： 01 - 失败, 其他值 - ID
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2023/08/03	     V1.0	  韦东山	      创建
 ***********************************************************************/
int MPU6050_GetID(void);

/**********************************************************************
 * 函数名称： MPU6050_ParseData
 * 功能描述： 解析MPU6050数据
 * 输入参数： AccX/AccY/AccZ/GyroX/GyroY/GyroZ
 *            X/Y/Z轴的加速度,X/Y/Z轴的角速度
 * 输出参数： result - 用来保存计算出的结果,目前仅支持X方向的角度
 * 返 回 值： 无
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2023/09/05	     V1.0	  韦东山	      创建
 ***********************************************************************/
void MPU6050_ParseData(int16_t AccX, int16_t AccY, int16_t AccZ, int16_t GyroX, int16_t GyroY, int16_t GyroZ, MPU6050RecvData *result);

/**********************************************************************
 * 函数名称： MPU6050_ReadData
 * 功能描述： 读取MPU6050数据
 * 输入参数： 无
 * 输出参数： pAccX/pAccY/pAccZ         - 用来保存X/Y/Z轴的加速度
 *            pGyroX/pGyroY/pGyroZ - 用来保存X/Y/Z轴的角速度
 * 返 回 值： 0 - 成功, 其他值 - 失败
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2023/08/03	     V1.0	  韦东山	      创建
 ***********************************************************************/
int MPU6050_ReadData(int16_t *pAccX, int16_t *pAccY, int16_t *pAccZ, int16_t *pGyroX, int16_t *pGyroY, int16_t *pGyroZ);

/**********************************************************************
 * 函数名称： MPU6050_Test
 * 功能描述： MPU6050测试程序
 * 输入参数： 无
 * 输出参数： 无
 *            无
 * 返 回 值： 0 - 成功, 其他值 - 失败
 * 修改日期        版本号     修改人	      修改内容
 * -----------------------------------------------
 * 2023/08/03	     V1.0	  韦东山	      创建
 ***********************************************************************/
void MPU6050_Test(void);

#endif /* __DRIVER_OLED_H */
