/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap3_Prog1
 *
 * Created on July 5, 2015, 10:05 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variable
    float gal, mile, mpg;
    
    cout<<"Type the number of gallons of gas: "<<endl;
    cin>>gal;
    cout<<"Type the number of miles for driven on a full tank:"<<endl;
    cin>>mile;
    
    //Calculate
    mpg=mile/gal;
    
    //output the result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your mpg is "<<mpg<<endl;

    return 0;
}

