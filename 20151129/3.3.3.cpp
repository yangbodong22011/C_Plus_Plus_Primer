/*************************************************************************
	> File Name: 3.3.3.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 28 Nov 2015 09:42:46 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::vector<int> v3(10,42);
    for(auto u : v3) {
        cout << u << " ";
    }
    /*std::vector<int> v2(10);        //v2中有十个0
    for(auto u : v2) {
        cout << u << endl;
    }
    std::vector<int> v1;            //注意：此时的vector空的。
    cout << v1[0] << endl;          //这样输出当然会出现错误。

    std::vector<unsigned int> scores(11,0);
    unsigned int a;
    while(cin >> a) {
        scores[a/10]++;
    }
    for(auto c : scores) {
        cout << c << endl;
    }*/
    return 0;
}
