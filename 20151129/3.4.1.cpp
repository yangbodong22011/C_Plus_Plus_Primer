/*************************************************************************
	> File Name: 3.4.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 28 Nov 2015 10:58:52 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::vector<int> v1(10,100);
    for(auto s = v1.begin();s != v1.end();s++) {
        *s  = *s + 1;
        cout << *s << endl;
    }

    /*const std::string s = "hello world!";
    for(std::string::const_iterator it = s.begin(); it != s.end();it++) {
        cout << *it << endl;
    }*/
    /*if(s.begin() != s.end()) {
        auto u = s.begin();       //用begin已经说明
        cout << sizeof(u) <<endl;
        *u = toupper(*u);
    }*/
    //cout << s << endl;
    return 0;
}
