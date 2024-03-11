
#include<iostream>
using namespace std;

int add(int &x,int &y)
{
    x++;
    y++;
    return x+y;
}

int main()
{
    int a,b,sum;
    a=5;
    b=6;
    cout<<a<<" "<<b<<endl;
    sum=add(a,b);
    cout<<sum<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}

