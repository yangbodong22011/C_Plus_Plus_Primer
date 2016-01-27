/*************************************************************************
	> File Name: 5.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 01 Dec 2015 22:14:00 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int min,max,num = 0;
    cin >> min >> max;
    if(min == 0) {
        num = num -2;
    }
    if(min == 1) {
        num = num - 1;
    }
    int flag = 1;
    for(int i = min;i < max;i++) {
        flag = 1;
        for(int n = 2; n*n <= i;n++) {
            if(i % n == 0) {
                flag = 0;
            }
        }
        if(flag == 1) {
            num++;
        }
    }
    cout << num << endl;
    return 0;
}
