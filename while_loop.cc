/*
   File:        PROGRAM-NAME.cc
   Author:      UGWUMADU, Chinonso Ephraim
   Date:        05/DAY/2021
   Description: ENTER DESCRIPTION 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

//INPUT (DECLARATION AND INITIALIZATION)
int counter = 5;
int score;

//PROCESS
while (counter >= 0){

    cout << "This is Hump " << counter <<"\n";
    counter--;
}
//SENTINEL LOOP
cout << "Enter a score:: " ;
cin >> score;
while (score >= 0){
    cout << "Score = " << score <<"\n";
    cout << "Enter another score:: " ;
    cin >> score;
}


//OUTPUT
    cout << "Last Score input = " << score << endl;
    cout << "**End of Program**" << endl;



    return 0;
}//main