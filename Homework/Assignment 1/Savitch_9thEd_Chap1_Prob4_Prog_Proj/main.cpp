/* 
 * Author: Steve Martinez
 * Created on January 7, 2016, 11:52 AM
 * Purpose: How far will it drop?  
 */

//System Libraries
#include <iostream>//I/O Library
#include <cstdlib> //Random function location
#include <cmath>   //Math Functions
#include <ctime>   //Time to set the random seed
#include <iomanip> //Format Library
#include <fstream> //Reading/Writing to a file
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;//Sea Level Earth Acceleration Constant ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ofstream out;//Declare a file stream object called out
    float drpTime,distance;//Time in sec and Distance in ft
    
    //Input the Time with a Random Number and opening a file
    drpTime=rand()%11+10;//[10,20] secs
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //Calculate the Number of Perpetrators
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time = "<<drpTime<<"(sec)"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the Distance with 3 decimals
    cout<<"Free Fall Distance x2= "<<distance<<"(ft)"<<endl;
    
     //Calculate the Number of Perpetrators
    distance=0.5f*GRAVITY*pow(drpTime,2);
    
    //Output the results
    cout<<"Free Fall Distance pow="<<setw(9)<<distance<<"(ft)"<<endl;
    
     //Calculate the Number of Perpetrators
    distance=0.5f*GRAVITY*exp(2*log(drpTime));
    
    //Output the results
    cout<<"Free Fall Distance exp(log)="<<setw(9)<<distance<<"(ft)"<<endl;
    
    //Output the results to a file
    out<<fixed<<setprecision(3)<<showpoint;//Format the Distance with 3 decimals
    out<<"Free Fall Distance exp(log)="<<setw(9)<<distance<<"(ft)"<<endl;
    
    //Exit stage right, make sure to close files
    out.close();
    return 0;
}

