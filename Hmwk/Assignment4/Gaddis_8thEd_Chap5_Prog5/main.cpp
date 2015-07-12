/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog5
 *
 * Created on July 12, 2015, 2:04 PM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!

int main(int argc, char** argv) {
    float per=0.04;//the percentage of increase rate of the fees
    float fee=2500;
    //Loop
    for(unsigned short i=1; i<=6; i++){
        fee=fee*(1+per);
        cout<<"After "<<i<<"years, the fee will be $"<<fee<<endl;
    }

    return 0;
}

