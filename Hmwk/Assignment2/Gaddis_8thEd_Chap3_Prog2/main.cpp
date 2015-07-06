/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap3_Prog2
 *
 * Created on July 5, 2015, 10:20 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    unsigned char stA=15, stB=12, stC=9;//prices for each seats
    unsigned short A, B, C;//number of each seats
    unsigned short total;//total income
    
    //input number of each seats
    cout<<"How many A seats?"<<endl;
    cin>>A;
    cout<<"How many B seats?"<<endl;
    cin>>B;
    cout<<"How many C seats?"<<endl;
    cin>>C;
    
    //calculate
    total=stA*A+stB*B+stC*C;
    
    //output the result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Total income for seat is $"<<total<<endl;

    return 0;
}

