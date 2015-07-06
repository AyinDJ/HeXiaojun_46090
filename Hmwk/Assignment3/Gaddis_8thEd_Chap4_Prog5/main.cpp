/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog5
 *
 * Created on July 6, 2015, 2:35 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //declare variables
    float hig, wei, bmi;
    
    //input height and weight
    cout<<"Enter height in inches"<<endl;
    cin>>hig;
    cout<<"Enter weight in lbs"<<endl;
    cin>>wei;
    
    //calculate bmi
    bmi=wei*703/(hig*hig);
    
    //determine if a person has a optimal body
    if(bmi>=18.5 && bmi<=25)
        cout<<"You have a optimal weight."<<endl;
    else if(bmi<18.5)
        cout<<"You are underweight."<<endl;
    else
        cout<<"Your are overweight."<<endl;
    

    return 0;
}

