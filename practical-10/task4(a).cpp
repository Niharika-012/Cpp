#include<iostream>
using namespace std;

class Compare{

    int num;

    public:

    Compare(int a)
    {
        num = a;
    }

    int operator <(Compare obj)
    {
        if(num < obj.num)
           return 1;

        else
           return 0;   
    }
};


int main()
{
    Compare o1(78) , o2(79);

    if(o1 < o2)
    {
        cout<<"o1 is less than o2"<<endl;
    }
    else{
        cout<<"o2 is less than o1"<<endl;
    }

    return 0;
}
