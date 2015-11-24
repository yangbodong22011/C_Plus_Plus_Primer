/*************************************************************************
	> File Name: book.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Nov 2015 16:49:54 CST
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1,book2;
    std::cin >> book1 >> book2;
    std::cout << book1+book2 << std::endl;
    return 0;
}

