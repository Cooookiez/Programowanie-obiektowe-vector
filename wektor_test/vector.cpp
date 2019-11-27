#include "vector.h"
#include <iostream>

Vector::Vector()
{
    data = nullptr;
    size = 0;
}

Vector::Vector( const Vector &vector)
{
    size = vector.size;
    data = vector.data;
}

Vector::Vector( size_t size ){
    this->data = new int[size];
    this->size = size;
}

void swap(Vector &v, Vector &u){
    std::swap(v.data, u.data);
    std::swap(v.size, u.size);
}
