//
//  bag.h
//  midterm4
//
//  Created by Jae Won Hyun on 10/25/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//
// edit history:
// establish the size of the matrix
// calculate the whole matrix
// add method to return the value of the calculated matrix

#ifndef bag_h
#define bag_h

// entire expression
class Matrix
{
public:
    int matrix[3][3]; // set up matrix
    
    Matrix(); // default constructor
    void setmatrix(); // input values into the matrix
    void calcmatrix(); // calculate the matrix
    int getmatrixvalue(); // return the matrix value
    
private:
    int matrixvalue;
    int A11;
    int A12;
    int A13;
    int A21;
    int A22;
    int A23;
    int A31;
    int A32;
    int A33;
};

#endif /* bag_h */
