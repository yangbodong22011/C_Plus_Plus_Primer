/*************************************************************************
	> File Name: Debug.h
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Thu 28 Jan 2016 01:46:04 CST
 ************************************************************************/

#ifndef _DEBUG_H
#define _DEBUG_H

class Debug {
public:
    constexpr Debug(bool b = true):hw(b),io(b),other(b) { }
    constexpr Debug(bool h,bool i,bool o):hw(h),io(i),other(o) { }

private:
    bool hw;    //硬件错误
    bool io;    //io错误
    bool other; //其他错误
}



#endif
