#include <iostream>
#include <stdio.h>
using namespace std;
// question 5 = What will be the output of the following C program?
//  void count(int n)
//  {
//          static int d = 1;
//  printf("%d", n);
//  printf("%d", d);
//  d++;
//  if (n > 1) count (n-1);
//  printf("%d", d);
//           }
//  void main( )
//         {
//    count (3);}

void count(int n)

{

    static int d = 1;

    printf("%d", n);

    printf("%d", d);

    d++;

    if (n > 1)
        count(n - 1);

    printf("%d", d);
}

int main()
{
    count(3);
}
