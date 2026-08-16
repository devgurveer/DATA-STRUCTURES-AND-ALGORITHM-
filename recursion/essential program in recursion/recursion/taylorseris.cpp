#include <iostream>
using namespace std;

double taylorSeries(double x, double n)
{
    static double p = 1, f = 1;
    double result;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        result = taylorSeries(x, n - 1);
        p = p * x;
        f = f * n;
        return (result + p/f);
    }
}
int main()
{
    double myNum = taylorSeries(2,10);
    cout<<myNum;
    return 0;
}