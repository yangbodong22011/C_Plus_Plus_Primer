/*************************************************************************
	> File Name: 2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 23 Jan 2016 09:59:18 CST
 ************************************************************************/

#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

int f(const int ,const int);
typedef decltype(f) fp;

int func1(int a,int b) { return a+b;}
int func2(int a,int b) { return a-b;}

std::vector<fp*> v{func1,func2};

int main(int argc,char *argv[])
{
    for(auto i = v.begin();i != v.end();++i) {
        cout << (*i)(2,2) << endl;
    }
    
    return 0;
}
