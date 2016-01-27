/*************************************************************************
	> File Name: 6.27.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 21:11:08 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/*void error_msg(std::initializer_list<std::string> il)   //怎么说，它就相当于一个容器，或者模板，不对。怎么理解模板呢，或者说什么是模板
{                                                       //容器吧，它也是具有相同属性元素的集合
    for(auto beg = il.begin();beg != il.end();++beg) {
        cout << *beg << endl;
    }
    cout << endl;
}*/
class ErrorCode {
    
};
void error_msg(ErrorCode e,std::initializer_list<std::string> il)
{
    
}


int main(int argc,char *argv[])
{
    std::string s1 = "hello";
    std::string s2 = "hell";
    if(s1 == s2) {
        error_msg({"function",s1,s2});  //({这里是参数列表})
    } else {
        error_msg({"function","ok"});
    }
    return 0;
}
