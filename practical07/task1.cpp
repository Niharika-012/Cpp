#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int ch;
  cout<<"MENU!!!"<<endl;
  cout<<"1. Year\n2. Month\n3. Day\n4. Exit\n"<<endl;
  cout<<"Enter the choice\n";
  cin>>ch;
  switch(ch)
  {
     case 1:
     cout<<"Year:- 2021"<<endl;
     break;
     case 2:
     cout<<"Month:- October"<<endl;
     break;
     case 3:
     cout<<"Day:- 17"<<endl;
     break;
     case 4:
     exit(0);
     default:
     cout<<"INVALID CHOICE!!!"<<endl;
  }
 return 0;
 }
