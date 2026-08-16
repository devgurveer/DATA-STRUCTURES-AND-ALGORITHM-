#include <iostream>
using namespace std;
// Iterative version
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int t0 = 0, t1 = 1, result;
        for (int i = 2; i <= n; i++)
        {
            result = t0 + t1;
            t0 = t1;
            t1 = result;
        }
        return result;
    }
}
// Recursive fibonacci function.
int Rfib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return Rfib(n - 2) + Rfib(n - 1);
    }
}
// Improved memoize function
int Nfib(int n)
{
    int f[10];
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        return f[n] = Nfib(n - 2) + Nfib(n - 1);
    }
}
int main()
{
    int myVal1 = fib(5);
    cout << myVal1 << endl;
    int myVal2 = fib(5);
    cout << myVal2<<endl;
    int myVal3 = fib(5);
    cout << myVal3;

    return 0;
}