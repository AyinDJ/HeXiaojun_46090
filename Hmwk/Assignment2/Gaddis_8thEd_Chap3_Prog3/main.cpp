/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap3_Prog3
 *
 * Created on July 5, 2015, 10:32 PM
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
    unsigned short test1, test2, test3, test4, test5;
    float ave;
    
    //input five teat scores
    cout<<"Place enter the scores of each test:"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //calculate
    ave=(test1+test2+test3+test4+test5)/5;
    
    //Output the result
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The average is:"<<ave<<endl;

    return 0;
}

