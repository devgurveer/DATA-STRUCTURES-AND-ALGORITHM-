#include <iostream>
using namespace std;
// normal function
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
int combinationN(int n, int r)
{
    int temp1, temp2, temp3;
    temp1 = fact(n);
    temp2 = fact(r);
    temp3 = fact(n - r);

    return temp1 / (temp2 * temp3);
}
// recursive function
int combinationR(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return combinationR(n - 1, r - 1) + combinationR(n - 1, r);
    }
}
int main()
{
    int myComb = combinationR(4, 3);
    cout << myComb;
    return 0;
}
