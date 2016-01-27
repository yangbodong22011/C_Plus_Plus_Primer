/*************************************************************************
	> File Name: 6.24.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 20:24:18 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void print(const int j[])
{
    for(size_t i = 0; i != 10;i++) {
        cout << *(j+i) << endl;
    }
}

int main(int argc,char *argv[])
{
    int j[100] = {5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
    print(j);
    return 0;
}

