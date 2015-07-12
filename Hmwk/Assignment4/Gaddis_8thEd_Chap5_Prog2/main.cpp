/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog2
 *
 * Created on July 12, 2015, 12:36 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare varibales
    unsigned short num=127;
    //Loop
    for(short i=0; i<=127; i++){
        if(i%16==0){
            cout<<"\n";
        }
        cout<<static_cast<char>(i);
    }

    return 0;
}

