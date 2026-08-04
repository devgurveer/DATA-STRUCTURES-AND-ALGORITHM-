#include<iostream>
using namespace std;

class Rectangle 
{
    public:
    int length;
    int breadth;
};

// create a pointer to class in heap memory.
class square{
    public:
    int side;
};

int main(){
    Rectangle r;
    Rectangle *ptr;
    ptr = &r;

    ptr->length = 20;
    ptr->breadth = 20;
    cout<<ptr->length;
    cout<<ptr->breadth;

//     square s;
//     square *ptr;
//     ptr = new square;
//     ptr->side = 20;
//     cout<<ptr->side;
}
