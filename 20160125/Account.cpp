/*************************************************************************
	> File Name: Account.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 28 Jan 2016 01:57:11 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Account {
public:
    void calculate() {amount += amount * interestRate;}
    static double rate() { return interestRate++;}
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
};

int main(int argc,char *argv[])
{
    Account a;
    cout << a.rate() << endl;

    return 0;
}
