#include<iostream>
using namespace std;
// call by value.
class Rectangle{
    public:
    int length;
    int breadth;
};

//call by address
class Rectangle1{
    public :
    int length1;
    int breadth1;
};

// returning a pointer to a class
class Rectangle2{
    public:
    int length2;
    int breadth2;
};

Rectangle2 *fun() {
    Rectangle2 *p;
    p = new Rectangle2;
    p->length2 = 15;
    p->breadth2 = 15;
    return p;
}

void fun(Rectangle rect){    // call by value.
    rect.length=20;
    cout<<"Length: "<<rect.length<<endl<<"Breadth"<<rect.breadth<<endl;
}

void fun1(Rectangle1 *p){   // call by address
    p->length1 = 80;
    p->breadth1 = 60;
    cout<<"Length: "<<p->length1<<endl<<"Breadth: "<<p->breadth1<<endl;
}


int main(){

    // Rectangle r = {10,50};
    // cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;
    // fun(r);

    // Rectangle1 r1 = {10,5};
    // fun1(&r1);
    // cout<<r1.length1<<endl<<r1.breadth1;

    // Rectangle2 *ptr = fun();
    // cout<<ptr->breadth2<<endl<<ptr->breadth2;

    return 0;
}
