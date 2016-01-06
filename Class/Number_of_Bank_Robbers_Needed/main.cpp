/* 
 * Author: Steve Martinez
 * Created on January 6, 2016, 11:35 AM
 * Purpose: How many does it take?  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char wtBill=1;//Weight in grams
const float cnvLbs=1.0f/453.5;//Conversion from Grams to Pounds

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int amtStl;       //Amount to steal
    unsigned short denom;      //Bill Denomination
    unsigned char  wtPers=80;  //Weight person can carry
    unsigned char nPerps;      //Number of Perpetrators
    
    //Input 
    cout<<"How much money would you like to aquire?"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination desired?"<<endl;
    cin>>denom;
    
    //Calculate the Number of Perpetrators
    nPerps=cnvLbs*amtStl*wtBill/denom/wtPers+1;
    
    //Output the results
    cout<<"Amount Desire = $"<<amtStl<<endl;
    cout<<"Denomination desired = $"<<denom<<endl;
    cout<<"Number of Individuals Required on the Job = "
            <<static_cast<int>(nPerps)<<endl;
   
    
    
    //Exit stage right
    return 0;
}

