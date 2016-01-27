/*************************************************************************
	> File Name: 6.3.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 03 Dec 2015 09:12:07 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool str_subrange(const std::string &str1,const std::string &str2)
{
    if(str1.size() == str2.size()) {
        return str1 == str2;
    }
    auto size = (str1.size() < str2.size())? str1.size() : str2.size();
    for(decltype(size) i = 0;i != size;++i) {
        if(str1[i] != str2[i]) {
            return 0;
        }
    }
}


int main(int argc,char *argv[])
{
    std::string s1 = "hello";
    std::string s2 = "hello";
    cout << str_subrange(s1,s2) << endl;
    return 0;
}
