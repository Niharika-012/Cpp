#include<iostream>
using namespace std;

 class A {
      
      public:
      void display(){
          cout<<"This the display function of the base class A\n";
      }

 };

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
          cout<<"This the display1 function of the child class D\n";
      }

 };


 int main()
 {
    B obj1;
    C obj2;
    D obj3;

    cout<<endl;

    obj1.display();
    cout<<endl;

    obj2.display();
    cout<<endl;
    
    obj3.display1();
    obj3.display2();
    cout<<endl;

    //obj3.display(); 
    
    /* while callin base class  A display function using child class D object 
    is creating a diamond problem   Error :  request for member display is ambiguous*/
                    

 


 }
