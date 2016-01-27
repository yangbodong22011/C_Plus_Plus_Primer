/*************************************************************************
	> File Name: 3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sun 24 Jan 2016 10:05:32 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int a = 5;
    int b = 6;
    const int &r1 = a;
    r1 = b;
    cout << a << endl;
    return 0;
}
