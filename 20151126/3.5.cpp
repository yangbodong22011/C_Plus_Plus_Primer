/*************************************************************************
	> File Name: 3.5.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 17:42:38 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::string s1;
    std::string s2;
    for(s1;cin >> s1;s2 += (s2.empty()?"":" ")+s1);
    cout << s2 << " ";
    return 0;
}
