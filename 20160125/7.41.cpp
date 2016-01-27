/*************************************************************************
	> File Name: 7.41.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 28 Jan 2016 00:15:56 CST
 ************************************************************************/

#include<iostream>
#include"sales1.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    Sales_data s1;
    print(cout,s1) << endl;
    Sales_data s2("YangBodong",23,43);
    print(cout,s2) << endl;
    Sales_data s3("YangBodong");
    print(cout,s3) << endl;
    Sales_data s4(cin);
    print(cout,s4) << endl;
    return 0;
}
