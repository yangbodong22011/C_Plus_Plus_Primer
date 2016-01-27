/*************************************************************************
	> File Name: 6.19.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 19:18:02 CST
 ************************************************************************/

#include<iostream>
#include<iterator>
using std::cout;
using std::cin;
using std::endl;

void print(const char * mybeg,const char * myend)
{
    while(mybeg != myend) {
        cout << *mybeg++ << endl;
    }
}

int main(int argc,char *argv[])
{
    char a[5] = {'a','b','c','d','e'};
    auto mybeg = std::begin(a);
    auto myend = std::end(a);
    print(mybeg,myend);
    return 0;
}
