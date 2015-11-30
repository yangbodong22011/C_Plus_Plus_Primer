/*************************************************************************
	> File Name: 4.11.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 17:45:37 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int  b = 5;
    cout << &b << endl;
    void *p = &b;
    double *dp = static_cast<double*>(p);
    cout << dp << endl;
    return 0;
}
