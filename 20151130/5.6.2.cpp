/*************************************************************************
	> File Name: 5.6.2.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 21:21:43 CST
 ************************************************************************/

#include<iostream>
#include<stdexcept>
#include<cstdlib>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int a,b;
    while(cin >> a >> b) {
        try {
            if(a != b) {
                throw std::runtime_error("it's different!"); 
            }
            else {
                break;
            }
        }catch (std::runtime_error err) {
            cout << err.what() << "\nTry Again? y or n" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n') 
                break;
        }
    }
    return 0;
}
