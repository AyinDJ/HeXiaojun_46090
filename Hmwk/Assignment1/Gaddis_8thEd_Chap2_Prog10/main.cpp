/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog10
 *
 * Created on June 28, 2015, 9:54 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float areegu=43560; //One acre of land
    float tralan=391876; //a tract of land
    float numare; //number of acre in a tract
    //calculate
    numare=tralan/areegu;
    //output the results
    cout<<"A tract of land is "<<numare<<"acre"<<endl;

    return 0;
}

