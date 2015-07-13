/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap6_Prog6
 *
 * Created on July 12, 2015, 11:06 PM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes

float energy(float,float);
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float mass, speed;
    
    //input variables
    cout<<"Enter the mass and velocity per second of the object"<<endl;
    cin>>mass>>speed;
    
    //display the result
    cout<<"The kinetic energy is "<<energy(mass,speed)<<"(j)"<<endl;

    return 0;
}

float energy(float mass, float speed){
    return 0.5*mass*speed*speed;
}
