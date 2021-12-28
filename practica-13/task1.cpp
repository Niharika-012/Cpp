// Write a file

#include<iostream>
#include<fstream>

using namespace std;

int main()
{

  ofstream myFile;

  myFile.open("Example.txt");

  myFile<<"Write this in the file\nHeya! Amigos , Hope all of you nare doing well \n";
   
  myFile.close();
  return 0;

} 
