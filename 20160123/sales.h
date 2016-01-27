/*************************************************************************
	> File Name: test.h
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 23 Jan 2016 17:22:33 CST
 ************************************************************************/

#ifndef _SALES_H
#define _SALES_H

#include<string>
#include<iostream>

class Sales_data;
std::istream &read(std::istream &,Sales_data &);
std::ostream &print(std::ostream &,const Sales_data &);
Sales_data add(const Sales_data &,const Sales_data &);
class Sales_data {
    friend std::istream &read(std::istream &,Sales_data &);
    friend std::ostream &print(std::ostream &,const Sales_data &);
    friend Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
public:
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s) { }
    Sales_data(const std::string &s,unsigned p,double d):bookNo(s),units_sold(p),revenue(d*p) { }
    Sales_data(std::istream &is) {read(is,*this);}
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& sal) 
{
    units_sold += sal.units_sold;
    revenue += sal.revenue;
    return *this;
}

std::istream &read(std::istream &is,Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
std::ostream &print(std::ostream &os,const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}


#endif
