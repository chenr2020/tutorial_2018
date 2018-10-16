
/***********************************************************************
*
*  
*
*  @file       compare_pic.h
*  @brief      比较矩形在图像中的横坐标大小
*
*
*  @author     马飞鹏
*  @email      767102280@qq.com
*  @version    1.0.0
*  @date       2018/10/14
*
*
*  ------------------------------------------------------------
*  修改历史：
*  ------------------------------------------------------------
*  <日期>    |  <版本> |  <作者>  |  <描述>
*  ------------------------------------------------------------
*  2018/10/14 |  1.0.0  |  马飞鹏  | 创建文件
*  ------------------------------------------------------------
*/

#ifndef _COMPARE_PIC_H
#define _COMPARE_PIC_H
#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<vector>
using namespace cv;
using namespace std;
bool cmp(const Rect& a,const Rect &b);


#endif
