#include <iostream>
using namespace std;
int main()
{
    // how to declare and initialize a array.

    int a[5];
    int b[5] = {2, 4, 6, 8, 10};
    int c[5] = {2, 4};
    int d[5] = {0};
    int e[] = {2, 4, 6, 8, 10, 12, 14};

    // how to access the elements of an array.

    // 1. using array name and index.
    cout << b[2] << endl; // output = 6
    cout << e[5] << endl; // output = 12

    // 2. using for loop
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // 3.using pointer arithmetic.
    cout << *(b + 0) << " ";
    cout << *(b + 1) << " ";
    cout << *(b + 2) << " ";
    cout << *(b + 3) << " ";
    cout << *(b + 4) << " " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(b + i) << " " << endl;
    }

    // initialization and accessing using users input.

    int num;
    cout << "Enter array size: ";
    cin >> num;
    int myarr[num];

    // passing input
    
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter "<<i<< " element: ";
        cin >> myarr[i];
    }

    // printing the output

    for (int i = 0; i < num; i++)
    {
        cout << myarr[i] << " ";
    }

    return 0;
}
