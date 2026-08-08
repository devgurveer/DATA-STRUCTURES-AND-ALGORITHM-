#include <iostream>
using namespace std;
int main()
{
    int *ptr1 = new int[5];
    int *ptr2 = new int[10];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your " << i << " element: ";
        cin >> *(ptr1 + i);
    }
    cout << "First array of size 5 : ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << *(ptr1 + i);
    }
    cout << endl;

    // copy the ptr1 array to ptr2

    for (int j = 0; j < 5; j++)
    {
        ptr2[j] = ptr1[j];
    }

    // delete memory allocated for ptr1
    delete[] ptr1;

    // point ptr1 towards ptr2
    ptr1 = ptr2;

    // make ptr2 = null
    ptr2 = NULL;

    for (int k = 0; k < 10; k++)
    {
        cout << " "<<*(ptr1 + k);
    }

    // delete final ptr1
    delete[] ptr1;

    return 0;
}