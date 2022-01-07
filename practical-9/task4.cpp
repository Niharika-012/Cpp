#include<iostream>
#include<string>
using namespace std;

class Student{

    string Name;
    int age;
    float marks;

    public: 
      void input(string , int , float);
      void show();

      friend Student add(Student obj1 , Student obj2 , Student obj3);
};

Student add(Student obj1 , Student obj2 , Student obj3)
{
    Student obj;
    obj.marks = obj1.marks + obj2.marks+obj3.marks;
    cout<<"Total number of marks: "<<obj.marks<<endl;
}

void Student :: input(string s1 , int x , float m)
{
    Name = s1;
    age = x;
    marks = m;
}

void Student :: show(void)
{   
    cout<<endl;
    cout<<"Student Information:"<<endl;
    cout<<"Name : "<<Name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Marks : "<<marks;
    cout<<endl;
}

int main()
{
    Student o1 , o2 , o3;

    o1.input("Sania",19,88.9);
    o1.show();

    o2.input("Abhay",20,90.0);
    o2.show();

    o3.input("Kritika",20,88);
    o3.show();

    add(o1,o2,o3);
return 0 ;
}
