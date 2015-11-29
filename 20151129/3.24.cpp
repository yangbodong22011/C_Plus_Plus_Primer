/*************************************************************************
	> File Name: 3.24.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sun 29 Nov 2015 10:14:18 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::vector<int> v1(11,0);
    int a;
    auto begin = v1.begin();
    while(cin >> a) {
        (*(begin+(a/10)))++;
    }
    for(auto u : v1) {
        cout << u << " "; 
    }



    return 0;
}
