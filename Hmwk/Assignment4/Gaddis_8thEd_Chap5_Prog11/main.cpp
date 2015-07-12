/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog11
 *
 * Created on July 12, 2015, 3:51 PM
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
    unsigned int number;  //Starting number of organisms
    float rate;           //Daily increase rate
    unsigned short day;  //Number of days 
    
    //Input variables
    cout<<"Enter the starting number of organisms: "<<endl;
    cin>>number;
    cout<<"Enter the daily increase rate as a percentage: "<<endl;
    cin>>rate;
    cout<<"Enter the days they will multiply: "<<endl;
    cin>>day;
    cout<<"Day          Population"<<endl;
    if(number<2 || rate<0 || day<1){
        cout<<"Invalid input"<<endl;
        return 1;
    }else{
        //Loop
        for(unsigned short i=1; i<=day; i++){
            number*=(1+(rate/100));
            cout<<setw(3)<<i<<"   "<<setw(15)<<number<<endl;
        }
    }
    
    return 0;
}