/*************************************************************************
	> File Name: 3.5.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sun 29 Nov 2015 10:51:28 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{ 
    int a[10];
    for(int i = 0;i < 10;i++) {
        a[i] = i;
    }
    for(auto u : a) {
        cout << u << " ";
    }
    cout << endl;
    int b[10];
    for(int i = 0;i < 10;i++) {
        b[i] = a[i];
    }
    for(auto u : b) {
        cout << u << " ";
    }
    cout << endl;
    std::vector<int> v1(10,0);
    for(auto u = v1.begin();u != v1.end();u++) {
        *u = (u-v1.begin());
    }
    for(auto u : v1) {
        cout << u << " ";
    }
    cout << endl;
    



    /*int buf = 5;
    int a[buf];
    for(auto u : a) {
        cout << u << endl;
    }*/
    
    /*int a;
    cin >> a;
    int b[a];
    for(auto &u:b) {
        u = 1;
    }
    for(auto u : b) {
        cout << u << endl;
    }*/
    return 0;
}
