/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog3
 *
 * Created on June 28, 2015, 7:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float staTax=0.04; //State Sale Tax
    float couTax=0.02; //county sale Tax
    float total=95; //The total
    float allTax; //All the tax should pay
    //calculate the Tax
    allTax=total*(staTax+couTax);
    //output the results
    cout<<"All the tax should pay is $"<<allTax<<endl;

    return 0;
}

