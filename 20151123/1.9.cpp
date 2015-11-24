/*************************************************************************
	> File Name: 1.9.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Nov 2015 19:42:13 CST
 ************************************************************************/

#include<iostream>

int main()
{
    int i = 50;
    int sum = 0;
    while(i <= 100) {
        sum += i;
        std::cout << sum << std::endl;
        i++;
    }

    return 0;
}
