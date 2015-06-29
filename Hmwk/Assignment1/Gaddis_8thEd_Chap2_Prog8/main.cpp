/* 
 * File:   main.cpp
 * Author: Xiaojun He
 * Purpose: Gaddis_8thEd_Chap2_Prog8
 *
 * Created on June 28, 2015, 9:20 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variable
    float price1=15.95; //Price of item 1
    float price2=24.95; //Price of item 2
    float price3=6.95; //Price of item 3
    float price4=12.95; //Price of item 4
    float price5=3.95; //Price of item 5
    float tax=0.07; //the sale tax
    float tax1; //Price after tax of item 1
    float tax2; //Price after tax of item 2
    float tax3; //Price after tax of item 3
    float tax4; //Price after tax of item 4
    float tax5; //Price after tax of item 5
    float total; //total of 5 item
    //calculate
    tax1=price1*(1+tax);
    tax2=price2*(1+tax);
    tax3=price3*(1+tax);
    tax4=price4*(1+tax);
    tax5=price5*(1+tax);
    total=tax1+tax2+tax3+tax4+tax5;
    //output the results
    cout<<"The Price after tax of item 1 is $"<<tax1<<endl;
    cout<<"The Price after tax of item 2 is $"<<tax2<<endl;
    cout<<"The Price after tax of item 3 is $"<<tax3<<endl;
    cout<<"The Price after tax of item 4 is $"<<tax4<<endl;
    cout<<"The Price after tax of item 5 is $"<<tax5<<endl;
    cout<<"The total of 5 item is $"<<total<<endl;
    

    return 0;
}

