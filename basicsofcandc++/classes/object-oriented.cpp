#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
};
int main()
{
    int l, b;
    printf("Enter length and breadth: ");
    cin >> l >> b;
    Rectangle r(l, b);
    int a = r.area();
    int b1 = r.perimeter();
    printf("Area: %d\n Perimeter: %d\n", a, b1);
    return 0;
}