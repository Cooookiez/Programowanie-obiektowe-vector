#ifndef VECTOR98_H
#define VECTOR98_H

#include <cstdlib>

#include <cstddef>
#include <cstdint>

class Vector98
{
public:
    int* data;
    size_t size;
    Vector98();
    Vector98( size_t size );
    Vector98( const Vector98 &vector);
    Vector98( Vector98 &&vector);
    ~Vector();
};


#endif // VECTOR98_H
