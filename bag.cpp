//
//  bag.cpp
//  midterm4
//
//  Created by Jae Won Hyun on 10/25/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//
// edit history:
// add method to set matrix with user input
// add method by using base class functions to calculate for the whole matrix
// add method to return matrix value

#include <stdio.h>
#include <iostream>
#include "bag.h"
#include "midterm4.h"
using namespace std;

// default constructor
Matrix::Matrix()
{

}

// input values into the 3x3 matrix
void Matrix::setmatrix()
{
    // for the matrix size
    for(int i = 0; i < 3; i++)
    {
        cout << "Please enter the value for \n";
        
        for(int j = 0; j < 3; j++)
        {
            // declare input variable
            int input;
            cout << "A" << i+1 << j+1 <<" value: ";
            cin >> input;
            // if the input is good and not the end
            if(!cin.eof() && cin.good())
            {
                // input values into the matrix
                matrix[i][j] = input;
            }
            else
                cout<<"Either EOF or invalid input\n" << endl;
        }

    }
    
    A11 = matrix[0][0];
    A12 = matrix[0][1];
    A13 = matrix[0][2];
    A21 = matrix[1][0];
    A22 = matrix[1][1];
    A23 = matrix[1][2];
    A31 = matrix[2][0];
    A32 = matrix[2][1];
    A33 = matrix[2][2];
    
    // check if the matrix is set
    //for(int i = 0; i < 3; i++)
    //{
        //cout << "\n";
        //for(int j = 0; j < 3; j++)
        //{
            //cout << matrix[i][j];
        //}
    //}
}

// calculate the matrix (bring in base class)
void Matrix::calcmatrix()
{
    MatrixCalc A;
    matrixvalue = A.getproductone(A11, A22, A33) + A.getproducttwo(A21, A32, A13) + A.getproductthree(A31, A12, A23) - A.getproductfour(A13, A22, A31) - A.getproductfive(A21, A12, A33) - A.getproductsix(A11, A32, A23);
}

// return matrix result
int Matrix::getmatrixvalue()
{
    return matrixvalue;
}
