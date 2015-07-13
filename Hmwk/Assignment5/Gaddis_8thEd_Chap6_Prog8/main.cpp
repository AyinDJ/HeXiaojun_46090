/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap6_Prog9
 *
 * Created on July 12, 2015, 11:18 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes

float PrstVal (float, float, int);
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables 
    float fv= 0;   
    float rate=0;   
    float num=0;    
    float pent=0;  
     
    //Input
    cout<<"Enter the amount of money you want to save $"<<endl;
    cin>>fv;
    cout<<"Enter the interest rate."<<endl;
    cin>>rate;
    cout<<"Enter the number of years you want to save : "<<endl;
    cin>>num;
    
    //Output
    pent= PrstVal(fv, rate, num); 
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"In order to save $"<<fv<<", you need to deposit $"<<pent<<"."<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}

float PrstVal (float fv, float rate, int num) {
    //Declare and initialize variables 
    float pent= fv/(pow(1+(rate*0.01),num));
    
    return pent;
}
