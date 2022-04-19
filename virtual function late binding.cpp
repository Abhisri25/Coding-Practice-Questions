//3) WAP to implement virtual function explaining late binding

#include<iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout<<"Base"<<endl;
    }
};

class B : public A
{
public:
    virtual void show()
    {
        cout<<"Child"<<endl;
    }
};

int main()
{
    B c;
    c.show();
    A *p;
    B *q;
    p = &c;
    p->show();
    return 0;
}
