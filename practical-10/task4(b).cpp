#include<iostream>
#include<string.h>

using namespace std;

class addString{

    char str[20];

    public :
    addString(){}

    addString(char str[])
    {
        strcpy(this->str , str);
    }

    addString operator +(addString &s1)
    {
        addString s3;

        strcat(this->str , s1.str);

        strcpy(s3.str , this->str);

      //  return s3;

             cout<<"Concatenation: "<<s3.str<<endl;
    }
};

int main()
{
    char str1[] = "Hello!!!";
    char str2[] = "Amigos.";
     
     addString o1(str1);
     addString o2(str2);

     //addString o3;
      o1 + o2;



     return 0;
}
