/*************************************************************************
	> File Name: 2.5.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 25 Nov 2015 22:10:51 CST
 ************************************************************************/

#include<iostream>

typedef char * pstring;

int main(int argc,char *argv[])
{
    char b = 'a';
    char *a = &b;
    const pstring cstr = a;
    const char *s  = &b;
    std::cout << *cstr << std::endl;
    std::cout << s << std::endl;



    return 0;
}
