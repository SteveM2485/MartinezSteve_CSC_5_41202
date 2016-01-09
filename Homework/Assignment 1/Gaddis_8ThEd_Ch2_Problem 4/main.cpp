/* 
 * File:   main.cpp
 * Author: Steve Martinez
 *Created on January 9, 2016, 10:39 AM
 * Purpose: Restaurant Bill
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
    float restBill= 88.67; //Restaurant Bill
    float restTax= .0675;  //Percent Tax
    float restTip= .2;     //Percent Tip
    float amtTax= restBill*restTax; //Total Tax
    float mealCos= restBill+amtTax; //Bill Before Tip
    float amtTip= mealCos*restTip; //Tip Amount
    float totalBill= mealCos+amtTip; //Total Bill
    
    //Calculate the Prices
    cout<<"Meal Cost = $"<<setprecision(2)<<fixed<<mealCos<<endl;
    cout<<"Tax Amount = $"<<amtTax<<endl;
    cout<<"Tip Amount = $"<<amtTip<<endl;
    cout<<"Total Bill = $"<<totalBill<<endl;
    
    return 0;
}

