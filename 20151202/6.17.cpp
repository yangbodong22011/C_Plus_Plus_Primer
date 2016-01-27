/*************************************************************************
	> File Name: 6.17.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 16:41:06 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void is_upper(std::string &str)
{
    for(auto &u : str) {
        if(isupper(u)) {
            u = tolower(u);
        }
    }
}

int main(int argc,char *argv[])
{
    std::string str = "HELLO!";
    is_upper(str);
    cout << str << endl;
    return 0;
}
