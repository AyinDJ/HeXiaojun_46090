/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap3_Prog4
 *
 * Created on July 5, 2015, 10:41 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variables
    char m1, m2, m3;//the number of month
    float m1r, m2r, m3r, ave;//amount of rain and average
    
    //input month and rain
    cout<<"Enter the month 1 :"<<endl;
    cin>>m1;
    cout<<"Enter the month 2 :"<<endl;
    cin>>m2;
    cout<<"Enter the month 3 :"<<endl;
    cin>>m3;
    cout<<"Enter the amount of rain of "<<m1<<"in inches :"<<endl;
    cin>>m1r;
    cout<<"Enter the amount of rain of "<<m2<<"in inches :"<<endl;
    cin>>m2r;
    cout<<"Enter the amount of rain of "<<m3<<"in inches :"<<endl;
    cin>>m3r;
    
    //calculate
    ave=(m1r+m2r+m3r)/3;
    
    //output the result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The average of rain of "<<m1<<", "<<m2<<" and "<<m3<<" is "<<ave<<"inches."<<endl;
    

    return 0;
}

