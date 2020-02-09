//
//  main.cpp
//  lab2
//
//  Created by Eric Gambetta-Guglielmana on 9/14/19.
//  Copyright © 2019 Eric Gambetta-Guglielmana. All rights reserved.
//

#include "StaticArray.h"
#include <iostream>
#include <cassert>

using namespace std;


int main()
{
    cout << "Programmers: Almas Amjad \n";
    cout << "Programmer's ID: 1470401\n";
    cout << "File: " << __FILE__ << endl;
    
    StaticArray <double, 100> a;
    StaticArray <string, 100> b;
    
    cout<< "\nTesting Array""capacity\n";
    cout << "Expected: 100\n";
    cout << "Actual: " << a.capacity() << endl;
    assert(100 == a.capacity());
    
    cout  << "\nTesting the Array::Array\n";
    for(int i = 0; i < a.capacity(); i++)
        assert(a[i] == 0);
    
    cout << "\nTesting the StaticArray::operator[] setter\n";
    a[6] = 6.6;
    //a[7] = 666.6;
    cout << "Expected: 6.6 for a[6]\n";
    cout << "Actual: " << a[6] << endl;
    assert(6.6 == a[6]);
    //cout << "Expected: 666.6 for a[7]\n";
    //cout << "Actual : " << a[7] << endl;
    //assert(7654321 == a[7]);
    a[-1000] = 666.6;
    cout << "Expected: 666.6 for a[-1000] (dummy)\n";
    cout << "Actual: " << a[-1000] << endl;
    assert(666.6 == a[-1000]);
    //assert(12356 == a[6]);
    //assert(7654321 == a[7]);
    //assert(123123 == a[-6]);
    //assert(123123 == a[100]);
    //assert(123123 != a[90]);
    //assert(123123 != a[0]);
    
    cout << "\nTesting the StaticArray::operator[] getter\n";
    
    const StaticArray<double, 100> c = a;
    for(double i =0; i < 100; i++)
        assert(a[i] == c[i]);
    
    /*cout << "\nConst object test\n";
     const StaticArray c;
     assert(c.capacity());
     assert(c[0] == c[0]);
     assert(c[-1] == c[-1]);*/
    
    
    
    return 0;
}
