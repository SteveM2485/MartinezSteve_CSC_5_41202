/* 
 * File:   main.cpp
 * Author: Steve Martinez
 *Created on January 9, 2016, 3:45 PM
 * Purpose: East Coast Division Sales
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
    float totalSal= .58; //Percent of Total Sales
    float yearSal= 8600000; //One year sales
    float amtSale= totalSal*yearSal; //Amount the company will generate
    
    //Calculate the Prices
    cout<<"Amount the Company will generate = $"<<amtSale<<endl;
    
    return 0;
}

