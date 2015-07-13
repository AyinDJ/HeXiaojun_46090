/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap6_Prog2
 *
 * Created on July 12, 2015, 10:19 PM
 */

#include <iostream>
using namespace std;
//User Libraries
 
//Global Constants
 
//Function Prototypes

void Input (float&,float&);
float Area (float&,float&,float&);
void Display (float&,float&,float&);

//Execution Begins Here!

int main(int argc, char** argv){
    //Declare Variables
    float length=0.0,    
          width=0.0,     
          area=0.0;      
          
    Input(length,width);
    area=Area(length,width,area);
    Display(length,width,area);
          
   return 0;
}

void Input (float &length,float &width){
    cout<<"Enter the length and the width of the rectangle :"<<endl;
    cin>>length>>width;
}

float Area (float &length,float &width,float &area){
	area=length*width;
	return area;
}

void Display (float &length,float &width,float &area){
	cout<<"The length of the rectangle = "<<length<<endl;
	cout<<"The width of the rectangle = "<<width<<endl;
	cout<<"The area of the rectangle = "<<Area(length,width,area)<<endl;
}