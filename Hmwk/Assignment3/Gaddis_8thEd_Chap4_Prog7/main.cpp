/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog7
 *
 * Created on July 6, 2015, 3:05 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //declare variables
    float second, minute, hour, day;
    float stom=60, mtoh=3600, htod=86400;
    
    //input seconds
    cout<<"Enter the number of seconds:"<<endl;
    cin>>second;
    
    //determine how many minutes, hours or days
    if(second>=stom && second<mtoh){
        minute=second/stom;
        cout<<second<<" seconds are "<<minute<<" minutes."<<endl;
    }else if (second>=mtoh && second<htod){
        hour=second/mtoh;
        cout<<second<<" seconds are "<<hour<<" hours."<<endl;
    }else if (second>=htod){
        day=second/htod;
        cout<<second<<" seconds are "<<day<<" days."<<endl;
    }
    

    return 0;
}

