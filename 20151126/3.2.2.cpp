/*************************************************************************
	> File Name: 3.2.2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 15:36:38 CST
 ************************************************************************/

#include<iostream>
#include <cstring>
#include<cstdio>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main(int argc,char *argv[])
{
    std::string s1;
    std::string s2;
    /*while(getline(cin,s1)) {
        if(!s1.empty()) {
            cout << s1 << endl;
        }
    }
    cout << "s1:" << s1 << endl;
    cout << "s1.empty():" << s1.empty() << endl;
    cout << "s1.zize:" << s1.size() << endl;
    cout << "s[5]:" << s1[5] << endl;
    cout << "s1+s2:" << s1+s2 << endl;
    int a = (s1==s2);
    if(a) {
        cout << a << endl;
    }*/
    cin >> s1;
    if(s1.size() < -1){
        cout << s1.size() << endl;
    }
    string s5 = s1 + "bodong" + "shitiancai";
    cout << s5 << endl;
    return 0;
}
