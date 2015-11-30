/*************************************************************************
	> File Name: 6.1.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 22:36:19 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int func()
{
    static int a = 0;
    return ++a;
}


int main(int argc,char *argv[])
{
    for(int i = 0;i != 10;i++) {
        cout << func() << endl;
    }
    return 0;
}
