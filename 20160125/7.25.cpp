/*************************************************************************
	> File Name: 7.25.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 25 Jan 2016 16:52:56 CST
 ************************************************************************/

#include<iostream>
#include"Screen.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    Screen s1(4,5,'A');
    cout << s1.get() << endl;
    return 0;
}
