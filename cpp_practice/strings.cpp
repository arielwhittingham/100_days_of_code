#include <iostream>
#include <string> // strings declared in this standard library

using namespace std;
int main() 
{
    string somestring = "Some string of text\n"; // declaring string
     
     cout << somestring; // this sends the text to cout

     // send cin (invesrse of cout) to the variable we created, somestring
      cin >> somestring; // this will will send what I type in the console to my vaiable 

      cout << "Try to Print what I typed 'Hello My Name is Ariel' \n";

      cout << somestring; // this only prints the first word I typed because the white space after 'Hello' terminated the cin


}