//
//  StaticArray.cpp
//  lab2
//
//  Created by Eric Gambetta-Guglielmana on 9/14/19.
//  Copyright © 2019 Eric Gambetta-Guglielmana. All rights reserved.
//

#include "StaticArray.h"
template <typename T, int CAP>
StaticArray<T, CAP>::StaticArray(){
    dummy = T();
    for(int i = 0; i < CAP; i++)
        values[i] = dummy;
}
template <typename T, int CAP>
T StaticArray<T, CAP>::operator[](int index) const{
    if(index < 0 || index >= CAP) return dummy;
    return values [index];
}
template <typename T, int CAP>
T& StaticArray<T, CAP>::operator[](int index){
    if(index < 0 || index >= CAP) return dummy;
    return values[index];
}
