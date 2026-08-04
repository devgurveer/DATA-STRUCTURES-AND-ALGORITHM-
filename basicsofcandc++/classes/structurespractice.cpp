#include<iostream>
using namespace std;
int main(){
    class rectangle{
        public:
        int length;
        int breadth;
        char x;
    };
    

    rectangle r1 = {10,5};
    cout<<"Area: "<< (r1.length*r1.breadth);
    return 0;
}

