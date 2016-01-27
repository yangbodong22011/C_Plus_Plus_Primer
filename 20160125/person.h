/*************************************************************************
	> File Name: person.h
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sat 23 Jan 2016 16:43:15 CST
 ************************************************************************/

#ifndef _PERSON_H
#define _PERSON_H

#include<string>
#include<iostream>

struct person;
std::istream &read(std::istream &,person &);
std::ostream &print(std::ostream &,const person &);

struct person {
    friend std::istream &read(std::istream &,person &);
    friend std::ostream &print(std::ostream &,const person &);

public:
    std::string const& get_name() const { return name; }
    std::string const& get_addr() const { return address; }
    person() = default;
    person(const std::string &s,const std::string &p): name(s),address(p) { }
    explicit person(std::istream &is) { read(is,*this); }
private:
    std::string name;
    std::string address;
};

std::istream &read(std::istream &is,person &per)
{
    return is >> per.name >> per.address;
}

std::ostream &print(std::ostream &os,const person &per)
{
    return os << per.name << " " << per.address;
}


#endif



