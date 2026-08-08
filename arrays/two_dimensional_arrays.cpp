#include <iostream>
using namespace std;
int main()
{
    // How to initialize two dimensional arrays.

    // 1 Method 1

    int arr1[3][4];

    // How to access these arrays for method 1

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Your " << j << " element: ";
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr1[i][j];
        }
        cout << endl;
    }

    // Method 2 (using array of integer pointers)

    int *arr2[3];
    arr2[0] = new int[5];
    arr2[1] = new int[5];
    arr2[2] = new int[5];

     // How to access these arrays for method 2

      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Your " << j << " element: ";
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr2[i][j];
        }
        cout << endl;
    }

    // method 3 (using the double pointer)

    int **A;
    A = new int *[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    // How to access these arrays for method 3

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter your " << j << " element:";
            cin >> A[i][j];
        }
    }
    cout << "Your elements are: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}