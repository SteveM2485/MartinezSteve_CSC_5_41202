/* 
    Author: Steve Martinez
    Created on January 5, 2016, 9:30 AM
    Purpose: Calculate Paycheck, Straight Time
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
  
//Global Constant

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float         payRate=1e1f;//Pay Rate in $'s/hour
    unsigned char hrsWrkd=40;  //Hours Worked
    
    //Input Data
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;
    
    //Output the results
    cout<<"Pay Rate     = $ "<<payRate<<"'s/hr"<<endl;
    cout<<"Hours Worked =   "<<static_cast<int>(hrsWrkd)<<" hrs"<<endl;
    cout<<"Pay Check    = $" <<payChk<<endl;
   
    //Exit Stage Right
    return 0;
}

