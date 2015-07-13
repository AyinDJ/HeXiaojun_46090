/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap6_Prog3
 *
 * Created on July 12, 2015, 10:23 PM
 */

#include <iostream>
#include <cstring>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
float gsale(string);
void hhest(float,float,float,float);
 
//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare variables
    float sale1,sale2,sale3,sale4;
    
    //Input the sales for the four divisions
    sale1=gsale("Northeast");
    sale2=gsale("Southeast");
    sale3=gsale("Northwest");
    sale4=gsale("Southwest");
    
    //Output the highest grossing division
    hhest(sale1,sale2,sale3,sale4);

    return 0;
}

float gsale(string name){
    float sale;
    cout<<"Input the "<<name<<" sale's figure: "<<endl;
    cin>>sale;
    if (sale < 0)       
        cout<<"Invalid input"<<endl;
    else
        return sale;
}

void hhest(float sale1,float sale2,float sale3,float sale4){
    if(sale1>sale2 && sale1>sale3 && sale1>sale4){
        cout<<"The highest grossing division is Northeast : $"
            <<sale1<<endl;
    }else if(sale2>sale1 && sale2>sale3 && sale2>sale4){
        cout<<"The highest grossing division is Southeast : $"
            <<sale2<<endl;
    }else if(sale3>sale2 && sale3>sale1 && sale3>sale4){
        cout<<"The highest grossing division is Northwest : $"
            <<sale3<<endl;
    }else if(sale4>sale2 && sale4>sale1 && sale4>sale3){
        cout<<"The highest grossing division is Southwest : $"
            <<sale4<<endl;
    }
}
