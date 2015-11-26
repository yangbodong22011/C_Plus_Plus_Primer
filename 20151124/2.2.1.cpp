/*************************************************************************
	> File Name: 2.2.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 24 Nov 2015 17:51:03 CST
 ************************************************************************/

#include<iostream>
void del()
{
    int f;
    std::cout << "f:"<<f << std::endl;
    
}

void add()
{
    int c;
    std::cout << "c: "<< c << std::endl;
    del();
}
int main(int argc,char *argv[])
{
    int a;
    int b;
    //std::cout << "a: "<< a << std::endl;
    //std::cout << "b: "<< b << std::endl;
    add();
    return 0;
}
