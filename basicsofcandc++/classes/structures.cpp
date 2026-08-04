#include <iostream>
using namespace std;
int main()
{
    class Rectangle
    {
    public:
        int length;
        int breadth;
    };

    Rectangle s1 = {10,5};
    cout<<s1.length*s1.breadth<<endl;
    s1.length = 5;
    s1.breadth = 5;
    cout<<s1.length*s1.breadth<<endl;

  class student{
    public:
    string name;
    int rollno;
    string dept;
    string address;
  };

  student s2 = {"Gurveer",28,"cse","48 state bank society"};
  cout<<s2.address;
  
    return 0;
}