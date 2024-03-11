#include<iostream>
using namespace std;
int main (){

    int a=5;
    int & ref =a;
    ref =10;
    cout<<"a="<<ref<<endl;
    a=15;
    cout<<"ref="<<a<<endl;
    return 0;
}
