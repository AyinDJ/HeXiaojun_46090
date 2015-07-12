/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * purpose: Gaddis_8thEd_Chap5_Prog9
 *
 * Created on July 12, 2015, 3:26 PM
 */

#include <iostream>

using namespace std;

//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short floor; //how many floors the hotel has
    unsigned short nRoom; //how many rooms on each floor
    unsigned short noroom,totoc; //number of occupied rooms on the floor
    unsigned short nuroom, totuo; //number of unoccupied rooms
    unsigned short totro=0;
    float roPect;
    //input variables
    cout<<"How many floors does the hotel have?"<<endl;
    cin>>floor;
    
    //Loop to calculate and display the rooms
    for(unsigned short i=1; i<=floor; i++){
        if(i==13){
            cout<<"There is no rooms on Floor 13."<<endl;
        }
        else{
            cout<<"How many rooms on floor "<<i<<endl;
            cin>>nRoom;
            totro+=nRoom;
            cout<<"How many rooms are occupied?"<<endl;
            cin>>noroom;
            totoc+=noroom;
            nuroom=nRoom-noroom;
            totuo+=nuroom;
        }
    }
    roPect=static_cast<float>(totoc)/totro;
    
    //Display the result
    cout<<"The hotel has "<<totro<<" rooms."<<endl;
    cout<<"There are "<<totoc<<" rooms are occupied."<<endl;
    cout<<"The percentage of occupied is "<<roPect*100<<"%."<<endl;

    return 0;
}