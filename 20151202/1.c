/*************************************************************************
	> File Name: 1.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 02 Dec 2015 22:01:40 CST
 ************************************************************************/
#include<stdio.h>
#include<unistd.h>

void func1()
{
    printf("yangbodong\n");
}

int *func()
{
    int i = 10;
    int *p = &i;
    printf("%d\n",i);
    return p;
}


int main(int argc,char *argv[])
{
    int *p;
    p= func();
    int i;
    printf("%d\n",*p);
    printf("----------%d\n",*p);

    return 0;
}
