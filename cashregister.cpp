/*Write a program that computes how much a customer has to pay after purchasing
two items. 
The price is calculated according to the following rules:
• Buy one get one half off promotion: the lower price item is half price.
• If the customer is a club card member, additional 10% off.
• Tax is added.

Inputs to the program include:
• Two items’ prices
• Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
• Tax rate (User enters the percentage as a number; for example, they enter
8.25 if the tax rate is 8.25%)

Program displays:
• Base price - the price before the discounts and taxes
• Price after discounts - the price after the buy one get one half off promotion
and the member’s discount, if applicable
• Total price – the amount of money the customer has to pay (after tax)
printed with the precision of 2 decimal digits.*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double HALF_PRICE = 0.5;
const double CLUB_DISCOUNT = 0.9;

int main() {
    double item1, item2;
    char clubCard;
    double tax;
    double basePrice, discountedPrice, totalPrice;

    // Get various user inputs
    cout << "Enter price of the first item: ";
    cin >> item1;
    cout << "Enter price of the second item: ";
    cin >> item2;

    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;

    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;

    // Calculate base price
    basePrice = item1 + item2;

    // Calculate price after discounts
    if (item1 < item2)
        discountedPrice = (item1 * HALF_PRICE) + item2;
    else
        discountedPrice = (item2 * HALF_PRICE) + item1;
    
    if (clubCard == 'y' || clubCard == 'Y')
        discountedPrice = discountedPrice * CLUB_DISCOUNT;

    // Calculate total price by adding tax
    totalPrice = discountedPrice * (tax / 100 + 1);
  
    // Prints output
    cout << "Base price = " << std::fixed << std::setprecision(2) << basePrice << endl;
    cout << "Price after discounts = " << std::fixed << std::setprecision(2) << discountedPrice << endl;
    cout << "Total price = " << std::fixed << std::setprecision(2) << totalPrice << endl;

    return 0;
}