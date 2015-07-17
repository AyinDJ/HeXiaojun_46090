/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Parallel Arrays
 *
 * Created on July 15, 2015, 12:38 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void filAry(int [], int);
void prntAry(const int [], int, int);

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 20;
    int array[SIZE];
    
    //Initialize the array
    filAry(array, SIZE);
    
    //Output the initial array
    prntAry(array, SIZE, 10);
    
    //Output the results
    
    //Exit
    return 0;
}

/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print an integer array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The integer Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */
void prntAry(const int a[],int n,int nCols){
    //Separate outputs with a line
    cout<<endl;
    nCols = 10;
    
    //Loop and output every element in the array
    for(int i = 0; i < n; i++){
        cout<<fixed<<setw(3);
        cout<<a[i]<<" ";
        
        //When column is reached go to next line
        if((i % nCols)==(nCols - 1))cout<<endl;
    }
    
    //Separate outputs with a line
    cout<<endl;
}

/*******************************************
 ************ Fill Array *******************
 ********************************************
 * Purpose: Show how to comment a function
 * Input:
 *      a-> Example input pass by value
 * Input-Output:
 *      b-> Example input-output pass by reference
 * Output:
 *      c-> 
 *******************************************/

void filAry(int a[], int n){
    //Declare variables
    int x = 1;
    int y = 1;
    
    //Loop array
    for(int i = 0; i < 10; i++) {
        a[i] = x;
        x++;
    }
    for(int i = 10; i < n; i++) {
        a[i] = y * y;
        y++;
        
    }
}