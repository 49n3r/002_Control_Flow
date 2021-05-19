/**
*   @file:        gas_consumption.cc
*   @author:      UGWUMADU, Chinonso Ephraim
*   @date:        05/16/2021
*   @description: Program to determine the gas consumption of a car driven in town and/or in highway 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///GLOBAL VARIABLE INITIALIZATION
double TOWN_mpg = 22.5;                  ///mpg = miles per gallon
double HIGHWAY_mpg = 29.5;

int main(int argc, char const *argv[]) {

    ///INPUT (DECLARATION AND INITIALIZATION)
    double town_miles, highway_miles;
    double town_gas, highway_gas; 
    double total_miles, total_gas, avg_mpg;
    

    cout << "Enter number of miles driven in TOWN:: ";
    cin >> town_miles;
    while (1){
        if (town_miles < 0 || cin.fail()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Error: number of miles driven in town cannot be negative\n";
            cout << "Enter valid number of miles driven in TOWN:: ";
            cin >> town_miles;
        }
        else{
            break;
        }
    }
    
    cout << "Enter number of miles driven in HIGHWAY:: ";
    cin >> highway_miles;
    while (1){
        if (highway_miles < 0 || cin.fail()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Error: number of miles driven in highway cannot be negative\n";
            cout << "Enter valid number of miles driven in HIGHWAY:: ";
            cin >> highway_miles;
        }
        else{
            break;
        }
    }
    

    ///PROCESS

    /// Gas consumption for driving in town and highway::
    town_gas = town_miles / TOWN_mpg;
    highway_gas = highway_miles / HIGHWAY_mpg;

    /// Total miles driven and total gas consumed::
    total_miles = town_miles + highway_miles;
    total_gas = town_gas + highway_gas;

    /// Average speed calculation in miles per gallon::
    avg_mpg = total_miles / total_gas;
        

    ///OUTPUT
    cout << "---------------Gas Consumption---------------" << endl;

    cout << setprecision(1) << fixed;
    cout << "The number of miles driven in town:: \t" << town_miles << " miles." << endl;
    cout << "The gas consumption for town driving:: \t" << town_gas << " gallons." << endl;
    cout << "The number of miles driven in highway:: " << highway_miles << " miles." << endl;
    cout << "The gas consumption for highway driving:: " << highway_gas << " gallons." << endl;
    cout << "The total miles driven:: " << total_miles << " miles." << endl;
    cout << "The total gas consumed:: " << total_gas << " gallons." << endl;
    if (total_miles == 0 ){
        cout << "No Average can be calculated";
        exit(0);
    }
    else{
        cout << "The average mpg for the trip:: " << avg_mpg << " miles/gallon." << endl;
    }  

    cout << "\n**********End of Program**********" << endl;
    return 0;
}//main