#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
  time_t now=time(0);
  tm *ltm=localtime(&now);
  
  int ch;
  cout<<"MENU!!!"<<endl;
  cout<<"1.Year\n2.Month\n3.Day\n4.Time\n5.Exit\n";
  cout<<"Enter your choice\n";
  cin>>ch;
  switch(ch)
  {
    case 1:
    cout<<"Year:"<<1900+ltm->tm_year<<endl;
    break;
    case 2:
    cout<<"Month:"<<1+ltm->tm_mon<<endl;
    break;
    case 3:
    cout<<"Day:"<<ltm->tm_mday<<endl;
    break;
    case 4:
    cout<<"Time: "<<5+ltm->tm_hour<<":";
    cout<<30+ltm->tm_min<<":";
    cout<<ltm->tm_sec<<endl;
    case 5:
    exit(0);
    default:
    cout<<"Invalid choice\n";
  }
 return 0;
 } 
