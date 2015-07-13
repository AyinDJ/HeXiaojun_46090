/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap6_Prog4
 *
 * Created on July 12, 2015, 10:30 PM
 */

#include <iostream>
#include <cstring>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes

int getacc(string);
void lowest(short,short,short,short,short);
 
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    float acc1,acc2,acc3,acc4,acc5;
    
    //Input
    acc1=getacc("north");
    acc2=getacc("south");
    acc3=getacc("east");
    acc4=getacc("west");
    acc5=getacc("central");
    
    //Output
    lowest(acc1,acc2,acc3,acc4,acc5);

    return 0;
}


int getacc(string name){
    float acc;
    cout<<"Enter the "<<name<<" accidents number: "<<endl;
    cin>>acc;
    if (acc < 0)       
        cout<<"Invalid input"<<endl;
    else
        return acc;
}

void lowest(short acc1,short acc2,short acc3,short acc4,short acc5){
    if(acc1<acc2 && acc1<acc3 && acc1<acc4 && acc1<acc5){
        cout<<"The safest driving area is north = "
            <<acc1<<endl;
    }else if(acc2<acc1 && acc2<acc3 && acc2<acc4 && acc2<acc5){
        cout<<"The safest driving area is south = "
            <<acc2<<endl;
    }else if(acc3<acc2 && acc3<acc1 && acc3<acc4 && acc3<acc5){
        cout<<"The safest driving area is east = "
            <<acc3<<endl;
    }else if(acc4<acc2 && acc4<acc3 && acc4<acc1 && acc4<acc5){
        cout<<"The safest driving area is west = "
            <<acc4<<endl;
    }else if(acc5<acc2 && acc5<acc3 && acc5<acc4 && acc5<acc1){
        cout<<"The safest driving area is central = "
            <<acc5<<endl;
    }
}