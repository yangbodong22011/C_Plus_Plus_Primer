/*************************************************************************
	> File Name: 1.4.3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Nov 2015 20:00:32 CST
 ************************************************************************/

#include<iostream>

int main()
{
    int sum = 0;
    int value = 0;
    std::cout << "输入数据，输入-1结束程序:";
    std::cin >> value;
    while(value != -1) {
        sum += value;
        std::cin >> value;
    }
    std::cout << "sum is:" << sum << std::endl;

    return 0;
}
