/*Read from the user a string containing 
odd number of characters. Your program should: 
a) Print the middle character. 
b) Print the string up to but not including the middle character (i.e., the first half 
of the string). 
c) Print the string from the middle character to the end (not including the 
middle character). */



#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    double ind;
    int end;
    
    cout<<"Enter an odd length string: ";
    getline(cin, str);
    
    ind = (str.length() / 2.0) - 0.5;
    end = str.length();
    
    cout<<"Middle character: "<<str[ind]<<endl;
    
    cout<<"First half: "<<str.substr(0, ind)<<endl;
    
    cout<<"Second half: "<<str.substr(ind+1, end)<<endl;
    
    return 0;
}