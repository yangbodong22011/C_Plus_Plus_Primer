/*************************************************************************
	> File Name: 1.11.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Nov 2015 19:48:30 CST
 ************************************************************************/

#include<iostream>

int main()
{
    int i,j;
    std::cout << "please input two integer :";
    std::cin >> i >> j;
    i = i<j?i:j;
    while(i <= j) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
}

