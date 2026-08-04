#include<iostream>
using namespace std;
int main(){
    
    int a = 10;
    int *p;
    p = &a;
    // cout<<*p<<a;

    // assigning a pointer to the array
    int *arr;
    arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        // cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        // cout<<arr[i]<<endl;
    }

    int *p1;
    float *p2;
    char *p3;
    double *p4;
    cout<<sizeof(p1);
    cout<<sizeof(p2);
    cout<<sizeof(p3);
    cout<<sizeof(p4);
    // int arr[10];
    // int *p;
    // p = arr; // array & is not used because arr always points to address of first element.


}