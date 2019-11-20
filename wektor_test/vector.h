#ifndef VECTOR_H
#define VECTOR_H
#include <cstdlib>

#include <cstddef>
#include <cstdint>

class Vector
{
public:
    int* data;
    size_t size;
    Vector();
    Vector( size_t size );
    Vector( const Vector &vector);
    Vector( Vector &&vector);
    ~Vector() = default;
};

#endif // VECTOR_H
