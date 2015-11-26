/*************************************************************************
	> File Name: 2.4.2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 25 Nov 2015 19:05:57 CST
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int i = -1;
    int i2 = 6;
    int *p6;
    int *const p2 = &i2;
    const int &r = 0;
    const int* const p3 = &i2;
    p3 = p6;
    const int *ic;
    int *const p5 = &i;
    *p5 = i2;
    std::cout << *p5 << std::endl;
    //*p3 = 2;
    //p3 = &i;



    /*const double pi = 3.14;
    //const int * a = &errnumber;
    const double *p = &pi;
    std::cout << *p << std::endl;
    double a = 2.2;
    p = &a;
    
    std::cout << *p << std::endl;
    //int *b = &errnumber;*/
    return 0;
}
