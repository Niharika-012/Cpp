// read file

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

  ifstream myFile;

  string data;
  int n = 2 , i=0;

 myFile.open("Example.txt");
  
 for(;i<=n && getline(myFile,data) ; ++i)
{ 
   cout<<data<<endl; }

 myFile.close();

 return 0;

}
  
