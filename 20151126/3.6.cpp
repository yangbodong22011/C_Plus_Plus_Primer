/*************************************************************************
	> File Name: 3.6.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 21:16:34 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    const std::string s = "keep out!";
    for(auto &a : s) {
    }
    /*std::string str = "hello,world,hi,nihao!!!";
    std::string answer;
    decltype(str.size()) i = 0;
    while(i < str.size()) {
        if(!ispunct(str[i])) {
            answer += str[i];
        }
        i++;
    }*/
    /*for(i;i < str.size();i++) {
        str[i] = 'X';
    }*/

    return 0;
}
