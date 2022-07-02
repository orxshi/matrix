#include <cassert>
#include "matrix.h"

using namespace Matrix;

int main()
{
    Vector3 a(1., 2., 3.);
    Vector3 b(4., -5., 6.);

    double c = dot(a, b); 

    assert(c == 12.);

    return 0;
}
