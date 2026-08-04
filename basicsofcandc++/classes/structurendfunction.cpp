#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialise(Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area(Rectangle r)
{
    return r.breadth * r.length;
}
int perimeter(Rectangle r)
{
    int p = 2 * (r.length + r.breadth);
    return p;
}
int main()
{
    Rectangle r = {0, 0};
    int l, b;
    printf("Enter length and breadth: ");
    cin >> l >> b;

    initialise(&r, l, b);
    int myArea = area(r);
    int myPerimeter = perimeter(r);
    printf("Area: %d\n Perimeter: %d", myArea, myPerimeter);

    return 0;
}