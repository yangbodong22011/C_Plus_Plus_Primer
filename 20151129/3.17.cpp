/*************************************************************************
	> File Name: 3.17.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 28 Nov 2015 10:01:12 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::vector<int> v1;
    int a;
    while(cin >> a) {
        v1.push_back(a);
    }
    decltype(v1.size()) index1 = 0;
    decltype(v1.size()) index2 = v1.size()-1;
    if(v1.size()%2 == 0) {
        for(index1,index2;index1 < index2;index1++,index2--) {
            cout << v1[index1]+v1[index2] << endl;
        }
    }
    else {
        for(index1,index2;index1 < index2;index1++,index2--) {
            cout << v1[index1]+v1[index2] << endl;
        }
        cout << v1[index1] << endl;
    }

    /*std::vector<int> v1 = {42,42,42,42,42};
    std::vector<int> v2(5,42);
    std::vector<int> v3;
    for(int i = 0;i < 5;i++) {
        v3.push_back(42);
    }
    if(v2 == v2) {
        cout << "Right!" << endl;
    }*/

    /*std::vector<char> v1;
    char a;
    while(cin >> a) {
        v1.push_back(a);
    }
    decltype(v1.size()) index = 0;
    for(index;index < v1.size();index++) {
        v1[index] = toupper(v1[index]);
    }
    for(auto &u : v1) {
        u = toupper(u);
        cout << u << endl;
    }*/
    /*std::vector<std::string> str;
    std::string s;
    while(cin >> s) {
        str.push_back(s);
    }
    for(auto c : str) {
        for(auto &u : c) {
            u = toupper(u);
        } 
        cout << c << endl;
    }*/

    return 0;
}
