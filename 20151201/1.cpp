/*************************************************************************
	> File Name: 1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 01 Dec 2015 19:40:26 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::string s1;
    std::string s2;
    int i,j,k,smax = 0,w,v;
    int flag = 0;
    cin >> s1 >> s2;
    if(s1.size() < s2.size()) {
        std::string s = s2;
        s2 = s1;
        s1 = s;
    }
    for(i = 0;i < s2.size();i++) {
        if(s1[i] == s2[i]) {
            flag = 1;
        }
    }
    if(flag == 0) {
        cout << "0" << endl;
        return 0;
    }
    flag = 0;
    for(i = 0;i < s1.size();i++) {
        for(j = 0,k = i;j < s2.size();j++) {
            if(s1[k] == s2[j]) {
                k++;
                flag = 1;
                continue;
            }
            if((s1[k] != s2[j]) && (flag == 1)) {
                flag = 0;
                break;
            }
        }
        if((k-i) > smax) {
            smax = k-i;
        }
        if((k-i) > s2.size()) {
            cout << k-i << endl;
            return 0;
        }
    }
    cout << smax << endl;

    
    return 0;
}
