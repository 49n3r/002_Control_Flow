/*
   File:        wages_nonso.cc
   Author:      UGWUMADU, Chinonso Ephraim
   Date:        05/16/2021
   Description: trying out IO and if statement 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {
    //INPUT STAGE
    //Declaration
    double hours, rate, pay;
    //Initialization
    cout << "Enter Hours worked:: ";
    cin >> hours;
    if (hours < 0 || hours > 70){

        cout<< "Error: Invalid Entry (You cannot work more than 70 hours a week) ";
        exit(0);

    } 
    cout << "Enter pay rate :: ";
    cin >> rate;
    if (rate < 10 || rate > 30){

        cout << "YOU BE THIEF! Enter correct rate jare";
        exit(0);
    }

    //PROCESS STATE
    if (hours <= 40){

        pay = hours *  rate;
    }
    else{

        pay = (40 * rate) + ((hours - 40) * (rate/2 + rate));
    }
    

    //OUTPUT STAGE
    cout << setprecision(2) << fixed;
    cout << "Your current pay is " << pay << endl;


    return 0;
}//main