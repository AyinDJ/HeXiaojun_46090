/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose:
 *
 * Created on July 1, 2015, 11:03 AM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global constant
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare and initialize variables
    int nTerms=200000000;
    float apprxPI=1;
    
    //Now calculate PI with a for-loop
    for(int i=3, nTerm=1; nTerm<=nTerms; i+=4, nTerms+=2){
        apprxPI+=(-1.0f/i+1.0f/(i+2));
    }
    apprxPI*=4;
    
    //output the results and compare
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;
    
    //Exit stage right!
    return 0;
}

