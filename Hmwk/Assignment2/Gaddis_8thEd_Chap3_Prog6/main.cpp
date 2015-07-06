/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap3_Prog6
 *
 * Created on July 5, 2015, 11:57 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variable
    float cs=1.5, cb=1, cf=2.75, ck=48;//number of cups of sugar, butter and flour
    float cook;
    float wcs, wcb, wcf;
    
    //input the number of cookies the you want to make
    cout<<"How many cookies you want to make?"<<endl;
    cin>>cook;
    
    //Calculate
    wcs=(cook/ck)*cs;
    wcb=(cook/ck)*cb;
    wcf=(cook/ck)*cf;
    
    //Output the result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"You should use "<<wcs<<"cup of sugar, "<<wcb<<"cup of butter"<<" and "<<wcf<<"cup of flour"<<endl;
    

    return 0;
}

