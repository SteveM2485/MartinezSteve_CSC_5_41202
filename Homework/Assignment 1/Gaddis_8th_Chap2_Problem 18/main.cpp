/* 
 * Author: Steve Martinez
 * Created on January 6, 2016, 9:20 AM
 * Purpose: To find the number of Energy Drinkers  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvPerc=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short cstSrvy=16500;  //Customers Surveyed
    unsigned char  peDrnk=15;      //Percentage Surveyed Energy Drinkers
    unsigned char  pcDrnk=58;      //Percentage Surveyed Citrus Drinkers
    unsigned short neDrnk,ncDrnk;  //Number of Energy and Citrus Drinkers
    
    //Calculate the number of Drinkers
    neDrnk=cstSrvy*peDrnk/cnvPerc;
    ncDrnk=neDrnk*pcDrnk/cnvPerc;
    
    //Output the results
    cout<<"Number of Customers Surveyed = "<<cstSrvy<<endl;
    cout<<"Percentage of Energy Drinkers = "<<static_cast<int>(peDrnk)<<"%"<<endl;
    cout<<"Percentage of Citrus Drinkers = "<<static_cast<int>(pcDrnk)<<"%"<<endl;
    cout<<"Number of Energy Drinkers = "<<neDrnk<<endl;
    cout<<"Number of Energy Citrus Drinkers = "<<ncDrnk<<endl;
    
    
    //Exit stage right
    return 0;
}

