
#include<iostream>
using namespace std;

 int a=100;

 int main ()
 {
    int a=50;
    std::cout<<"Local variable="<<a<<std::endl;
    std::cout<<"global variable="<<::a<<std::endl;
    return 0;
}
