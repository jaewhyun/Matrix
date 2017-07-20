//
//  main.cpp
//  midterm4
//
//  Created by Jae Won Hyun on 10/25/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//
// edit history
// add cout to alert users about what the program does
// add method to input the user input into the matrix
// added method to calculate the value of the matrix
// add cout to print value

#include <string>
#include <iostream>
#include "midterm4.h"
#include "bag.h"
using namespace std;

// accepts user values
int main()
{
    cout << "This program takes numbers into a 3x3 matrix and calculates a single scalar answer";
    cout << "The format will be: \n";
    cout << "A11     A12     A13 \n";
    cout << "A21     A22     A23 \n";
    cout << "A31     A32     A33 \n";

    // establish new matrix
    Matrix A;
    // set up matrix A with user input data
    A.setmatrix();
    
    // calculate the matrix
    A.calcmatrix();
    
    // output the single scalar answer
    cout << "The single scalar answer of this matrix is: " << A.getmatrixvalue() << endl;
}
