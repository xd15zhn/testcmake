#include "div.hpp"
#include "sub.hpp"
#include "add.hpp"

double fcndiv(double a, double b)
{
    return fcnsub(a, b) / fcnadd(a, b);
}
