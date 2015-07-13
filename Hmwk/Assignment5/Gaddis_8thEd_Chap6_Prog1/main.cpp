/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap6_Prog1
 *
 * Created on July 12, 2015, 10:09 PM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
float retail(float, float);
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float cost, pect;
    
    //input variables
    cout<<"Enter the wholesale cost"<<endl;
    cin>>cost;
    cout<<"Enter the markup percentage"<<endl;
    cin>>pect;
    if(cost<0 || pect<0){
        cout<<"Invalid input"<<endl;
        return 1;
    }else{
    //call function and display result
    cout<<"The retail price is $"<<retail(cost,pect)<<endl;
    }
    return 0;
}
float retail(float cost, float pect){
        return cost*(1+pect);  
}
    