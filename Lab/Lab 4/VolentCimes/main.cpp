/* 
 * File:   main.cpp
 * Author: Xiaojun He
 *Purpose: Calculate the percentage of Violent Crimes
 * Created on June 25, 2015, 12:26 PM
 */

#include <iostream>//System libraries
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float VCinUS=1.188e7; //The Violent Crimes in US
    float VCinUK=6.52e6;  //The Violent Crimes in UK
    float PoinUS=3.18e8;  //Population in US
    float PoinUK=6.41e7;  //Population in UK
    float PertUS; //the percentage of Violent Crimes in US
    float PertUK; //the percentage of Violent Crimes in UK
    //calculate the percentage of Violent Crime in US and UK
    PertUS=VCinUS/PoinUS*100;
    PertUK=VCinUK/PoinUK*100;
    //output the results
    cout<<fixed<<showpoint<<setprecision(2)
            <<"The percentage of Violent Crimes in US is "<<PertUS<<"%"<<endl;
    cout<<fixed<<showpoint<<setprecision(2)
            <<"The percentage of Violent Crimes in UK is "<<PertUK<<"%"<<endl;
    

    return 0;
}

