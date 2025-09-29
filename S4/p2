#include <iostream>
using namespace std;

class Rectangle {
    public:
    int length, breadth; 
    
    Rectangle(int a, int b) {
        length = a;
        breadth = b;
    }
    void display(){
        cout<< "length: "<<length<<endl;
        cout<< "breadth : "<<breadth<<endl;
    }
};

void scale(Rectangle &r){
    r.length = r.length * r.length;
    r.breadth = r.breadth * r.breadth;
}

int main()
{
    Rectangle R1(4, 5);
    R1.display();
    scale(R1);
    R1.display();

    return 0;
}
