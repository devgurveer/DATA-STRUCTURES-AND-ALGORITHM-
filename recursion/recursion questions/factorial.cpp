#include <iostream>
using namespace std;
int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return fact(num - 1) * num;
    }
}
int iFact(int num)
{
    
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    cout << fact(5)<<endl;
    cout << iFact(5);
}