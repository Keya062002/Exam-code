#include<iostream>
using namespace std;
int main()
{
    int *potr=new int;
    *potr=10;
    std::cout<<*potr<<endl  ;
    delete potr;
    return 0;
}
