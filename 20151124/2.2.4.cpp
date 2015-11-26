/*************************************************************************
	> File Name: 2.2.4.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 24 Nov 2015 20:20:50 CST
 ************************************************************************/

#include<iostream>

int a = 5;
int main(int argc,char *argv[])
{
    int b = 10;
    std::cout << a << b << std::endl;
    int a = 10;
    std::cout << a << b << std::endl;
    
    std::cout << ::a << b << std::endl;
    
    return 0;
}
