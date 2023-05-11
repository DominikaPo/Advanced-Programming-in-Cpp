/*Write a function that is given a phrase and returns the first word in that phrase.*/


#include <iostream>
#include <string>
using namespace std;


string firstword(string s) {
    int ind;
    string x;
    
    ind = s.find(" ");
    
    x = s.substr(0, ind);
    
    return x;
}