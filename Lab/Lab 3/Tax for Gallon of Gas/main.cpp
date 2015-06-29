/* 
 * File:   main.cpp
 * Author: Xiaojun He
 *
 * Created on June 24, 2015, 1:06 PM
 * Purpose: Tax For Gallon Of Gas
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare and initialize variables
    float FedTax=0.18; //Federal tax of gasoline, unite=$
    float CExTax=0.38; //California Ex Tax, unite=$
    float GasPic=3.69; //Price of Gas in California, unite=$
    float BasPri; //Base Price
    float PreTax; //Before Tax
    float AftTax=1.08f; //After California Sale Tax
    float AllTax; //All tax we should pay
    float petTax; //percentage of tax
    //calculate the tax for gallon of gas
    BasPri=GasPic-FedTax-CExTax;
    PreTax=BasPri/AftTax;
    AllTax=BasPri-PreTax+FedTax+CExTax;
    petTax=AllTax/GasPic*100;
    //output the results
    cout<<"All tax we should pay for a gallon gas ="<<AllTax<<endl;
    cout<<"The percentage of tax is "<<petTax<<endl;
    
    

    return 0;
}

