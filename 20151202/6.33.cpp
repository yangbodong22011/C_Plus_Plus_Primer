/*************************************************************************
	> File Name: 6.33.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 03 Dec 2015 09:33:34 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int fun(int a)
{
    cout << "a:" << a << endl;
    if(a != 0) {
        return fun(a--) * a;
    }
    return 1;
}

int &get(int *arry,int index) 
{
    return arry[index];
}

//void print(std::vector<int>::iterator begin,std::vector<int>::iterator end)
void print(std::vector<int>::const_iterator begin,std::vector<int>::const_iterator end)
{
    if(begin != end) {
        cout << *begin << endl;
        print(++begin,end);
    }
    return ;
}

int main(int argc,char *argv[])
{
    cout << fun(3) << endl;
    /*int ia[10];
    for(int i = 0;i != 10;i++) {
        get(ia,i) = i;
    }
    for(auto u : ia) {
        cout << u << endl;
    }*/
    /*std::vector<int> v1 = {1,2,3,4,5,6,7};
    print(v1.cbegin(),v1.cend());*/
    return 0;
 }
