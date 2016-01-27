/*************************************************************************
	> File Name: 6.16.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 16:37:26 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool is_empty(const std::string &s) 
{
    return s.empty();
}

int main(int argc,char *argv[])
{
    const std::string s = "hello";
    cout << is_empty(s) << endl;
    
    return 0;
}
