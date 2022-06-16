#include "div.hpp"

double fcndiv(double a, double b)
{
    return fcnsub(a, b) / fcnadd(a, b);
}
