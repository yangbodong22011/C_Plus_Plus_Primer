/*************************************************************************
	> File Name: 1.4.4.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Nov 2015 20:13:05 CST
 ************************************************************************/

#include<iostream>

int main()
{
    int currVal = 0;
    int val = 0;
    if(std::cin >> currVal) {
        int num = 1;
        while(std::cin >> val) {
            if(val == currVal) {
                num++;
            }
            else {
                std::cout << currVal << " occurs " << num << " times " << std::endl;
                currVal = val;
                num = 1;
            }
        }
        std::cout << currVal << " occurs " << num << " times " << std::endl;
    }
    return 0;
}
