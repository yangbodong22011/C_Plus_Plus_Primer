/*************************************************************************
	> File Name: 4.29.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 16:58:39 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int x[10];
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;      // 40/4 = 10
    cout << sizeof(p)/sizeof(*p) << endl;      // 8/4 = 2

    return 0;
}
