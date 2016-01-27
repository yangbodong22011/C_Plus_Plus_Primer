/*************************************************************************
	> File Name: 6.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 20 Jan 2016 18:57:41 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    cout.put('H');
    char buf[] = "test!!!";
    cout.write(buf,5);
    return 0;
}
