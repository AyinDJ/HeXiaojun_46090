/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog3
 *
 * Created on July 12, 2015, 12:50 PM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float rise=1.5;
    float tot;//total of rise
    //Loop
    for(unsigned short i=1; i<=25; i++){
        tot+=rise;
        cout<<"After "<<i<<" years, the ocean rise "<<tot<<"(mm)."<<endl;
    }
    
    return 0;
}

