#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int subtract(int a, int b)
{
    int c = a - b;
    return c;
}

int main()
{

    int sum = add(10, 15);
    int sub = subtract(10, 15);
    cout << "subtraction is : " << sub;
    cout << "sum is : " << sum;
    int a = 20;
    int b = 10;
   
   
    return 0;
}