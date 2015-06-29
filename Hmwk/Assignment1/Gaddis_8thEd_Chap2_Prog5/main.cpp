/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose:Gaddis_8thEd_Chap2_Prog5
 *
 * Created on June 28, 2015, 8:21 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float number1=28; //The number 1
    float number2=32; //The number 2
    float number3=37; //The number 3
    float number4=24; //The number 4
    float number5=33; //The number 5
    float average; //The average of this five number
    //calculate
    average=(number1+number2+number3+number4+number5)/5;
    //output the results
    cout<<"the average is "<<average<<endl;

    return 0;
}

