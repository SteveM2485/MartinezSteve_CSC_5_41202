/* 
    File:   main.cpp
    Author: Steve Martinez
    Created on January 11, 2016, 8:58 AM
    Purpose: Display Truth Table and Compare Swaps
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
    bool x=true;
    bool y=true;
    int a=2,b=3,temp;
    //Create Heading
    cout<<"X Y !X !Y X&&Y XllY X^Y (X^Y)^Y (X^Y)^X !(X&&Y) !X||!Y ";
    cout<<"!(XllY) !X&&!Y"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<< "  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<< "    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"         ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<< "      ";
    cout<<(!x&&!y?'T':'F')<<"          "<<endl;
    
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<< "  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<< "    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"         ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<< "      ";
    cout<<(!x&&!y?'T':'F')<<"          "<<endl;
    
    //Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<< "  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<< "    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"         ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<< "      ";
    cout<<(!x&&!y?'T':'F')<<"          "<<endl;
    
    //Fourth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<< "  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<< "    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"         ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<< "      ";
    cout<<(!x&&!y?'T':'F')<<"          "<<endl;
    
    //Swapping
    cout<<"Swap Before Using Temp:"<<"a = "<<a<<"  b = "<<b<<endl; 
    temp=a; 
    a=b;
    b=temp;
    cout<<"Swap After Using Temp:"<<"a = "<<a<<"  b = "<<b<<endl; 
    //Swap Using Exclusive
    cout<<"Swap Before Using Exclusive Or:"<<"a = "<<a<<"  b = "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"Swap After Using Exclusive Or:"<<"a = "<<a<<"  b = "<<b<<endl;
   
    
    //Exit Stage Right
    return 0;
}

