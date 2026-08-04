#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER SIZE: ";
    cin >> n;
    int a[n];

    // Taking input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Printing output
    cout << "You entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
