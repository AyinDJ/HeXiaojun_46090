/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Multiply Arrays
 *
 * Created on July 15, 2015, 12:40 PM
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
    const int SIZE = 169;
    int array[SIZE];
    
    //Initialize the array
    filAry(array, SIZE);
    
    //Output the initial array
    prntAry(array, SIZE, 0);
    
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
    nCols = 13;
    
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

void filAry(int a[],int n){
    //Declare variable
    int x = 0, y = 1, b = 1, c = 1, d = 1, e = 1,
            f = 1, g = 1, h = 1, j = 1, k = 1,
            l = 1, m = 1;
        
    //Loop on every element and equate to 2 digits
    for(int i = 0; i < n; i++){
        a[i] = x;
        x++;
    }
    for(int i = 13; i < n; i++){
        a[i] = b;
    }
    for(int i = 14; i < n; i++){
        a[i] = b;
        b++;
    }
    for(int i = 26; i < n; i++){
        a[i] = 2;
    }
    for(int i = 27; i < n; i++){
        a[i] = 2 * c;
        c++;
    }
    for(int i = 39; i < n; i++){
        a[i] = 3;
    }
    for(int i = 40; i < n; i++){
        a[i] = 3 * d;
        d++;
    }
    for(int i = 52; i < n; i++){
        a[i] = 4;
    }
    for(int i = 53; i < n; i++){
        a[i] = 4 * e;
        e++;
    }
    for(int i = 65; i < n; i++){
        a[i] = 5;
    }
    for(int i = 66; i < n; i++){
        a[i] = 5 * f;
        f++;
    }
    for(int i = 78; i < n; i++){
        a[i] = 6;
    }
    for(int i = 79; i < n; i++){
        a[i] = 6 * g;
        g++;
    }
    for(int i = 91; i < n; i++){
        a[i] = 7;
    }
    for(int i = 92; i < n; i++){
        a[i] = 7 * h;
        h++;
    }
    for(int i = 104; i < n; i++){
        a[i] = 8;
    }
    for(int i = 105; i < n; i++){
        a[i] = 8 * y;
        y++;
    }
    for(int i = 117; i < n; i++){
        a[i] = 9;
    }
    for(int i = 118; i < n; i++){
        a[i] = 9 * j;
        j++;
    }
    for(int i = 130; i < n; i++){
        a[i] = 10;
    }
    for(int i = 131; i < n; i++){
        a[i] = 10 * k;
        k++;
    }
    for(int i = 143; i < n; i++){
        a[i] = 11;
    }
    for(int i = 144; i < n; i++){
        a[i] = 11 * l;
        l++;
    }
    for(int i = 156; i < n; i++){
        a[i] = 12;
    }
    for(int i = 157; i < n; i++){
        a[i] = 12 * m;
        m++;
    }
}