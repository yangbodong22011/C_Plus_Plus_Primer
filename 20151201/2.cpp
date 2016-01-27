/*************************************************************************
	> File Name: 2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Tue 01 Dec 2015 21:46:13 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int n;
    cin >> n;
    std::vector<int> v1(20,0);
    for(int i = 0;i < n;i++) {
        int a;
        cin >> a;
        v1[a]++;
    }
    for(int i = 0;i != v1.size();i++) {
        for(int j = 0;j < v1[i];j++) {
            cout << i << endl;
        }
    }
    return 0;
}
