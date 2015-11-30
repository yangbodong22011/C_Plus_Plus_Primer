/*************************************************************************
	> File Name: 5.14.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 20:00:17 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::string s,snow,slast;
    int max = 0,slittle = 1,smax = 1;
    while(cin >> s) {
        if(s == slast) {
            ++slittle;   
        }
        else {
            if(slittle > smax) {
                smax = slittle;
                snow = slast;
                slittle = 1;
            }
        }
        slast = s;
    }
    if(slittle > smax) {
        smax = slittle;
        snow = slast;
    }
    if(smax > 1) {
        cout << snow << " occurs " << smax << " times " << endl;
    } else {
        cout << "Everything is different!" << endl;
    }
    return 0;
}
