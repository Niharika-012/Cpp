#include <iostream>
#include<string>
using namespace std;
class info
{
     string name;
     string address;
     string Teleph;
     string Mob;
     string Head_of_fam;
	    
     public :
     void set()
   {
      cout << endl;
      cout << "Enter Name of a person:- "<<endl;
      cin >> name;
      cout << "Enter Address:- "<<endl;
      cin >> address;
      cout <<"Enter Telephone:- "<<endl;
      cin >>  Teleph;
      cout << "Enter Mobile number:- "<<endl;
      cin >> Mob;
      cout << "Enter head of family:- "<<endl;
      cin >> Head_of_fam;
    }

      void get()
    {
	        
      cout << endl;
      cout << "Name of a person:- ";
      cout << name<<endl;
      cout << "Address:- ";
      cout << address<<endl;
      cout <<"Telephone:- ";
      cout << Teleph<< endl;
      cout << "Mobile number:- ";
      cout << Mob<< endl;
      cout << "head of family:- ";
      cout << Head_of_fam<< endl;
      }
};
	
int main()
{
    int n , i;
    cout << "Enter the number of people:- "<<endl;
    cin >> n;
    info a[n];
    for( i = 0;i<n;i++)
  {
      a[i].set();
  }
 for( i = 0;i<n;i++)
 {
     a[i].get();
 }
 return 0;
}
