/**
*   @file:        do_while_cinfail.cc
*   @author:      UGWUMADU, Chinonso Ephraim
*   @date:        05/19/2021
*   @description: do loop test 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

    //INPUT (DECLARATION AND INITIALIZATION)
    unsigned int number;
    int total = 0;
    cout << "Enter a number:: ";
    cin >> number;

    //PROCESS
    do{
        total += number;
        cout << "Enter a number:: ";
        cin >> number;

    } while (!cin.fail());


    //OUTPUT

    cout << "**********RESULTS**********" << endl;
    
    cout << " Total = " << total << endl;

    cout << "**********End of Program**********" << endl;



    return 0;
}//main