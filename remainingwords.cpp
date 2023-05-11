/*Write a function that is given a phrase and returns the phrase we get if we take  
out the first word from the input phrase.*/



#include <iostream>
#include <string>
using namespace std;


string remainingwords(string s) {
    int ind, inds;
    string x;
    
    ind = s.find(" ");
    
    inds = ind + 1;
    
    x = s.substr(inds, s.length());
    
    return x;
}