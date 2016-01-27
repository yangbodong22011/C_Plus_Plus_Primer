/*************************************************************************
	> File Name: 4.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 21 Jan 2016 18:19:31 CST
 ************************************************************************/

#include<iostream>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;

std::string doubletostr(double val)
{
    std::ostringstream oss;
    oss << val;
    return oss.str();
}

int main(int argc,char *argv[])
{
    double val = 55.55;

    std::string str = doubletostr(val);
    cout << str << endl;

    return 0;
}
