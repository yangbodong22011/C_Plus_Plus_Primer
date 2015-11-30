/*************************************************************************
	> File Name: 5.18.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 20:39:42 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    do {
        int v1;
        if(cin >> v1) {
            cout << "sum id : " << v1 << endl;
        }
    }while(cin);
    return 0;
}
