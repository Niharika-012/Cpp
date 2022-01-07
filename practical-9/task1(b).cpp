#include<iostream>
#include<string>
using namespace std;

class student{

    private:
    string name;
    int marks;
    char sec;

    public:

    void input(string name , int m , int sec)
    {
        this->name = name;
        this->marks = m;
        this->sec = sec;
    }
    friend int get_marks(student obj);

};

int get_marks(student obj)
{
    return obj.marks;
}

int main()
{
    int n , i;
    cout<<"Enter the number of students: "<<endl;
    cin>>n;
     int mark;
     char sec;
     string name;
    student a[n];

    for(i=0 ; i<n ; i++)
    {
        cout<<"Enter Name , marks and sec of students"<<i+1<<endl;
        cin>>name;
        cin>>mark;
        cin>>sec;
        a[i].input(name , mark , sec);
    }
    int s=0;
    for(i=0 ; i<n ; i++)
    {
        s += get_marks(a[i]);
    }
    cout<<s;
    return 0;
}
