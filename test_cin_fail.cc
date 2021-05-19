/**
*   @file:        test_cin_fail.cc
*   @author:      UGWUMADU, Chinonso Ephraim
*   @date:        05/19/2021
*   @description: testing Cin.fail() function 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

    //INPUT (DECLARATION AND INITIALIZATION)
    int number;
    cout << "Enter a number:: ";
    cin >> number;


    //PROCESS
    while (5){
        if (cin.fail()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Error: Wrong input\n";
            cout << "Enter a number:: ";
            cin >> number;
        }
        else{
            break;
        }
    }

    //OUTPUT

    cout << "**********RESULTS**********" << endl;

    cout << "the number is " << number << endl;

    cout << "**********End of Program**********" << endl;



    return 0;
}//main