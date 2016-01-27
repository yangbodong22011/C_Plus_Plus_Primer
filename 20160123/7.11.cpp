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

struct Sales_data;
std::istream &read(std::istream&,Sales_data&);

struct Sales_data
{
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) { }
    Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n) { }
    Sales_data(std::istream &is) { read(is,*this); }
    Sales_data(): bookNo(0),revenue(0) { }
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data &);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream &read(std::istream &is,Sales_data &sal)
{
    double price = 0;
    is >> sal.bookNo >> sal.units_sold >> price;
    sal.revenue = price * sal.units_sold;
    return is;
}

std::ostream &print(std::ostream &os,const Sales_data &sal)
{
    os << sal.bookNo << " " << sal.units_sold << " " << sal.revenue;
    return os;
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

int main(int argc,char *argv[])
{
    /*Sales_data item;
    print(cout,item) << endl;

    Sales_data item2("yangbodong");
    print(cout,item2) << endl;

    Sales_data item3("yangbodong",2,2.3);
    print(cout,item3) << endl;

    Sales_data item4(cin);
    print(cout,item4) << endl;*/


    Sales_data total(cin); 
    if(!total.isbn().empty()) {
        Sales_data trans(cin);
        while(!trans.isbn().empty()) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout,total) << endl; 
                total = trans;
            }
        } 
        print(cout,total) << endl; 
    } else {
        std::cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
