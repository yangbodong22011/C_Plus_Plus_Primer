/*************************************************************************
	> File Name: 6.25.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 20:47:09 CST
 ************************************************************************/

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::string str;
    for(int i = 1;i != argc;i++) {
        str += std::string(argv[i]) + " ";
    }
    cout << str << endl;
    return 0;
}
