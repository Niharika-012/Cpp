// Manipulators

#include<iostream>
#include<istream>
#include<ostream>
#include<string>
#include<sstream>

using namespace std; 

int main()
{

  int n=70;

  cout<<dec<<n<<'\n';
  cout<<hex<<n<<'\n';

  char a, b , c;

  istringstream S("   123");
  
  S>>skipws>>a>>b>>c;

  cout<<a<<b<<c<<'\n'; // output without white spaces

  istringstream P("  123");

  P>>noskipws>>a>>b>>c; // output with white spaces

  cout<<a<<b<<c<<'\n';

  istringstream r("  This is a test");
  
  string line;
   
  getline(r>>ws, line);

  cout<<line<<'\n';


return 0;
}
  
