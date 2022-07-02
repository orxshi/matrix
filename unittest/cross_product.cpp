#include <cassert>
#include "matrix.h"

using namespace Matrix;

int main()
{
    Vector3 a(3., -3., 1.);
    Vector3 b(4., 9., 2.);

    Vector3 c = cross(a, b);

    assert(c(0) == -15.);
    assert(c(1) == -2.);
    assert(c(2) == 39.);

    return 0;
}
