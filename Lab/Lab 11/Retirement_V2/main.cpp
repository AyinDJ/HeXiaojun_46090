/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Retirement Calculator
 *
 * Created on July 8, 2015, 10:46 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000;//Average Salary
    float invRate=0.06f;//Investment Rate -> see Calif Min Bonds
    float savReq;//Savings required at retirement
    float pDep=0.20f;//of your gross salary -> Percentage Depose
    float deposit;//Yearly deposit in $'s
    float savings=0;//Initial savings at start of Employment
    float year=0;//start at year 0
    
    //Calculate required savings
    savReq=salary/invRate;
    
    //Loop to calculate when Retirement is possible
    do{
        deposit=pDep*salary;//Deposit based salary
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;//add the deposit after earning 
        year++;
        
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    //Display the result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //Exit stage Right!
    

    return 0;
}

