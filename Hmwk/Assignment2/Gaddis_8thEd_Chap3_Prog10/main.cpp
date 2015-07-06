/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap3_Prog10
 *
 * Created on July 6, 2015, 1:39 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variable
    float F, C;
    float nn=9/5;
    
    //input the Celsius temperatures
    cout<<"Celsius temperatures is "<<endl;
    cin>>C;
    
    //calculates
    F=nn*C+32;
    
    //output the result
    cout<<"Fahrenheit temperatures is "<<F<<endl;
    

    return 0;
}

