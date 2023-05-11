/*Write a program that  reads a character (string of  length  1)  from  the 
user, and classifies it to  one of the following: lower case letter, upper case letter, 
digit,  or non-alphanumeric character*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string ch;
    
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    
    if (ch >= "a" && ch <= "z") {
        cout<<ch<<" is a lower case letter."<<endl;
    }
    else if (ch >= "A" && ch <= "Z") {
        cout<<ch<<" is an upper case letter."<<endl;
    }
    else if (ch >= "0" && ch <= "9") {
        cout<<ch<<" is a digit."<<endl;
    }
    else
        cout<<ch<<" is a non-alphanumeric character."<<endl;
        
    return 0;
}