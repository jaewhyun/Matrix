//
//  midterm4.h
//  midterm4
//
//  Created by Jae Won Hyun on 10/25/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//
// edit history:
// methods to calculate the products
#ifndef midterm4_h
#define midterm4_h

// individual products are evaluated in this base class
class MatrixCalc
{
public:
    MatrixCalc(); // default constructor
    int getproductone(int, int, int); // fingure out the individual products
    int getproducttwo(int, int, int);
    int getproductthree(int, int, int);
    int getproductfour(int, int, int);
    int getproductfive(int, int, int);
    int getproductsix(int, int, int);
    
private:
    int productone;
    int producttwo;
    int productthree;
    int productfour;
    int productfive;
    int productsix;
};

#endif /* midterm4_h */
