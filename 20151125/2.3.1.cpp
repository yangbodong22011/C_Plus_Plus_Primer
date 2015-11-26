/*************************************************************************
	> File Name: 2.3.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 25 Nov 2015 11:03:31 CST
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int ival = 1024;
    int &refval = ival;
    int &refval2 = ival;
    refval = 5;
    refval2 = 2;
    std::cout << "refval : " << refval << std::endl;
    std::cout << "ival : " << ival << std::endl;


    return 0;
}
