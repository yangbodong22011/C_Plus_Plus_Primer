/*************************************************************************
	> File Name: 7.5.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 28 Jan 2016 00:42:05 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class NoDefault {
public:
    NoDefault(int a):age(a){ }
private:
    int age;
};

class C {
public:
    C():my_mem(0) { }
private:
    NoDefault my_mem;
};



int main(int argc,char *argv[])
{

    return 0;
}
