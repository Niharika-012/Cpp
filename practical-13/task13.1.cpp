// polymorphism

#include<iostream>
using namespace std;

class A{
    public:

    int add(int x , int y){
        cout<<"Parent Int function "<<endl;
        return(x+y);
    }

    float add(int a , float b){
        cout<<"Parent Float function "<<endl;

        return(a+b);
    }
};

class B : public A{
    public:

    int add(int x , int y){
        cout<<"Child Int function "<<endl;
        return(x+y+1);
    }

 
};

int main(){

  A e1;
  B e2;

  cout<<e1.add(2,1)<<endl;
  cout<<endl;

  cout<<e1.add(4 , 5.90f )<<endl;
  cout<<endl;

  cout<<e2.add(2 , 2)<<endl;
  cout<<endl;

 

  return 0;

}

// if a derived class redefines the base class member method then all the base
// class methods with the same name become hidden in the derived class. 
