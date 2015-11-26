/*************************************************************************
	> File Name: 2.18.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 25 Nov 2015 12:55:19 CST
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int a = 5,b = 10;
    int *p = &a;
    *p = 20;
    p = &b;
    std::cout << "a: " << a << std::endl;
    std::cout << "*p : "<< *p << std::endl;
    return 0;
}
