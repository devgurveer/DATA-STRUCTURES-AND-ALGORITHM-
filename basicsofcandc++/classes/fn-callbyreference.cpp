#include <iostream>
using namespace std;
// call by reference
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << a << endl
         << b;
    return 0;
}