#ifndef VECTOR_H
#define VECTOR_H
#include <cstdlib>

class Vector
{
public:
    int* data;
    size_t size;
    Vector();
    Vector( size_t size );
    Vector( const Vector &vector);
    Vector( Vector &&vector);
    ~Vector();
};

#endif // VECTOR_H
