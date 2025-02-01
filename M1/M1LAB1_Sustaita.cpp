// CSC 134
// Brenda Sustaita
// M1LAB1 - Apple Sales 
// 01/29/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    string name = "Brenda"; //my name
    int apples = 100; //int are whole numbers, number of apples we have
    double cost_each = 0.25; //twenty five cents, price per apple
    double totalprice = (double) apples * cost_each;
    //print all info
    cout << "Welcome to " << name;
    cout << "'s Apple Orchard!" << endl;
    cout << "We have " << apples;
    cout << " apples in stock." <<endl;
    cout << "Apples are currently $";
    cout << cost_each << " each." << endl;
    //find out total
    cout << "If you would like them all, it will be $" << totalprice <<"." << endl;
    cout << endl;
}

