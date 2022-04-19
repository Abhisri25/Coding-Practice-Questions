#include<iostream>
using namespace std;

class A
{
public:
    int a, b, c, d, e, f;

    void get()
    {
        cout<<"Enter marks for 6 subjects :"<<endl;
        cin>>a>>b>>c>>d>>e>>f;
    }
};

class B : public A
{
public:
    int x;
    
    void getd()
    {
        cout<<"Enter marks for sports"<<endl;
        cin>>x;
    }
};

class C : public B
{
public:
    int avg;

    void display()
    {
        avg = (a+b+c+d+e+f+x)/7;
        cout<<"The average is :"<<avg<<endl;
    }
};

int main()
{
    C avrg;
    avrg.get();
    avrg.getd();
    avrg.display();
    return 0;
}
