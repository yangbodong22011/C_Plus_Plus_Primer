/*************************************************************************
	> File Name: Sales_data.h
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 11:35:07 CST
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H


#include<iostream>
#include<string.h>

struct Sales_data {
    std::string ISBN;
    double price = 0.0;
    int number = 0;
};
#endif
