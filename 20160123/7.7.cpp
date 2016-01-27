/*************************************************************************
	> File Name: 7.7.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 23 Jan 2016 18:25:44 CST
 ************************************************************************/

#include<iostream>
#include"sales.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    Sales_data total;
    if(read(cin,total)) {
        Sales_data item;
        while(read(cin,item)) {
            if(total.isbn() == item.isbn()) {
                total.combine(item);
            } else {
                print(cout,total) << endl;
                total = item;
            }
        }
        print(cout,total) << endl; 
    } else {
        std::cerr << "No data!?" << endl;
        return -1;
    }
    return 0;
}
