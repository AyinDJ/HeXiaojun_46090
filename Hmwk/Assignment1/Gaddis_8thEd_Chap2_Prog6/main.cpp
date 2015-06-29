/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog6
 *
 * Created on June 28, 2015, 8:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float payamt=2200; //each pay period
    float paytim=26; //pay times of a year
    float annpay; //total annual pay
    //calculate
    annpay=payamt*paytim;
    //output the results
    cout<<"The total annual pay is $"<<annpay<<endl;
    

    return 0;
}

