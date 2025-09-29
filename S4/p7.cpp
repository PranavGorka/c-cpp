#include <iostream>
using namespace std;

class Time{
    public:
    int hours, min;
    Time(){
        hours = 0;
        min = 0;
    }
    Time(int a, int b) {
        hours = a;
        min = b;
    }
    
    void addTime(Time &t){
        hours = hours + t.hours;
        min = min + t.min;
    }
    void display(){
        cout<< "hours: "<<hours<<endl;
        cout<< "min : "<<min<<endl;
    }
};

int main()
{
    Time t1(2, 20), t2(1, 50);
    t1.display();
    cout<<"after adding: "<<endl;
    t1.addTime(t2);
    t1.display();

    return 0;
}
