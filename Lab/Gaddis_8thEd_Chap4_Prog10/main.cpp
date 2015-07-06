/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap4_Prog10
 *
 * Created on July 6, 2015, 3:37 AM
 */

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*
 * 
 */

//user libraries

//Global constants

//Function prototypes

//Execution begins here


int main(int argc, char** argv) {
    
    //set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    unsigned short op1, op2, result, answer;
    char op;
    bool doAgain;
    
    //Loop based upon continuing to play with the math tutor
    do{
        //Determine op1/op2
        op1=rand()%900+100;//[100-900];
        op2=rand()%900+100;//[100-900];
        op=rand()%5;
        //Display the problem
        cout<<setw(6)<<op1<<endl;
        switch(op){
            case 0:{
                cout<<" + "<<op2<<endl;
                answer=op1+op2;
                break;
            }
            case 1:{
                cout<<" - "<<op2<<endl;
                answer=op1-op2;
                break;
            }
            case 2:{
                cout<<" * "<<op2<<endl;
                answer=op1*op2;
                break;
            }
            case 3:{
                cout<<" / "<<op2<<endl;
                answer=op1/op2;
                break;
            }
            case 4:{
                cout<<" % "<<op2<<endl;
                answer=op1%op2;
                break;
            }
            
        }
        cout<<"-----"<<endl;
        //Input the value for the sum
        cin>>result;
        //If correct output Congratulations else try again?
        if(result==op1+op2){
            cout<<"Congratulations"<<endl;
        }else{
            cout<<"Wrong answer"<<endl;
            cout<<"The answer was = "<<answer<<endl;
        }
        //Prompt if they would like to continue
        cout<<endl<<"Would you like to continue y/n"<<endl;
        char response;
        cin>>response;
        if(response=='y')doAgain=true;
        else doAgain=false;
    }while(doAgain);

    return 0;
}