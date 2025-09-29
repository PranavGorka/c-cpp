#include <iostream>
using namespace std;

class Box {
    public:
    int length, breadth, height;
    
    Box(){
        length = 0;
        breadth = 0;
        height = 0;
    }
    
    Box(int a, int b, int c) {
        length = a;
        breadth = b;
        height = c;
    }
    void compare(Box b){
        if (length*breadth*height > b.length*b.breadth*b.height){
            cout<<"b1 :"<<length*breadth*height<<endl;
        
        }else{
            cout<<"b2: "<<b.length*b.breadth*b.height<<endl;
        }
    }
};

int main()
{
    Box b1(20,3,4), b2(5,6,2);
    
    b1.compare(b2);

    return 0;
}
