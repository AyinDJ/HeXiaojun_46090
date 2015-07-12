/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog4
 *
 * Created on July 12, 2015, 1:01 PM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    unsigned short time;
    float cpm=3.6f, tot;//total
    //Loop
    for(unsigned short i=1; i<=30; i++){
        tot+=cpm;
        if(i==10)
            cout<<"After 10min, the calories will be "<<tot<<endl;
        else if(i==15)
            cout<<"After 15min, the calories will be "<<tot<<endl;
        else if(i==20)
            cout<<"After 20min, the calories will be "<<tot<<endl;
        else if(i==25)
            cout<<"After 25min, the calories will be "<<tot<<endl;
        else if(i==30)
            cout<<"After 30min, the calories will be "<<tot<<endl;
    }

    return 0;
}

