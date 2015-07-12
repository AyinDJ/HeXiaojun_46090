/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog1
 *
 * Created on July 12, 2015, 12:24 PM
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    unsigned short num;
    unsigned short sum;
    //input
    cout<<"Enter the number(Do not accept a negative starting number)"<<endl;
    cin>>num;
    //Loop
    for(unsigned short i=1; i<=num; i++)
        sum+=i;
    //Output the result
    cout<<"The sum = "<<sum<<endl;
    
    
    

    return 0;
}

