/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose:  Eventually to play the game of craps
 *
 * Created on July 7, 2015, 12:36 PM
 */

//System Library
#include <iostream>//I/O
#include <iomanip>
#include <cstdlib> //Random 
#include <ctime>   //Time
using namespace std;

//User Libraries

//Global constants

//Function Prototypes
unsigned char roll(unsigned char,unsigned char);
void plyCrap(unsigned int,unsigned int &,
             unsigned int &,unsigned int &);
void display(unsigned int,unsigned int,
             unsigned int,unsigned int,
             unsigned int);

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    unsigned int nGames=36000,win=0,lose=0,plyAgn=0,chkSum=0;
    
    //Play the game of Craps
    plyCrap(nGames,win,lose,plyAgn);
    
    //Calculate the total of all the games as a check
    chkSum=win+lose;
    
    //Display the results
    display(nGames,win,lose,plyAgn,chkSum);
    
    //Exit stage right
    return 0;
}

/**********************************************************
*********************** display ***************************
*********************************************************** 
 * Purpose:  To display the results
 * Input 
 *      nGames -> Number of games to play
 *      win    -> Number of wins
 *      lose   -> Number of loses
 *      plyAgn -> Number of times we rolled more than once
**********************************************************/
void display(unsigned int nGames,unsigned int win,
             unsigned int lose,unsigned int plyAgn,
             unsigned int chkSum){
    //Display the results
    cout<<"Out of "<<nGames<<" we win  "<<setw(5)<<win<<" times"<<endl;
    cout<<"Out of "<<nGames<<" we lose "<<setw(5)<<lose<<" times"<<endl;
    cout<<"Out of "<<nGames<<" we roll again "<<setw(5)<<plyAgn<<" times"<<endl;
    cout<<"Check sum = "<<chkSum<<endl;
}

/**********************************************************
*********************** plyCrap ***************************
*********************************************************** 
 * Purpose:  To Play the game of Craps, 
 * Input 
 *      nGames -> Number of games to play
 * Outputs
 *      win    -> Number of wins
 *      lose   -> Number of loses
 *      plyAgn -> Number of times we rolled more than once
**********************************************************/
void plyCrap(unsigned int nGames,unsigned int &win,
             unsigned int &lose,unsigned int &plyAgn){
    //Play the game
    for(int game=1;game<=nGames;game++){
        //Roll the Dice
        int sum=roll(6,2);
        //Winner, Loser or roll again
        switch(sum){
            case 7:case 11: win++; break;
            case 2:case 3:case 12: lose++;break;
            default:
                //Roll Again
                plyAgn++;
                bool rollAgn=true;
                do{
                    int sum2=roll(6,2);
                    if(sum==sum2){
                         win++;
                         rollAgn=false;
                    }else if(sum2==7){
                            lose++;
                            rollAgn=false;
                    }
                }while(rollAgn);
        }
    }
}

/**********************************************************
***********************  roll  ****************************
*********************************************************** 
 * Purpose:  Random throw of any number of dice
 * Inputs 
 *      sides -> Number of sides to the dice
 *      nDie  -> Number of dice to throw
 * Output
 *      sum   -> Sum of all the dice throws
**********************************************************/
unsigned char roll(unsigned char sides,unsigned char nDie){
    //Declare the sum the die rolls
    unsigned char sum=0;
    //Loop for each die
    int thrw=0;
    while(++thrw<=nDie){
        sum+=(rand()%sides+1);
    }
    return sum;
}