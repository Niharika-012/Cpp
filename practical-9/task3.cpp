#include<iostream>
using namespace std;
class Calc{
    int item;
   static int count;
    public:
     void input(void);
     void show(void);
    static void objectCount()// number of objects created
    {
          cout<<"The total number of objects invoked is : "<<count<<endl;
     }

};

 int Calc::count ; //  static data member

void Calc :: input(void){
    cout<<"Enter the item number: "<<endl;
    cin>>item;
    count++;
}

void Calc :: show(void)
{
    cout<<"The item number is :"<<item<<endl;
   
}
int main()
{
    Calc o1 , o2 , o3 , o4;
    o1.input();
    o1.show();
    Calc::objectCount();
    o2.input();
    o2.show();
    Calc::objectCount();
    o3.input();
    o3.show();
    Calc::objectCount();
 return 0;
}
