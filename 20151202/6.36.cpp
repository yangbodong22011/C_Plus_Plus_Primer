/*************************************************************************
	> File Name: 6.36.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 03 Dec 2015 21:19:47 CST
 ************************************************************************/

#include<iostream>

typedef int T[10];
//using ArrT = std::string[10];
ArrT& func(ArrT& arr)
{

}

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    T t;
    for(auto u : t) {
        cout << u << endl;
    }
    return 0;
}
