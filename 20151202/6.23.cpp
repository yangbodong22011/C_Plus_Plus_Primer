/*************************************************************************
	> File Name: 6.23.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 19:52:14 CST
 ************************************************************************/

#include<iostream>
#include<iterator>
using std::cout;
using std::cin;
using std::endl;

void print(int i)
{
    cout << i << endl;
}
void print(int *j)
{
    while(*j) {              //可不要被这段代码迷惑掉啊！*j 为0的时候才会退出，注意下面数组的大小.
        cout << *j++ << endl;
    }
}


int main(int argc,char *argv[])
{
    int i = 0;
    int j[2] = {3,2};
    //auto n = std::end(j) - std::begin(j);
    //cout << n << endl;
    //print(i);
    print(j);



    return 0;
}
