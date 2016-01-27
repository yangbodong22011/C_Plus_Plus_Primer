/*************************************************************************
	> File Name: 4.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 20 Jan 2016 10:34:24 CST
 ************************************************************************/

#include<iostream>
#include<thread>
#include<chrono>
#include<cstdio>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    cout << "hello " ;
    std::basic_ios<>::fflush(cout);
    std::this_thread::sleep_for (std::chrono::seconds(10));
    return 0;
}
