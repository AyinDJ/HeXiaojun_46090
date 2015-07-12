/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog10
 *
 * Created on July 12, 2015, 3:40 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    unsigned short year;
    float rain, train=0;  //monthly rainfall and total rainfall
    unsigned short month;
    float average;
    
    //input year
    cout<<"Enter the period of years"<<endl;
    cin>>year;
    
    //Loop
    if(year<1){
        cout<<"Invalid year entered"<<endl;
        return 1;
    }else{
        for(unsigned short i=1; i<=year; i++){
            for(unsigned short j=1; j<=12; j++){
                cout<<"Enter the rainfall for Month "<<j<<" in "<<"Year "<<i<<endl;
                cin>>rain;
                if(rain<0){
                    cout<<"Invalid input"<<endl;
                    return 1;
                }else{
                    train+=rain;
                }
            }
        }    
    }
    month=year*12;
    average=train/month;
    
    //Output the result
    cout<<"There are "<<month<<" months"<<endl;
    cout<<"The total rainfall of this period is "<<train<<endl;
    cout<<"The average rainfall per month is "<<average<<endl;
    
    return 0;
}