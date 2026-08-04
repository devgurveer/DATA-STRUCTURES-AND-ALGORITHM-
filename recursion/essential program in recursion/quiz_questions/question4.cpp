#include <iostream>
#include <stdio.h>
using namespace std;
// question4 = Consider the following C function.
// Consider the following C function.
// int fun (int n)
//        {
// int x=1, k;
// if (n==1) return x;
// for (k=1; k<n; ++k)
// x=x + fun (k) * fun (n — k);
// return x; }
// The return value of fun (5) is

int fun(int n)

{

    int x = 1, k;

    if (n == 1)
        return x;

    for (k = 1; k < n; ++k)

        x = x + fun(k) * fun(n - k);

    return x;
}
int main()
{
    int num = fun(5);
    cout<<num;
    return 0;
}