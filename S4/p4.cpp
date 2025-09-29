#include <iostream>
using namespace std;

class Complex{
    public:
    int real, img;
    Complex(){
        real = 0;
        img = 0;
    }
    Complex(int a, int b) {
        real = a;
        img = b;
    }
    void display(){
        cout<< "real: "<<real<<endl;
        cout<< "img : "<<img<<endl;
    }
};

Complex add(Complex c1, Complex c2){
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main()
{
    Complex c1(1,2), c2(3,4), c3;
    c3 = add(c1, c2);
    c3.display();

    return 0;
}
