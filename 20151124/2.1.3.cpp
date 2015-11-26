/*************************************************************************
	> File Name: 2.1.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 24 Nov 2015 13:59:56 CST
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{

    std::cout << '\a' << std::endl;
    std::cout << '\7' << std::endl;
    std::cout << "this is a really " << '\n'
    << "  long string" << std::endl;
    std::cout << "hi!" << std::endl;
    std::cout << 0xC << std::endl;
    int month = 07,day = 7;
    std::cout << month << std::endl;

    return 0;
}
