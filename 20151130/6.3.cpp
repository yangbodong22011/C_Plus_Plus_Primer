/*************************************************************************
	> File Name: 6.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 22:22:53 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int fact(int);

int fact(int a)
{
    int i = a;
    int b = 1;
    while(i != 1) {
        b *= i;
        i--;
    }
    return b;
}

int main(int argc,char *argv[])
{
    int a;
    cin >> a;
    cout << fact(a) << endl;
    return 0;
}
