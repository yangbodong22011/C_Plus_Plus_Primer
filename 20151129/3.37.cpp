/*************************************************************************
	> File Name: 3.37.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sun 29 Nov 2015 14:06:38 CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using int_array = int(*)[4];
int main(int argc,char *argv[])
{
    int ia[3][4] = {0};
    int i = 0,j = 0,t = 0;
    for(i = 0;i != 3;i++) {
        for(j = 0;j != 4;j++) {
            ia[i][j] = i*4+j;
        }
    }
    for(i = 0;i != 3;i++) {
        for(j = 0;j != 4;j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    //int_array p  = ia;                         //这一行实际上是3行中每行的首地址
    for(auto p = ia;p != ia+3;p++) {
        for(int *q = *p;q != *p+4;q++) {
            cout << *q << " ";
            cout << q << " ";
        }
        cout << endl;
    }
    
    /*for(int_array &row : ia) {
        for(int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }*/


    /*for(auto &row : a) {
        for(auto &col : row) {
            col = i++; 
        }
    }
    for(auto &row : a) {
        for(auto &col : row) {
            cout << col << " ";
        }
        cout << endl;
    }*/
    /*for(i = 0;i != 3;i++) {
        for(j = 0;j != 4;j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }*/



    /*char s[] = {'1','2','3','4','5','6','7','8'};
    char a[10] = {0};
    int i = 0;
    std::vector<int> v1(std::begin(s),std::end(s));
    for(i;i != v1.size();i++) {
        a[i] = v1[i];
    }
    auto b = v1.begin();
    for(i,b;b != v1.end();i++,b++) {
        a[i] = *b;
    }
    for(auto u : a) {
        cout << u << endl;
    }*/


    /*char s[] = "yang";
    char t[] = "bodong";
    char a[100] = {0};
    strcpy(a,s);
    strcat(a," ");
    strcat(a,t);
    cout << a << endl;*/

    /*std::string s1 = "hi";
    std::string s2 = "hi";
    if(s1 == s2) {
        cout << "equal" << endl;
    }*/
    /*char *s = "yang";
    char *t = "yanh";
    int ret = strcmp(s,t);
    if(ret == 0) {
        cout << "equal" << endl;
    }*/

    /*const char ca[] = {'h','e','l','l','o'};
    const char *cp = ca;
    while(*cp) {
        cout << *cp << endl;
        ++cp;
    }
    cout << "this is:" << *cp << "stop" << endl;*/
    return 0;
}
