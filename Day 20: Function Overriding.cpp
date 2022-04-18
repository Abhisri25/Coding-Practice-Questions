// WAP to implement and demonstrate the concept of function overriding and use any method to access the overridden fucntion

#include<iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout<<"What is your name?"<<endl;
    }
};

class B : public A
{
public:
    void print()
    {
        cout<<"My name is Alice"<<endl;
    }
};

int main()
{
    B obj1;
    obj1.print();
    //method to access the overridden function
    obj1.A::print();
    return 0;
}
