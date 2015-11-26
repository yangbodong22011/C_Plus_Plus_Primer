/*************************************************************************
	> File Name: 2.16.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 25 Nov 2015 11:21:50 CST
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int i = 0,&r1 = i;
    double d = 0,&r2 = d;
    r2 = 3.14;     //相当于直接给一个double类型的元素赋值
    std::cout << d << std::endl;
    //r2 = r1;       //相当于将0给double元素
    //std::cout << d << std::endl;
    //i = r2;        //把0给int类型的元素。
    //std::cout << d << std::endl;
    r1 = d;        //把double给int,会丢失部分精度。
    std::cout << r1 << std::endl;
    return 0;
}
