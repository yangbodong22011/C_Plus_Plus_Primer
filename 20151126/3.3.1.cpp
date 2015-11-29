/*************************************************************************
	> File Name: 3.3.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 26 Nov 2015 22:09:24 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::vector<std::string> v1;
    std::string s1;
    while(cin >> s1) {
        v1.push_back(s1);
    }
    decltype(v1.size()) i = v1.size()-1;
    while(i != -1) {
        cout << v1[i] <<;
        i--;
    }
    /*std::vector<std::string> v2 = {"fdsa","fdas","dfas"};
    std::vector<std::string> v3(10,"hi");
    std::vector<std::vector<int>> ivec;*/
    return 0;
}
