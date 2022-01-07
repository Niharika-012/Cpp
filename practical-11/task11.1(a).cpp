#include<iostream>
using namespace std;


 class A {

      public:
      void display1(){
          cout<<"This the display1 function of the child class B\n";
      }

 };

 class B: public A {

      public:
      void display2(){

         A :: display1();
        cout<<endl;

        cout<<"This the display2 function of the child class C\n";
      }

 };

int main()
{
    B obj;
    obj.display2();
    return 0;
}
