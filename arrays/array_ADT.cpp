#include <iostream>
using namespace std;
class Myarray
{
public:
    int *ptr;
    int size;
    int length;
};

void display(Myarray arr)
{
    cout << "ARRAY:";
    for (int i = 0; i < arr.length; i++)
    {
        cout << " " << arr.ptr[i];
    }
}
int main()
{
    Myarray arr;
    cout << "Enter size of an array: ";
    cin >> arr.size;
    arr.ptr = new int[arr.size];
    arr.length = 0;

    int num;
    cout << "Enter How many numbers of elements you want to add: ";
    cin >> num;

    cout << "Enter elements: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr.ptr[i];
    }
    arr.length = num;

    display(arr);
    return 0;
}