#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int &r = a;
    r++;
    a--;
    
    
    cout<<endl<<r;
    cout<<endl<<a;
    return 0;
}