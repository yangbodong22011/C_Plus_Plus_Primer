/*************************************************************************
	> File Name: 3.2.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 17:33:49 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::string s1;
    std::string s2;
    cin >> s1 >> s2;
    if(s1.size() == s2.size()) {
        cout << "相等" << endl;
    } else if (s1.size() > s2.size()) {
        cout << "s1大" << s1 << endl;
    } else {
        cout << "s2大" << s2 << endl;
    }

    return 0;
}
