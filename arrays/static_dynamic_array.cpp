#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int arr[5];     // array created inside the stack memory.
    int *p;         // pointer created inside the stack memory.
    p = new int[5]; // pointer pointing toward the address of array created inside the heap memory.
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i);
    }

    // for c language to point pointer towards array in the heap memory.
    int *ptr;
    // ptr = (int *)malloc(5 * sizeof(int));

    // deallocation
    free(ptr);  // c language
    delete[] p; // c++
    return 0;
}