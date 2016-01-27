/*************************************************************************
	> File Name: 6.10.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 15:00:53 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;


void change(int &p,int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}

int main(int argc,char *argv[])
{
    int a = 5,b = 10;
    //int &c = a,&d = b;
    change(a,b);
    cout << a << " " << b << endl;
    return 0;
}
