/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap3_Prog8
 *
 * Created on July 6, 2015, 1:07 AM
 */

#include <iostream>


using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variables
    unsigned short cook;
    unsigned short cc, tc;
    
    //input the number of cookies
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cook;
    
    //calculates
    cc=(300*10)/40;
    tc=cc*cook;
    
    //Output the result
    cout<<"the calories you get is "<<tc<<endl;
    
    
    return 0;
}

