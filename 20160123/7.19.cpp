/*************************************************************************
	> File Name: 7.19.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 25 Jan 2016 09:09:43 CST
 ************************************************************************/

#include<iostream>
#include"person.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    person p1(cin);
    cout << p1.get_name() << endl;
    print(cout,p1) << endl;
    return 0;
}
