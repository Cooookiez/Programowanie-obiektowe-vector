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


Vector::~Vector(){
    size=0;
    data=nullptr;
    }
void swap(Vector &v, Vector &u){
    std::swap(v.data, u.data);
    std::swap(v.size, u.size);
}
Vector::Vector(Vector &&vector)
{
    size=vector.size;
    data=vector.data;
    vector.size=0;
    vector.data=nullptr;
}
