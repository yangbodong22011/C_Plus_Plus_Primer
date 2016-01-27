/*************************************************************************
	> File Name: 7.27.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 27 Jan 2016 12:34:02 CST
 ************************************************************************/

#include<iostream>
#include"Screen1.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(cout);
    cout << '\n';
    myScreen.display(cout);
    cout << '\n';
    return 0;
}
