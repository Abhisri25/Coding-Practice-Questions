//WAP to show multiple inheritance

#include<iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout<<"class A invoked"<<endl;
    }
};

class B
{
public:
    void output()
    {
        cout<<"class B invoked"<<endl;
    }
};

class C : public A,public B
{

};

int main()
{
    C obj1;
    obj1.output();
    obj1.display();
    return 0;
}

/*
#include<iostream>
using namespace std;

class A
{
public:
    void output()
    {
        cout<<"class A invoked"<<endl;
    }
};

class B
{
public:
    void output()
    {
        cout<<"class B invoked"<<endl;
    }
};

class C : public A,public B
{

};

int main()
{
    C obj1;
    objA::output();
    objB::output();
    return 0;
}
*/
