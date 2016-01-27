/*************************************************************************
	> File Name: 7.1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 23 Jan 2016 16:11:12 CST
 ************************************************************************/

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;

struct Sales_data
{
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n) {}
    Sales_data(std::istream &);
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data &);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream & read(std::istream &is,Sales_data &sal)
{
    double price = 0;
    is >> sal.bookNo >> sal.units_sold >> price;
    sal.revenue = price * sal.units_sold;
    return is;
}

Sales_data::Sales_data(std::istream &is)        //构造函数无返回值类型 
{
    read(is,*this);
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main(int argc,char *argv[])
{
 
    /*Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        } 
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    } else {
        std::cerr << "No data?!" << endl;
        return -1;
    }*/
    return 0;
}
