/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog4
 *
 * Created on June 28, 2015, 7:57 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float bill=88.67; //bill for a patron
    float pertax=0.0675; //the percentage of tax
    float pertip=0.2; //the percentage of tips
    float taxant; //The tax amount
    float tipant; //the tip amount
    float total; //the total bill
    //calculate
    taxant=bill*pertax;
    tipant=(taxant+bill)*pertip;
    total=bill+taxant+tipant;
    //output the results
    cout<<"The meal cost is $"<<bill<<endl;
    cout<<"The tax amount is $"<<taxant<<endl;
    cout<<"The tip amount is $"<<tipant<<endl;
    cout<<"The total bill is $"<<total<<endl;
    

    return 0;
}

