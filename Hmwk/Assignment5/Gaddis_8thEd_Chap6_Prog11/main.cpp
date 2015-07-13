/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap6_Prog11
 *
 * Created on July 12, 2015, 11:54 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes

int GtScore(int, int, int &total);
float CalcAve (int, int);
int fndLow (int sArray[5]);
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    int sArray [5];   
    int tScore=0;    
    float avg=0.0f;    
    int lowest=0;    
    int total=0;     
    
    //Populate the array
    for (int i =1; i <= 5; i++)
    { 
       tScore= GtScore(tScore, i, total); 
       sArray[i-1]=tScore; 
    }
    
    //Calculations
    lowest = fndLow(sArray);
    avg = CalcAve(lowest, total);
    
    //Output Unknowns 
    cout<<endl;
    cout<<"The lowest score dropped is: "<<lowest<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Average is "<<avg<<endl;  
    
    //Exit Stage Right! 
    
    return 0;
}

int GtScore(int tScore, int i, int &total) {
    //Input Process
    cout<<"Enter test score for exam number "<<i<<":";
    cin>>tScore; 
    
    //Input Validation 
    while (tScore <0||tScore>100) 
    {
        cout<<"Enter a valid score. Try Again."<<endl;
        cin>>tScore;
    }
    
    //Total of all tests 
    total+=tScore;
    
    return tScore;
}
 
int fndLow (int sArray[5]) {
    //Declare variables 
    int smallest=sArray[0];
    
    //For-loop to determine lowest score
    for (int i =1; i < 5; i++) 
    {
        if (sArray[i]<smallest)
            smallest=sArray[i];
    }
    return smallest;
}

float CalcAve (int lowest, int total) {
    //Declare Variables 
    int sum=0;
    float avg=0.0f;
    
    //Calculate Average
    sum=total-lowest;
    avg=sum/4.0f;
    
    return avg;
}