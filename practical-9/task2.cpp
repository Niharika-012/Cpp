#include<iostream>

using namespace std;

class Area{

  int side;
  int l , b;
  int res;
  public:

     Area (int);
     Area(int , int);

};

Area :: Area(int a)
{   side = a;
    res = side * side;
    cout<<"Area of square is : "<<res<<endl;
}

Area :: Area(int x , int y)
{
   l = x;
   b = y;
   res = l*b;
   cout<<"The area of recctangle is : "<<res<<endl;   
}





int main()
{
    Area obj1(4) , obj2(5 , 1);

    return 0;
}
