/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap3_Prog5
 *
 * Created on July 5, 2015, 11:25 PM
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
    float M, F, number;
    float mpes, fpes;
    
    //input the number of class, males number females.
    cout<<"How many people in the class?"<<endl;
    cin>>number;
    cout<<"How many people of males in the class?"<<endl;
    cin>>M;
    cout<<"How many people of females in the class?"<<endl;
    cin>>F;
    
    //calculate
    mpes=(M/number)*100;
    fpes=(F/number)*100;
    
    //output the result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The percentage of males in the class is "<<mpes<<"%"<<endl;
    cout<<"The percentage of females in the class is "<<fpes<<"%"<<endl;
    

    return 0;
}

