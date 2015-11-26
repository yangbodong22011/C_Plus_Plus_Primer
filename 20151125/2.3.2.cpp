/*************************************************************************
	> File Name: 2.3.2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 25 Nov 2015 11:40:51 CST
 ************************************************************************/

#include<iostream>
#include<cstdlib>
int main(int argc,char *argv[])
{
    int i = 10;
    int *p = nullptr;
    *p = 20;
    std::cout << *p << std::endl;
    return 0;
}
