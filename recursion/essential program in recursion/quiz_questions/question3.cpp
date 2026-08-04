#include <iostream>
#include <stdio.h>
using namespace std;
// question 3 = Question 3:
//  What is the return value of f(p, p), if the value of p is initialised to 5 before the call? Note that the first parameter is passed by reference, whereas the second parameter is passed by value.
// int f (int &x, int c)
// {
//         c = c — 1;
// if (c = = 0) return 1;
// x = x + 1;
// return f(x,c) * x;}

int f(int &x, int c)

{

    c = c - 1;

    if (c == 0)
        return 1;

    x = x + 1;

    return f(x, c) * x;
}

int main()
{
    int p = 5;
    int *ptr = &p;
    int call = f(*ptr,p);
    cout<<call;
    return 0;
}