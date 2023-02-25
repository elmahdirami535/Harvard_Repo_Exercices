#include <stdio.h>
#include <cs50.h>

/*pactice Problem

Declare a write a function called valid_triangle
that takes three real numbers representing the lengths
of the three sides of a triangle as its arguments, and
outputs either true or false, depending on whether
those three lengths are capable of making a triangle.

Note the following rules about triangles:
 Atriangle may only have sides with positive length.

The sum of the lengths of any two sides of the triangle must
be greater than the length of the third side.
*/

bool valid_triangle(float x, float y, float z);

bool valid_triangle(float x, float y, float z)
{
: // check for all positive sides
if (x <= 0 || y <= 0 || z <= 0)
{
return false;
}
// check that sum of any two sides greater than third
if ((x + y <= z) || (x +z <= y) || (y + z <= x))
{
return false;
}
// if we passed both tests, were good!
return true;
}
