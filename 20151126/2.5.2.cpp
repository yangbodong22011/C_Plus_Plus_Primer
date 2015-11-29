/*************************************************************************
	> File Name: 2.5.2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 09:45:32 CST
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int i = 1;
    double j = 1.2;
    //const int ci = i, &cr = ci;
    auto b = i + j;
    //auto c = cr;
    std::cout << b << std::endl;
    //std::cout << c << std::endl;
    


    /*int a = 1;
    int b = 2;
    auto c = a+b;
    auto i = 0;
    auto p = &i;
    std::cout << c << std::endl;*/
    return 0;
}
