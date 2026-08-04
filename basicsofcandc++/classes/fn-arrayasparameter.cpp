#include<iostream>
using namespace std;
// taking and returning array as a parameter int function.
void fun(int *a , int n){
    int i;
    for(i=0;i<n;i++){
        cout<<a[i];
    }
}
int *fun(int size){
    int *p;
    p = new int[size];
    for(int i =0; i<size;i++){
        p[i] = i+1;
    }
    return p;
}
int main(){
    int *ptr , sz =7;
    ptr = fun(sz);
    for(int i = 0;i<sz;i++){
    cout<<ptr[i]<<endl;
    }
int A[5] = {2,4,6,8,10};
fun(A,5);
    return 0;
}

