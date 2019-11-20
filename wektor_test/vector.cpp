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

Vector::~Vector()
{

}
