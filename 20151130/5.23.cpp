/*************************************************************************
	> File Name: 5.23.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 30 Nov 2015 21:39:46 CST
 ************************************************************************/

#include<iostream>
#include<stdexcept>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    int a,b,c;
    while(cin >> a >> b) {
        try{
            if(b == 0) {
                throw std::runtime_error("除数是0!");
            }
            else {
                cout << a/b << endl;
                break;
            }
        } catch (std::runtime_error err) {
            cout << err.what() << "Again?(y/n):" <<endl;
            char c;
            cin >> c;
            if(!c || c == 'n') {
                break;
            }
        }
    }
    return 0;
}
