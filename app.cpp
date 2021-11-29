/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jazz Faye Olario
 */

#include "std_lib_facilities.h"

int main(){

    int n; //Declaration of variables

    cout << "Please enter a number: "; 
    cin >> n;
    if ((n % 2) == 0){ //If the number is divided by 2 and has no remainder
        cout << "The value " << n << " is an even number."; //Prints that the number is even
    }else{
        cout << "The value " << n << " is an odd number."; //Otherwise, the number is odd
    }

    return 0;

}