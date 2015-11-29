/*************************************************************************
	> File Name: 3.35.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sun 29 Nov 2015 12:03:03 CST
 ************************************************************************/

#include<iostream>
#include<iterator>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int a[5] = {1,2,3,4,5};
    int *p = std::end(a);
    for(auto c = a;c != p;c++) {
        *c = 0;
    }
    for(auto u : a) {
        cout << u <<endl;
    }
    return 0;
}
