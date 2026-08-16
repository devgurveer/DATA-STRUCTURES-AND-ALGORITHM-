#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}
// combination formula
int combN(int n, int x)
{
    int temp1, temp2, temp3;
    temp1 = fact(n);
    temp2 = fact(x);
    temp3 = fact(n - x);

    return temp1 / (temp2 * temp3);
}
// recursive function for Combination formula
int combR(int n, int x)
{
    if (n == 0 || n == x)
    {
        return 1;
    }
    else
    {
        return combR(n - 1, x - 1) + combR(n - 1, x);
    }
}
int main()
{
    int myVal1 = combN(5, 2);
    cout << myVal1<<endl;
    int myVal2 = combN(5, 2);
    cout << myVal2;

    return 0;
}