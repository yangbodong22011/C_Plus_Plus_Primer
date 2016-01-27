/*************************************************************************
	> File Name: 5.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Wed 20 Jan 2016 17:04:07 CST
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;
char buf[80] = {0};

int main(int argc,char *argv[])
{
    FILE *pFile;
    pFile = fopen("test.txt","w+");
    if(pFile == NULL) {
        perror("Error opening file");
    } else {
        fputs("test",pFile);
        fflush(pFile);
        fgets(buf,80,pFile);
        puts(buf);
        cout << buf << endl;
        fclose(pFile);
    }
    return 0;
}
