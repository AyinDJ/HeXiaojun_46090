/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog9
 *
 * Created on June 28, 2015, 9:38 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float cargas=20; //the car have 20 gallon
    float towmpg=23.5; //mpg in town
    float higmpg=28.9; //mpg in highway
    float distow; //distance the car can travel in town
    float dishig; //distance the car can travel in highway
    //calculate
    distow=cargas*towmpg;
    dishig=cargas*higmpg;
    //output the results
    cout<<"The car can travel in towm "<<distow<<"miles"<<endl;
    cout<<"The car can travel in highway"<<dishig<<"miles"<<endl;
    
    

    return 0;
}

