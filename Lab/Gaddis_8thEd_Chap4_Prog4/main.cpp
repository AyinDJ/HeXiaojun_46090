/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog4
 *
 * Created on July 6, 2015, 2:24 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //declare variables
    float l1, l2, w1 ,w2 ,a1, a2;
    
    //input variables
    cout<<"Enter the length and width of No'1 rectangle!"<<endl;
    cin>>l1>>w1;
    cout<<"Enter the length and width of No'2 rectangle!"<<endl;
    cin>>l2>>w2;
    
    //calculate
    a1=l1*w1;
    a2=l2*w2;
    
    //output and Compared
    if(a1==a2)
        cout<<"The two rectangle is same."<<endl;
    else if(a1>a2)
        cout<<"The No'1 rectangle is bigger"<<endl;
    else
        cout<<"the No'2 rectangle is bigger"<<endl;

    return 0;
}

