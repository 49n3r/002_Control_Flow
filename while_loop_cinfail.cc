/**
*   @file:        while_loop_cinfail.cc
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
    int total_sum = 0; 
    cout << "Please Enter a number to add {Q to quit}:: ";
    cin >>  number;

    //PROCESS
    while (1){

        if (cin.fail()){

            cin.clear();
            cin.ignore(100, '\n');
            cout << "You have entered an invalid number\n";
            cout << "Enter another number {Q to quit}:: ";
            cin >> number ;
        }
        total_sum += number;
        cout << "Please Enter a number to add {Q to quit}:: ";
        cin >>  number;
    
    }


    //OUTPUT
    cout << "The sum of all the numbers is " << total_sum << endl;


    cout << "\n**End of Program**" << endl;
    return 0;
}//main