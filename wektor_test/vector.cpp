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
void Vector::swap(Vector &v, Vector &u){
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

Vector& Vector::operator=(Vector u){
    swap(*this, u);
    return *this;
}
int& Vector::operator[] (size_t n){ return this->data[n]; }
int Vector::operator[] (size_t n) const { return this->data[n]; }

Vector Vector::operator+(const Vector& u){
    if( this->size != u.size)
        throw "vector have different sizes!";

    for(size_t i = 0; i < this->size; i++)
        this->data[i] += u.data[i];

    return *this;
}

