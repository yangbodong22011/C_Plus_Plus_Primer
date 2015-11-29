/*************************************************************************
	> File Name: 2.39.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 10:47:05 CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include"Sales_data.h"

int main(int argc,char *argv[])
{
    double signalprice;
    Sales_data book1,book2;
    std::cin >> book1.ISBN >> book1.number >> signalprice;
    book1.price = book1.number * signalprice;
    std::cin >> book2.ISBN >> book2.number >> signalprice;
    book2.price = book2.number * signalprice;
    if(book1.ISBN == book2.ISBN) {
        int totalnumber = book1.number + book2.number;
        double totalprice = book1.price + book2.price;
        double signalprice = totalprice/totalnumber;
        std::cout << book1.ISBN << " " << totalnumber << " "
            << totalprice << " " << signalprice << std::endl;   
    } else {
        std::cout << "Error!" <<std::endl;
    }


    return 0;
}
