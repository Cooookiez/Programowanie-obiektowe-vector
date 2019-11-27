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
    ~Vector();
    friend void swap(Vector v, Vector u);

    Vector& operator=(Vector u){
        swap(*this, u);
        return *this;
    }
};

#endif // VECTOR_H
