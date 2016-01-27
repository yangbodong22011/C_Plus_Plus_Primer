/*************************************************************************
	> File Name: 1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 22:01:40 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int *func()
{
    int i = 10;
    cout << &i << endl;
    int *p = &i;
    return p;
}


int main(int argc,char *argv[])
{
    int *p;
    int i;
    cout << &i << endl;
    p = func();
    //cout << *p << endl;
    cout << p << endl;

    return 0;
}
