/*************************************************************************
	> File Name: 2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 21 Jan 2016 14:24:09 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    /*int n;
    char ch;
    cin >> n >> ch;
    cout << "n = "<< n << " " << "ch = "<< ch << endl;
    
    n = cin.get();
    cout << n << endl;*/
    /*char ch1,ch2;
    cin.get(ch1).get(ch2);
    cout << ch1 << " " << ch2 << endl;*/
    
    //char string[256];
    //std::string string;
    //std::getline(cin,name);
    //cin.getline(string,256);
    //cin >> string;
    
    /*char buf[10];
    cin.read(buf,20);
    cout << buf << endl;*/
    char c[10],c2,c3;
    c2 = cin.get();
    c3 = cin.get();
    //cin.putback(c2);
    cin.getline(&c[0],10);
    cout << c << endl;


    return 0;
}
