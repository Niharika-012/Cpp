#include<iostream>
#include<ostream>
#include<istream>
#include<string>
#include<sstream>
using namespace std;
int main ()
{
    int n=70;
    
    cout<<dec<<n<<'\n';
    cout<<hex<<n<<'\n';
    
    char a,b,c;
    istringstream s("   123");
    s>>skipws>>a>>b>>c;
    cout<<a<<b<<c<<'\n';
    
    istringstream p("  123");
    p>>noskipws>>a>>b>>c;
    cout<<a<<b<<c<<'\n';
    
    istringstream r("  this is a test");
    string line;
    getline(r>>ws,line);
    cout<<line<<'\n';
    
}
