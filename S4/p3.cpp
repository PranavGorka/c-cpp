#include <iostream>
using namespace std;

class Circle {
  public:
  int radius;
  
  Circle(int a) {
        radius = a;
        
    }
    void display(){
        cout<< "radius: "<<radius<<endl;
    }
};

void increaseRadius(Circle *c){
    cout<<"before changing: "<<endl;
    c->display();
    
    c->radius = c->radius+5;
    
    cout<<"after changing: "<<endl;
    c->display();
}

int main()
{
    Circle C1(3);
    increaseRadius(&C1);

    return 0;
}
