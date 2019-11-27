#include <iostream>
#include "vector.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Vector v;
    Vector u{2};
    Vector c{3};

    Vector tmp = u+c;

    return 0;
}
