/*Write a function for determining if a year is a leap year in the Gregorian calendar.
The system is to check if it is divisible by 4 but not by 100 unless it is also divisible
by 400.

For example, 1896, 1904, and 2000 were leap years but 1900 was not.
Write a function that takes in a year as input and returns True if the year is a leap
year, return False otherwise.

Note: background on leap year https://en.wikipedia.org/wiki/Leap_year

The name of the function should be isleapyear and the function should take one parameter which is the year to test.*/


#include <iostream>
using namespace std;

bool isleapyear(int inyear);

int main() {
    int myBirthYear;
    
    cout << "Please enter the year you were born:\n";
    cin >> myBirthYear;

    if (isleapyear(myBirthYear) == true) 
        cout << myBirthYear << " was a leap year" << endl;
    else
        cout << myBirthYear << " was not leap year" << endl;
    
    return 0;
}

bool isleapyear(int inyear) {
    if (inyear % 4 != 0)
        return false;
    else if (inyear % 100 != 0)
        return true;
    else if (inyear % 400 != 0)
        return false;
    else
        return true;
}