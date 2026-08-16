#include <iostream>
using namespace std;
// Tower of hanoi problem.
void Toh(int n, int a, int b, int c)
{
    if (n > 0)
    {
        Toh(n - 1, a, c, b);
        cout << "FROM " << a
             << " TO " << c
             << " USING " << b << endl;
        Toh(n - 1, b, a, c);
    }
}
int main()
{
    Toh(3, 1, 2, 3);
    return 0;
}