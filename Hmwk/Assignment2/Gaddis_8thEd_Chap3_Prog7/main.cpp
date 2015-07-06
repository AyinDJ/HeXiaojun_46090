/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap3_Prog7
 *
 * Created on July 6, 2015, 12:11 AM
 */

#include <iostream>

using namespace std;

//user libraries

//global constants

//function prototype

//execution begins here


int main(int argc, char** argv) {
    //Declare variable
    float wid=12.5;
    float pall, pwithw, number;
    
    //input
    cout<<"How much the pallet weighs by itself?"<<endl;
    cin>>pall;
    cout<<"How weigh the widgets stacked on pallet?"<<endl;
    cin>>pwithw;
    
    //calculate
    number=(pwithw-pall)/wid;
    
    //output the result
    cout<<"There are "<<number<<" widgets."<<endl;

    return 0;
}

