/*************************************************************************
	> File Name: 4.9.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 15:23:05 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int d = 1,c = 2,b = 3,a = 4;
    if((a-b>0)&&(b-c>0)&&(c-d>0)) {
        cout << "you are so great" << endl;
    }

    /*const char *p = NULL;
    if(p && *p) {
        cout << "true" << endl;
    }*/
    return 0;
}
