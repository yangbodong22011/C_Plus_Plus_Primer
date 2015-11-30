/*************************************************************************
	> File Name: 5.9.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 19:53:38 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    char a;
    int acount = 0,bcount = 0;
    while(cin >> a) {
        if(a == 'a') {
            ++acount;
        }
        if(a == 'b') {
            ++bcount;
        }
    }
    cout << "a:" << acount << endl;
    cout << "b:" << bcount << endl;
    return 0;
}
