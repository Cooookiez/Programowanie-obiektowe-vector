#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
public:
    Vector();
    Vector( size_t size );
    Vector( const Vector &vector);
    Vector( Vektor &&vector);
    ~Vector();
};

#endif // VECTOR_H
