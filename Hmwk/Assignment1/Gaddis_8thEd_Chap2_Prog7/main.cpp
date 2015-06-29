/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog7
 *
 * Created on June 28, 2015, 8:59 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float risyea=1.5; //Ocean level rising per year
    float years5=5; //five years
    float years7=7; //seven years
    float years10=10; //ten years
    float level5; //Ocean level rising in five years
    float level7; //Ocean level rising in seven years
    float level10; //Ocean level rising in ten years
    //calculates
    level5=risyea*years5;
    level7=risyea*years7;
    level10=risyea*years10;
    //output the results
    cout<<"The Ocean level rising in 5 years is "<<level5<<"mm"<<endl;
    cout<<"The Ocean level rising in 7 years is "<<level7<<"mm"<<endl;
    cout<<"The Ocean level rising in 10 years is "<<level10<<"mm"<<endl;

    return 0;
}

