#include<iostream>
using namespace std;
int main ()
{
   int *pointer,value;
   value=100;
   pointer=&value;
   cout<<"Value pointed by pointer :"<<*pointer<<endl;
   cout<<"adress stored at pointer :"<<pointer<<endl;
   cout<<"Adress of pointer:"<<&pointer<<endl;
   return 0;

}
