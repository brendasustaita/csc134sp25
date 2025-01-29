// CSC 134
// Brenda Sustaita
// M2T1 
// 01/29/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Apple Sales program
    // Variables are like mailboxes

    string farm_name = "Sustaita"; //name of farm, whatever name i want
    int num_apples = 99; //are whole numbers
    double cost_each = 0.25; //twenty five cents
    // new variables for M2T1
    string user_name; //Who is buying the apples?
    int apples_to_buy; // How many apples do they want


    //First greet the customer
    cout << "Hello! What's your name? ";
    cin >> user_name;
    cout << "Nice to meet you " << user_name << "!" << endl;
    cout << "Welcome to the " << farm_name << " apple farm!" << endl;

    cout << setprecision(2) << fixed; // 2 decimal places

    cout << "There are " << num_apples << " in stock." << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    // Find out the total price
    double total_cost = num_apples * cost_each;
    cout << "The price for all them is $" << total_cost << "." << endl;


}

