/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog7
 *
 * Created on July 12, 2015, 2:19 PM
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
    unsigned short day;
    float pay=0.01,totpay;
    
    //input days
    cout<<"Enter how many days worked"<<endl;
    cin>>day;
    
    if(day<=1){
        cout<<"Invalid days entered"<<endl;
    }else{
        //Loop to calculate the salary
         cout<<"Day      Salary"<<endl;
         cout<<"  1          0.01"<<endl;
        for(unsigned short i=2;i<=day;i++){
            pay*=2;
            totpay+=pay;
            cout<<setw(3)<<i<<"        "<<setw(6)<<pay<<endl;
        }     
        cout<<"The total salary is $"<<totpay<<endl;
    }
    return 0;
}