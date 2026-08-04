#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int Length = 0, breadth = 0;
    printf("Enter Length and Breadth: ");
    cin >> Length >> breadth;
    int area = Length * breadth;
    int perimeter = 2 * (Length + breadth);
    printf("Area: %d\n Perimeter: %d", area, perimeter);
    return 0;
}
