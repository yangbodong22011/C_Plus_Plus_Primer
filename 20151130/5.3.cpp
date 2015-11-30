/*************************************************************************
	> File Name: 5.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 19:25:40 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int sum = 0,val = 1;
    while(val <= 10) 
        sum += val,
        ++val;
    cout << sum << endl;
    return 0;
}
