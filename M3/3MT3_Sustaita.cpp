// CSC 134
// M3T3 - Random Numbers
// Brenda Sustaita
// 02/24/2025

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    cout << "Your seed is: " << seed << endl;
    srand(seed);

    for (int i = 1; i <= 10; i++)
        {
            int d1 = rand() % 6 + 1;
            int d2 = rand() % 6 + 1;
            int sum = d1 + d2;
            
            cout<< "Roll" << i << ":" <<  d1 << " + " << d2 << " = " << sum << " -> ";

            if (sum == 7 || sum == 11)
            {
                cout << "WIN!" << endl; 
            }

            else if (sum == 2 || sum == 3 || sum == 12)
            {
                cout << "CRAP!" << endl;
            }

            else
            {
                cout << "Point established at " << sum << endl;
            }
        }
    cout << endl;
    return 0;
}
