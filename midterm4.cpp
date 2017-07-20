//
//  midterm4.cpp
//  midterm4
//
//  Created by Jae Won Hyun on 10/25/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//
// edit history:
// add default constructor
// added methods to deal with each product of the matrix

#include <stdio.h>
#include "midterm4.h"

// default constructor
MatrixCalc::MatrixCalc()
{

}

// calculate and return the product of A11*A22*A33
int MatrixCalc::getproductone(int A11, int A22, int A33)
{
    productone = A11*A22*A33;
    return productone;
}

// calculate and return the product of A21*A32*A13
int MatrixCalc::getproducttwo(int A21, int A32, int A13)
{
    producttwo = A21*A32*A13;
    return producttwo;
}

// calculate and return the product of A31*A12*A23
int MatrixCalc::getproductthree(int A31, int A12, int A23)
{
    productthree = A31*A12*A23;
    return productthree;
}

// calculate and return the product of A13*A22*A31
int MatrixCalc::getproductfour(int A13, int A22, int A31)
{
    productfour = A13*A22*A31;
    return productfour;
}

// calculate and return the product of A21*A12*A33
int MatrixCalc::getproductfive(int A21, int A12, int A33)
{
    productfive = A21*A12*A33;
    return productfive;
}

// calculate and return the product of A11*A32*A23
int MatrixCalc::getproductsix(int A11, int A32, int A23)
{
    productsix = A11*A32*A23;
    return productsix;
}
