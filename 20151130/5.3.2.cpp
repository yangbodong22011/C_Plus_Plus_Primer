/*************************************************************************
	> File Name: 5.3.2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 19:39:30 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    char n;
    cin >> n;
    switch(n) {
        case '1': {
            cout << "1" << endl;
        }
        case '2': {
            cout << "2" << endl;
        }
        case '3': {
            cout << "3" << endl;
        }
        case '4':{
            cout << "4" << endl;
            break;
        }
    }
    return 0;
}
