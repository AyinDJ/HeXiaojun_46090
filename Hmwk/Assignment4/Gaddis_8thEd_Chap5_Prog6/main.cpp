/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap5_Prog6
 *
 * Created on July 12, 2015, 2:10 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float dis;
    float speed;
    float hours; 
    
    //User input of hours and speed
    cout<<"Enter the MPH:"<<endl;
    cin>>speed;
    cout<<endl;
    cout<<"Enter the hours"<<endl;
    cin>>hours;
    cout<<endl<<endl;

    //Loop
    if(speed>0 && hours>0){
        for(unsigned int time=1;time<=hours;time++){
            dis=time*speed;

            cout<<"When you travel "<<time<<"hours, You drive"<<setw(4)<<dis<<" miles"<<endl;

        }
    }else {
        cout<<"You need to put a positive number for speed and hours."<<endl;
        return 1;
    }
    
    return 0;
}

