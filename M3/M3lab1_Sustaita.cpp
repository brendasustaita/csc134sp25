// CSC 134
// M3Lab 1- IF statements
// Brenda Sustaita
// 02/24/2025

#include <iostream>
using namespace std;

int main (){  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 
  //making a statement
  cout << "Let's play a game!" << endl;
  cout << endl;
  // ask the question
  cout << "What's heavier? A pound of rocks or a pound of beans?" << endl;
  cout << endl;
  cout << "Choose 1 for rocks, " << endl;
  cout << "Choose 2 for beans, " << endl;
  cout << "Choose 3 if you think they weigh the same." << endl;
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose rocks." << endl;
  }
  else if (2 == choice) {
  	cout << "You chose beans." << endl;
  }
  else if (3 == choice) {
    cout <<"You chose they weigh the same." << endl;
  }
  else {
  	cout << "That wasn't an option." << endl;
  }
  cout << endl;
  // finish up
  cout << "If you chose option 3, you're a smart peach!" << endl;
  cout << endl;
  cout << "Remember that a pound is a pound...they weigh the same." << endl;
  cout << endl;
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  cout << endl;

    return 0;
}
