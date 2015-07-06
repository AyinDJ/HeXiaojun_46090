/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog2
 *
 * Created on July 6, 2015, 1:59 AM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variables
    unsigned short num;
    
    //input number
    cout<<"Enter a number between 1 and 10."<<endl;
    cin>>num;
    
    //out put the result
    switch(num){
        case 1 : cout << "The Roman number of"<<num<<" is I."<<endl;
        break;
        case 2 : cout << "The Roman number of"<<num<<" is II."<<endl;
        break;
        case 3 : cout << "The Roman number of"<<num<<" is III"<<endl;
        break;
        case 4 : cout << "The Roman number of"<<num<<" is IV."<<endl;
        break;
        case 5 : cout << "The Roman number of"<<num<<" is V."<<endl;
        break;
        case 6 : cout << "The Roman number of"<<num<<" is VI."<<endl;
        break;
        case 7 : cout << "The Roman number of"<<num<<" is VII."<<endl;
        break;
        case 8 : cout << "The Roman number of"<<num<<" is VIII."<<endl;
        break;
        case 9 : cout << "The Roman number of"<<num<<" is IX."<<endl;
        break;
        case 10 : cout << "The Roman number of"<<num<<" is X."<<endl;
        break;
    }

    return 0;
}

