/*************************************************************************
	> File Name: 6.3.2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 15:19:32 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

std::string::size_type find_times(std::string,char,int &);

std::string::size_type find_times(std::string str,char x,int &times)
{
    int index;
    int flag = 0;
    for(int i = 0;i != str.size();i++) {
        if(str[i] == x) {
            if(flag == 0) {
                index = i;
                flag = 1;
            }
            ++times;
        }
    }
    return index;
}


int main(int argc,char *argv[])
{
    std::string str = "yangbodong";
    int occurs = 0;
    auto index = find_times(str,'o',occurs);
    cout << 'o' << " occurs :" << occurs << " times first occurs :" << index  << endl;
    return 0;
}
