/* 
 * File:   main.cpp
 * Author: Steve Martinez
 *Created on January 9, 2016, 5:32 PM
 * Purpose: Miles per Gallon
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare the Variables and Initialize
    float tankGal= 15;//Amount the Tank can hold
    float refuel= 375;//Miles before refueling
    float mpgFull= refuel/tankGal;//MPG
  
    //Output
    cout<<"Miles per Gallon = "<<mpgFull<<endl;
    
    
    return 0;
}

