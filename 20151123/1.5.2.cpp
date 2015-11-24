/*************************************************************************
	> File Name: 1.5.2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Nov 2015 21:06:40 CST
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book1,book2;
    std::cin >> book1 >> book2;
    if(book1.isbn() == book2.isbn()) {
        std::cout << book1+book2 << std::endl;
        return 0;
    }
    else {
        std::cerr << "Error" << std::endl;
        return -1;
    }
}
