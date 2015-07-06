/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap3_Prog9
 *
 * Created on July 6, 2015, 1:24 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variables
    float pin=0.8;
    float inm, min;
    
    //input
    cout<<"Enter the replacement cost of building"<<endl;
    cin>>inm;
    
    //calculate
    min=inm*pin;
    
    //output the result
    cout<<"The minimum amount of insurance you should buy is "<<min<<endl;
    

    return 0;
}

