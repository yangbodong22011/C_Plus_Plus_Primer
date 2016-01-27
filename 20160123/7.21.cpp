/*************************************************************************
	> File Name: 7.21.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 25 Jan 2016 09:55:39 CST
 ************************************************************************/

#include<iostream>
#include"sales.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    Sales_data s1;
    print(cout,s1) << endl;
    Sales_data s2(cin);
    print(cout,s2) << endl;
    return 0;
}
