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
    Vector( Vector&& vector);
    ~Vector();

    void swap(Vector &v, Vector &u);

    Vector& operator=(Vector u);
    Vector operator+(/*Vector v, */const Vector& u);

    int& operator[] (size_t n);
    int operator[] (size_t n) const;
};

#endif // VECTOR_H
