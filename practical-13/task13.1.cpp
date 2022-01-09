// polymorphism

#include<iostream>
using namespace std;

class A{
    public:

    int add(int x){
        cout<<"Parent Int function "<<endl;
        return(x+1);
    }

    float add( float y){
        cout<<"Parent Float function "<<endl;

        return(y+0.5);
    }
};

class B : public A{
    public:

    int add(int x){
        cout<<"Child Int function "<<endl;
        return(x+2);
    }

    float add( float y){
        cout<<"Child Float function "<<endl;

        return(y+0.2);
    }
};

int main(){

  A e1;
  B e2;

  cout<<e1.add(2)<<endl;
  cout<<endl;

  cout<<e1.add(2.1f)<<endl;
  cout<<endl;

  cout<<e2.add(2)<<endl;
  cout<<endl;

  cout<<e2.add(3.2f)<<endl;
  cout<<endl;

  return 0;

}

// if a derived class redefines the base class member method then all the base
// class methods with the same name become hidden in the derived class. 
