/*************************************************************************
	> File Name: screen.h
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 25 Jan 2016 14:51:08 CST
 ************************************************************************/

#ifndef _SCREEN_H
#define _SCREEN_H

#include<iostream>
#include<string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c) { }
    char get() const { return contents[cursor]}
    char get(pos ht,pos wd) const;
    Screen &move(pos r,pos s);
private:
    pos cursor = 0;   //光标的位置
    pos height = 0;   //高度
    pos width = 0;    //宽度
    std::string contents; //文本内容
};

inline Screen &Screen::move(pos r,pos s)
{
    pos row = r*width;
    cursor = row + s;
    return *this;
}
inline char Screen::get(pos r,pos c) const
{
    pos row = r * width;
    return contents[row+c];
}


#endif
