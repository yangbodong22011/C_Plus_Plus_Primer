/*************************************************************************
	> File Name: 3.23.cpp
	> Author: YangBodong
	> Mail: ybd@xiyoulinux.org
	> Created Time: Sun 29 Nov 2015 09:17:27 CST
 ************************************************************************/

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char *argv[])
{
    std::vector<int> v1{1,2,3,4,5};
    auto begin = v1.begin();
    auto end = v1.end();
    auto middle = v1.begin() + ((v1.end()-v1.begin())/2);
    while(middle != end && *middle != 6) {
        if(*middle > 6) {
            end = middle;
        }
        else {
            begin = middle+1;
        }
        middle = begin+((end-begin)/2);
    }
    cout << *middle<< endl;


    return 0;
}
