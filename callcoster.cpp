/*Write a program that computes the cost of a long-distance call. The cost of the call is
determined according to the following rate schedule:
• Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is
billed at a rate of $0.40 per minute.
• Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is
charged at a rate of $0.25 per minute.
• Any call started on a Saturday or Sunday is charged at a rate of $0.15 per
minute.
The input will consist of the day of the week, the time the call started, and the length
of the call in minutes.
The output will be the cost of the call.*/



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    string day, tim;
    int duration;
    double cost;
    
    cout<<"Enter the day the call started at: "<<endl;
    cin>>day;
    
    cout<<"Enter the time the call started at (hhmm): "<<endl;
    cin>>tim;
    
    cout<<"Enter the duration of the call (in minutes): "<<endl;
    cin>>duration;

    
    if (day == "Sat" || day == "Sun") {
        cost = (double)duration * 0.15;
        cout<<"This call will cost $"<<fixed<<setprecision(2)<<cost;
    }
    else if (day == "Mon" || day == "Tue" || day == "Wed" || day == "Thr" || day == "Fri") {
        if (tim>="0800" && tim<="1800") {
            cost = (double)duration * 0.40;
            cout<<"This call will cost $"<<fixed<<setprecision(2)<<cost;
        }
        else if ((tim>="0000" && tim<"0800") || (tim>"1800" && tim<="2400")) {
            cost = (double)duration * 0.25;
            cout<<"This call will cost $"<<fixed<<setprecision(2)<<cost;
        }
    }
    
    return 0;
}