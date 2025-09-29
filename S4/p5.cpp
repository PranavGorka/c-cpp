#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    int marks;
    string name;
    Student(){
        marks = 0;
        name = "";
    }
    
    Student(int a, string b) {
        marks = a;
        name = b;
    }
    void display(){
        cout<< "name: "<<name<<endl;
        cout<< "marks : "<<marks<<endl;
    }
};

Student compare(const Student &s1, const Student &s2){
    if (s1.marks > s2.marks){
        return s1;
    }else {
        return s2;
    }
}

int main()
{
    Student s1(98, "pranav"), s2(94, "saksham");
    Student s3;
    s3 = compare(s1, s2);
    s3.display();
    

    return 0;
}
