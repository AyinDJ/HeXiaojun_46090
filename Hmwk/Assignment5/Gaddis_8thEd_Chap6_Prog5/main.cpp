/* 
 * File:   main.cpp
 * Author: Xiaojun He 
 * Purpose: Gaddis_8thEd_Chap6_Prog5
 *
 * Created on July 12, 2015, 10:40 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes

const float g = 9.8;
float fallingDistance(float);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    int i;
    float time,d;

for (i=0;i<=11;i++){
    time=i+1.0;
    d=fallingDistance(time);
    cout<<setw(5)<<fallingDistance<<endl;
    }	

    return 0;
}


float fallingDistance(float time)
{
float d=(pow(time,2)*g)*.5;
cout<<setw(7)<<d;
return d;
}