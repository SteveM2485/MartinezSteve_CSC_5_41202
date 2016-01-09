/* 
 * File:   main.cpp
 * Author: Steve Martinez
 *Created on January 9, 2016, 10:39 AM
 * Purpose: Circuit Board Price
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
    float priceCir= 14.95; //Price of Circuit Board
    float percProf= .35;   //Percent Profit
    float amtProf= priceCir*percProf; //Profit
    float sellPrice= priceCir+amtProf; //Selling Price
    
    //Calculate the Prices
    cout<<"Selling Price = $"<<setprecision(2)<<sellPrice<<endl;
    
    return 0;
}

