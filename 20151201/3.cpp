/*************************************************************************
	> File Name: 3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 01 Dec 2015 21:56:13 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int floor;
    cin >> floor;
    for(int i = 0;i < floor;i++) {
        for(int k = floor-i-1;k!=0;k--) {
            cout << " ";
        }
        cout << "/";
        for(int j = 0;j < 2*i;j++) {
            cout << "_";
        }
        cout << "\\";
        for(int k = floor-i-1;k!=0;k--) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
