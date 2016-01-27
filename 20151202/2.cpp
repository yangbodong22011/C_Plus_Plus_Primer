/*************************************************************************
	> File Name: 2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 03 Dec 2015 11:24:57 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void func(const std::string &s)
{
    cout << s << endl;
}

int main(int argc,char *argv[])
{
    const std::string s;
    func(s);

    return 0;
}
