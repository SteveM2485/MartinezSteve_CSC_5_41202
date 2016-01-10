/* 
 * File:   main.cpp
 * Author: Steve Martinez
 *Created on January 9, 2016, 5:09 PM
 * Purpose: Average of Values
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
    float numbOne= 28; //Variable One
    float numbTwo= 32; //Variable Two
    float numbThre=37; //Variable Three
    float numbFour=24; //Variable Four
    float numbFive=33; //Variable Five
    float sum= numbOne+numbTwo+numbThre+numbFour+numbFive; //Sum 
    float aver= sum/5; //Average
    
    //Calculate the Prices
    cout<<"Average = "<<aver<<endl;
    
    
    return 0;
}

