/*************************************************************************
	> File Name: 6.54.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Fri 04 Dec 2015 09:45:07 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
int f(const int,const int); //f是函数类型
typedef decltype(f) fp;     //fp = f;

int func1(int a,int b)
{
    return a+b;
}
int func2(int a,int b)
{
    return a-b;
}
int func3(int a,int b)
{
    return a*b;
}
int func4(int a,int b)
{
    return a/b;
}

std::vector<fp*> v{func1,func2,func3,func4}; 
//定义容器,容器类型为fp*,即指向函数的指针，也就是函数名

int main(int argc,char *argv[])
{
    for(auto i = v.begin();i != v.end();i++) {
        cout << (*i)(2,2) << endl;
    }    
    return 0;
}
