/*************************************************************************
	> File Name: 4.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 01 Dec 2015 22:07:46 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int n;
    cin >> n;
    if(n == 0) {
        cout << "1" << endl;
        return 0;
    }
    int sum = 1;
    for(int i = n;i != 0;i--) {
        sum *= i;
    }
    cout << sum << endl;

    return 0;
}
