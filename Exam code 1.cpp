#include<iostream>
using namespace std;

class employee{

   private :
       int salary;
   public:
    void setSalary (int s){
      salary=s;
    }
    int getSalary(){
      return salary;
    }

};

int main ()
{
    employee myobj;
    myobj.setSalary (30000);
    cout<<myobj.getSalary()<<endl;
    return 0;
}

