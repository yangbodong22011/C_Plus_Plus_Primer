/*************************************************************************
	> File Name: 2.4.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 25 Nov 2015 20:23:56 CST
 ************************************************************************/

#include<iostream>
int j = 0;
constexpr int i = 42;
int main(int argc,char *argv[])
{
    //int *p = nullptr;
    constexpr  int *p = &j;
    *p = 2;
    std::cout << *p << std::endl;

    /*constexpr int mf = 20;
    constexpr int limit = mf+1;*/
    /*const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1;*/
    return 0;
}
