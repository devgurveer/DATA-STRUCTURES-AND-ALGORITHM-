#include <iostream>
using namespace std;
// question1 = Consider the following  C function
// int f(int n)
// {
// static int i = 1
// if (n>=5)return n;
// n = n+i;
// i++;
// return f(n);
// }
// the value returned by f(1) is
// int f(int n)

int f(int n)
{

    static int i = 1;

    if (n >= 5)
        return n;

    n = n + i;

    i++;

    return f(n);
}
int main()
{
    int num = f(1);
    cout << num;
    return 0;
}