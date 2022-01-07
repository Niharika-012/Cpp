#include <iostream>
using namespace std;

class divide
{
    int n1 , n2;
    public:
    

     divide(int n1 ,int n2)
     {
	    this->n1 = n1;
	    this->n1 = n2;
      }
	  void Rem(void)
	  {
	      int r;
	      r = n1 % n2;
	      cout<<"remainder :"<<r;
	  }
};

int main()
{
   divide obj(5,2);
   obj.Rem();
 return 0;
}
