/* 
 * File:   main.cpp
 * Author: Steve Martinez
 *Created on January 9, 2016, 3:33 PM
 * Purpose: Sales Tax
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
    float totalSal= 95; //Total Purchase
    float stateTax= .04; //State Tax
    float countTax= .02; //County Tax
    float ttlState= totalSal*stateTax; //Total State Tax
    float ttlCount= totalSal*countTax; //Total County Tax
    float salesTax= ttlState+ttlCount; //Total Sales Tax
    
    //Calculate the Prices
    cout<<"Total Sales Tax = $"<<salesTax<<endl;
    
    return 0;
}

