#include<iostream>
#include<string>
using namespace std;

class student{

    private :
    string name;
    string rollno;
    string contact;
    string address;

    public:
    void input( string s1 , string rn , string ph , string add);
    void show();

};

void student :: input( string s1 , string rn , string ph , string add)
{

     name = s1;
     rollno = rn;
     contact = ph;
    address = add;

}

void student :: show()
{  
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student roll number: "<<rollno<<endl;
    cout<<"Student phone number: "<<contact<<endl;
    cout<<"Student address: "<<address<<endl;
    cout<<endl;
}

int main()
{
    student obj1 , obj2;

  obj1.input("Sam","2001247","7689561111","Patel nagar");

  obj2.input("John","2001289","9012346666","Vikasnagar");

  obj1.show();

  obj2.show();

  return 0;
}
