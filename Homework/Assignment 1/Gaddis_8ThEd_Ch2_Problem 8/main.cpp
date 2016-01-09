/* 
 * File:   main.cpp
 * Author: Steve Martinez
 *Created on January 8, 2016, 10:07 PM
 * Purpose: Calculate the Total Purchase
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
    float ItmOne= 15.95;  //Price of Item 1
    float ItmTwo= 24.95;  //Price of item 2
    float ItmThree= 6.95; //Price of Item 3
    float ItmFour= 12.95; //Price of Item 4
    float ItmFive= 3.95;  //Price of Item 5
    float subTotal= ItmOne+ItmTwo+ItmThree+ItmFour+ItmFive;//Subtotal
    float subTot= 64.75;//Calculated Sub Total
    float Tax= .07;//Tax
    float TaxTotal= subTot*Tax; //Total Tax
    float Total= subTot+TaxTotal; //Main Total
    
    //Calculate the Prices
    cout<<"Price of Item 1 = $"<<ItmOne<<endl;  
    cout<<"Price of Item 2 = $"<<ItmTwo<<endl;   
    cout<<"Price of Item 3 = $"<<ItmThree<<endl;   
    cout<<"Price of Item 4 = $"<<ItmFour<<endl;   
    cout<<"Price of Item 5 = $"<<ItmFive<<endl;   
    cout<<"Sub Total       = $"<<subTotal<<endl;   
    cout<<"Sales Tax       = $"<<setprecision(2)<<fixed<<TaxTotal<<endl;
    cout<<"Total           = $"<<Total<<endl;
    return 0;
}

