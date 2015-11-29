/*************************************************************************
	> File Name: 3.2.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 20:31:17 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::string str = "0123456789ABCDEF";
    std::string answer;
    std::string::size_type n;
    while(cin >> n) {
        answer += str[n];
    }
    cout << answer << endl;
    /*if(!str.empty()) {
        str[0] = toupper(str[0]);
    }
    cout << str << endl;
    for(auto &c : str) {
        c = toupper(c);
    }
    cout << str << endl;*/
    return 0;
}
