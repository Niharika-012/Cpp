#include<iostream>
using namespace std;
int main()
{

  int a[3][3],i,j;
  cout<<"Enter number:";
  
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>a[i][j];
    }
  }

cout<<"\n";

cout<<"The Given Matrix\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}

cout<<"\n\n";

cout<<"The Matrix After Reverse\n";
for(i=2;i>=0;i--)
{
for(j=2;j>=0;j--)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}

return 0;
}
