/*************************************************************************
	> File Name: 4.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sun 24 Jan 2016 15:31:55 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

typedef std::string* pstring;

int main(int argc,char *argv[])
{
    std::string const *t1;
    const std::string *t2;
    std::string s;
    const pstring cstr1 = &s; 
}
