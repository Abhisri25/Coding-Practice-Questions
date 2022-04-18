//WAP to get the complex number using binary operator overloading "+"

#include <iostream>
using namespace std;

class Complex {
   private:
    int r, i;

   public:
    // Constructor to initialize real and imag to 0
    Complex(): r(0), i(0) {}

    void input()
    {
        cout<<"Enter real and imaginary parts respectively: ";
        cin>>r;
        cin>>i;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.r = r + obj.r;
        temp.i = i + obj.i;
        return temp;
    }

    void output()
    {
        if (i < 0)
            cout<< "Output Complex number: "<<r<<i<<"i";
        else
            cout<< "Output Complex number: "<<r<<"+"<<i<< "i";
    }
};

int main()
{
    Complex complex1, complex2, result;

    cout<<"Enter first complex number:\n";
    complex1.input();

    cout<<"Enter second complex number:\n";
    complex2.input();

   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = complex1 + complex2;
    result.output();
    return 0;
}
