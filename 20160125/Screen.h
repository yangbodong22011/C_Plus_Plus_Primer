/*************************************************************************
	> File Name: Screen.h
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Mon 25 Jan 2016 16:39:06 CST
 ************************************************************************/

#ifndef _SCREEN_H
#define _SCREEN_H

#include<iostream>
#include<string>

class Screen;
class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;

    inline void clear(ScreenIndex i){ Screen &s = screens[i]; s.contents = std::string(s.height*s.width,' ');};
private:
    std::vector<vector> screens;
};

class Screen {
    friend void Window_mgr::clear(ScreenIndex);
public:
    using pos =  std::string::size_type;

    Screen() = default;
    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' ') { }
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c) { }

    inline char get() const { return contents[cursor]; }
    inline char get(pos r,pos c) const { return contents[r*width+c]; }
    inline Screen &move(pos r,pos s);
    inline Screen &set(char);
    inline Screen &set(pos,pos,char);

    Screen &display(std::ostream &os) { 
        do_display(os); 
        return *this;
    }
    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }
private:
    void do_display(std::ostream &os) const {
        os << contents;
    }

private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string contents;
};

inline
Screen &Screen::move(pos r,pos s)
{
    pos row = r*width;
    cursor = row + s;
    return *this;
}
inline
Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
inline 
Screen &Screen::set(pos r,pos col,char ch)
{
    contents[r*width+col] = ch;
    return *this;
}

#endif
