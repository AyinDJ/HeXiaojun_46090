/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog1
 *
 * Created on July 6, 2015, 1:53 AM
 */

#include <iostream>

using namespace std;

//user libraries 

//global constants

//function prototypes

//execution begins here


int main(int argc, char** argv) {
    //declare variables
    float num1,num2;
    
    //input numbers
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    
    //output the result
    if(num1>num2)
        cout<<num1<<" is larger than "<<num2<<endl;
    else
        cout<<num1<<" is smaller than "<<num2<<endl;

    return 0;
}

