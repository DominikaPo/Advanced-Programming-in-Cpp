/*Modify your earlier BMI Metric program to also display the CDC standard weight status categories:
The CDC standard weight status categories are:
BMI		Weight Status
Below 18.5	Underweight
18.5-24.9	Normal
25.0-29.9	Overweight
30.0 and above	Obese*/





#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float bmimetricf(int w, float h);

int main() {
    int weight;
    float height;
    float bmi;
    string status;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;

    bmi = bmimetricf(weight, height);

    if (bmi < 18.5)
        status = "Underweight";
    else if (bmi >= 18.5 && bmi <= 24.9)
        status = "Normal";
    else if (bmi >= 25.0 && bmi <= 29.9)
        status = "Overweight";
    else if (bmi >= 30.0)
        status = "Obese";

    cout << "BMI is: " << std::fixed << std::setprecision(2) << bmi << ", Status is " << status << endl;

    return 0;
}

float bmimetricf(int w, float h) {
    float bmi = w / (h * h);

    return bmi;
}