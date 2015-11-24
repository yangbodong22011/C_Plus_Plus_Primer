/*************************************************************************
	> File Name: 1.23.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Nov 2015 21:16:40 CST
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currBook,book;
    //std::cin >> book;
    if(std::cin >> book) {
        int num = 1;
        while(std::cin >> currBook) {
            if(book.isbn() == currBook.isbn()) {
                num++;
            }
            else {
                std::cout << book << "    " << num << std::endl;
                book = currBook;
                num = 1;
            }
        }
        std::cout << book << "    " << num << std::endl;
    }
    return 0;
    
}
