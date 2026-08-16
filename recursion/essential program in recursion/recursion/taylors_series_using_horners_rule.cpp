#include <iostream>
using namespace std;

// recursive function for taylor series using horners rule.
double hTaylor(double x, double n)
{
    static double result = 1;
    if (n == 0)
    {
        return result;
    }
    else
    {
        result = (1 + (x / n * result));
    }
    return hTaylor(x, n - 1);
}

// iterative version of taylor series using horners rule.
double hITaylor(double x, double n)
{
    double result = 1;
    for (; n > 0; n--)
    {
        result = (1 + (x / n * result));
    }
    return result;
}
int main()
{
    double myVal1 = hTaylor(1, 10);
    cout << myVal1 << endl;
    double myVal2 = hITaylor(1, 10);
    cout << myVal2 << endl;
    return 0;
}