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

void append(Myarray *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->ptr[arr->length] = x;
        arr->length++;
    }
}

void insert(Myarray *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->ptr[i] = arr->ptr[i - 1];
        }
        arr->ptr[index] = x;
        arr->length++;
    }
}

int Delete(Myarray *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->ptr[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->ptr[i] = arr->ptr[i + 1];
        }
        arr->length--;
    }
    return x;
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

    // append(&arr, 10);
    // insert(&arr, 3, 15);
    cout<<Delete(&arr,4)<<endl;
    display(arr);
    return 0;
}