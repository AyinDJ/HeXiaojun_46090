/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog6
 *
 * Created on July 6, 2015, 2:51 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //declare variables
    float wei, mass;
    
    //input mass
    cout<<"Enter the mass in kilograms:"<<endl;
    cin>>mass;
    
    //calculate the weight
    wei=mass*9.8;
    
    //determine if the object is too heavy or too light
    if(wei>1000)
        cout<<"The object is too heavy."<<endl;
    else if(wei<10)
        cout<<"The object is too light."<<endl;
    else
        cout<<"The object is ok!!"<<endl;

    return 0;
}

