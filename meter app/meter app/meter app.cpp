// meter app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//aku metre assignment

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

string name;
string location;
int phone_number;

int main()
{

    cout << " please enter the following required details please" << endl;
    cout << "Enter Customer name please: " << endl;
    cin >> name;
    cout << "Enter Customer phone number please: " << endl;
    cin >> phone_number;
    cout << "Enter number location or area of residencce: " << endl;
    cin >> location;
    if (phone_number >= 11) {
        cout << " your metre nymber is =========== 9234 1278 9045 7789" << endl;
    }
    else {
        cout << "phone number is not correct check and try again" << endl;
       
    }
      for (int i = 1; i < 1; i++)
    {
        cout << "your meter number please : " << rand() << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
