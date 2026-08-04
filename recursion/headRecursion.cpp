#include <iostream>
#include <stdio.h>
using namespace std;
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        printf("%d ", n);
    }
}
int main()
{
    int x = 5;
    fun2(x);
    return 0;
}