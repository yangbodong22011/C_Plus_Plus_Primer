/*************************************************************************
	> File Name: 4.21.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 16:26:13 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::string s = "word";
    std::string p1 = s + (s[s.size()-1] == 'd' ? "press" : "s");
    cout << p1 << endl;

    /*std::vector<int> v1 = {1,2,3,4,5,6,7,8,9};
    for(auto it = v1.begin();it != v1.end();++it) {
        if(*it%2 != 0) {
            *it = *it * *it;
        }
    }
    for(auto u : v1) {
        cout << u << " ";
    }*/
    cout << endl;
    return 0;
}
