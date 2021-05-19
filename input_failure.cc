/*
   File:        input_failure.cc
   Author:      UGWUMADU, Chinonso Ephraim
   Date:        05/16/2021
   Description: trying out cin.fail(), cin.clear() and cin.ignore() 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

//INPUT (DECLARATION AND INITIALIZATION)

int number, total = 0;
cout << "Enter a number, Q to quit:: ";
cin >> number;

//PROCESS

while (!cin.fail()){

    total += number;
    cout << "Enter a number, Q to quit:: ";
    cin >> number;
}

if (cin.fail()){

    cin.clear();
    cin.ignore(100, '\n');
}

//OUTPUT

    cout << "Total:: "<< total << endl;
    cout << "**End of Program**" << endl;



    return 0;
}//main