/* 
    Author: Steve Martinez
    Created on January 8, 2016, 9:29 PM
    Purpose: Recreate a Triangle Pattern
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    //char letter='*';
    char letter=42;
    
    //Output the results
    cout<<"   "<<letter<<endl;
    cout<<"  "<<letter<<letter<<letter<<endl;
    cout<<" "<<letter<<letter<<letter<<letter<<letter<<endl;
    cout<<letter<<letter<<letter<<letter<<letter<<letter<<letter<<endl;
    
    //Exit stage right
    return 0;
}