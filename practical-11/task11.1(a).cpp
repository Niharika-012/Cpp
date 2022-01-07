#include<iostream>
using namespace std;



 class B : public A{

      public:
      void display1(){
          cout<<"This the display1 function of the child class B\n";
      }

 };

 class C : public A{

      public:
      void display2(){
          cout<<"This the display2 function of the child class C\n";
      }

 };

 class D : public B , public C{

      public:
      void display3(){
       

       
          B::display1();
          cout<<endl;
       
          C::display2();
          cout<<endl;
       
          cout<<"This the display1 function of the child class D\n";
      }

 };

int main()
{
 
 D obj;
 
 obj.display3();
  
  return 0; 
 
}
