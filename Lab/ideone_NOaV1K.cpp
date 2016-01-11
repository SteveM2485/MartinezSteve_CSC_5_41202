#include <iostream>
using namespace std;

int main() {
//Declare and Initialize
unsigned int jackpot;
float lumpSum= .62;
float afterTax= .52;
float married= .5;

//Input
cout<<"Jackpot"<<endl;
cin>>jackpot;

//Calculate the Amount
float LumpSum= jackpot*lumpSum;
float AfterTax= LumpSum*afterTax;
float Marriage= AfterTax*married;

//Output
cout<<"How much did you win? "<<jackpot<<endl;
cout<<"Lump Sum : "<<LumpSum<<endl;
cout<<"After Taxes : "<<AfterTax<<endl;
cout<<"Marriage : "<<Marriage<<endl;

	return 0;
}