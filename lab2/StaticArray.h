//
//  StaticArray.h
//  lab2
//
//  Created by Eric Gambetta-Guglielmana on 9/14/19.
//  Copyright © 2019 Eric Gambetta-Guglielmana. All rights reserved.
//

#ifndef STATICARRAY_H
#define STATICARRAY_H
#include <iostream>
template <typename T, int CAP>
class StaticArray
{
    
private:
    T values[CAP];
    T dummy;
    
public:
    
    
    StaticArray(){
        dummy = T();
        for(int i = int (); i < CAP; i++)
            values [i] = T();
        
    }
    
    int capacity()const{
        return CAP;
        //sizeof(values)/sizeof(*values);
        
    }
    
    
    T operator [](int index)const{
        if(index < 0) return dummy;
        if(index > CAP) return dummy;
        return values [index];
    }
    
    T& operator [] (int index){
        if(index < 0) return dummy;
        if(index >= CAP) return dummy;
        return values [index];
    }
    
    
};

#endif
