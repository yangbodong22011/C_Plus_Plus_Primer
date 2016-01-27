/*************************************************************************
	> File Name: 6.2.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 16:14:34 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int func(double a)
{
    return a;
}

int func(const int a)
{
    return a;
}


int main(int argc,char *argv[])
{
    int i = 42;
    const int a = i;
    return 0;
}
