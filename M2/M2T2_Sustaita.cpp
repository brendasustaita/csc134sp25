//CSC134
//M2T2- Apple Sales Reciept
//Brenda Sustaita
//02/05/2025

#include <iostream>
#include <iomanip>
using namespace std;
 int main()
 {
//copying apple sales format from M2T1 to gather my information
//Greet customer
    cout << "Hello! Welcome to Sustaita Apple Farm!" << endl;
    cout << "We hope you enjoyed your meal :)" << endl;
    cout << "----------------------------------" << endl;
    //set up variables
    string meal = "Apple Cobbler";
    // all in $, except the percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount =0;
    double total = 0;
    // do calculations
    tax_amount = meal_price * tax_percent;
    total = meal_price + tax_amount;
    //print reciept
     cout << fixed << setprecision(2);

    cout << meal << " - $" << meal_price << endl;
    cout << "----------------------------------" << endl;
    cout << "Subtotal:     $" << meal_price << endl;
    cout << "Tax 8%: "   << "      $" << tax_amount << endl;
    cout << "Total: " << "       $" << total << endl;
    cout << endl;


    return 0;
 }
