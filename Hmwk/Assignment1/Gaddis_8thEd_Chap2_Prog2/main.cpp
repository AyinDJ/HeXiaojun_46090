/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog2
 *
 * Created on June 28, 2015, 3:46 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float pereat=0.58f; //the percentage of east coast sales
    float comSal=8.6e6f; //the company sales this year
    float estCot; //the east coast sales
    //calculate the sales of east coast
    estCot=pereat*comSal;
    //output the results
    cout<<"East Coast sales $"<<estCot<<"in this year"<<endl;

    return 0;
}

