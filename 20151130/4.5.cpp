/*************************************************************************
	> File Name: 4.5.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 15:49:49 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::vector<std::string> s = {"hello world!"};
    auto beg = s.begin();
    if(!(*beg).empty()) {
        cout << "hi" << endl;
    }


    /*for(auto it = s.begin();(it != s.end()) && !isspace(*it);it++) {
        *it = toupper(*it);
    }*/
    return 0;
}
