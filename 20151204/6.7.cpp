/*************************************************************************
	> File Name: 6.7.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Fri 04 Dec 2015 09:10:46 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool lengthCompare(const std::string &s1,const std::string &s2)
{
    return s1.size()<s2.size()? true : false;
}


int main(int argc,char *argv[])
{
    bool (*fp)(const std::string &,const std::string &);
    fp = lengthCompare;
    bool a = fp("hello","hi");
    cout << a << endl;
    return 0;
}
