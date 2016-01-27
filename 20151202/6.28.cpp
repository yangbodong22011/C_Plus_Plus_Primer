/*************************************************************************
	> File Name: 6.28.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 21:27:29 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int add(std::initializer_list<int> il)
{
    int sum = 0;
    for(auto beg = il.begin();beg != il.end();++beg) {
        sum += *beg;  
    }
    return sum;
}


int main(int argc,char *argv[])
{
    cout << add({1,2,3,4,5,6}) << endl;
    return 0;
}
