#include "vector98.h"
#include <iostream>

Vector98::Vector98()
{
    data = nullptr;
    size = 0;
}

Vector98::Vector98( const Vector98 &vector)
{
    size = vector.size;
    data = vector.data;
}

Vector98::Vector98( size_t size ){
    this->size = size;
}

Vector98::~Vector98(){
    size=0;
    data=nullptr;
}

