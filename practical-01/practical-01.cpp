#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int num;
cin>>num;
if(num==1)
{	cout<<false;
return 0;
}
else
for(int i=2;i<=sqrt(num);i++)

if(num%i==0){
	cout<<false;
	return 0;
}
cout<<true;
return 0;
}
