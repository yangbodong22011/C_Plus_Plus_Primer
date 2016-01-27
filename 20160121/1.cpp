/*************************************************************************
	> File Name: 1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 21 Jan 2016 14:07:16 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int *p = NULL;
    int b = 20;
    p = &b;
    cout << *p << endl;
    return 0;
}
