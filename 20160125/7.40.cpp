/*************************************************************************
	> File Name: 7.40.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 27 Jan 2016 19:04:55 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Employee;
std::istream &read(std::istream &,Employee &);
std::ostream &print(std::ostream &,const Employee &);

class Employee {
    friend std::istream &read(std::istream &is,Employee &);
    friend std::ostream &print(std::ostream &os,const Employee &);
public:
    Employee(const std::string &str,unsigned a,double p):name(str),age(a),pay(p) { }
    Employee():Employee("",0,0) { }
    Employee(std::istream &is) :Employee(){ read(is,*this); }

private:
    std::string name = "";  //姓名
    unsigned age = 0;       //年龄
    double pay = 0.0;       //月薪
};

std::istream &read(std::istream &is,Employee &e)
{
    is >> e.name >> e.age >> e.pay;
    return is;
}
std::ostream &print(std::ostream &os,const Employee &e)
{
    os << e.name << " " << e.age << " " << e.pay;
    return os;
}

int main(int argc,char *argv[])
{
    Employee e1;
    print(cout,e1) << endl;
    Employee e2("YangBodong",22,8600);
    print(cout,e2) << endl;
    Employee e3(cin);
    print(cout,e3) << endl;

    
    return 0;
}
