/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog3
 *
 * Created on July 6, 2015, 2:11 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variables
    unsigned short day, month, year;
    
    //input
    cout<<"Enter a day, a month and a two-digit year."<<endl;
    cin >>day>>month>>year;
    
    //output the result
    if(month*day==year)
        cout<<"The date"<<month<<"/"<<day<<"/"<<year<<" is magic."<<endl;
    else
        cout<<"The date"<<month<<"/"<<day<<"/"<<year<<" is not magic."<<endl;
    

    return 0;
}

