#include <iostream>
using namespace std;

class Account{
    public:
    int balance;
    Account(int a) {
        balance = a;
    }
    
    void transfer(Account *acc){
        acc->balance = acc->balance + balance;
        balance = 0;
    }
    void display(){
        cout<<"balance :"<<balance<<endl;
    }
};
int main()
{
    Account a1(20), a2(40);
    a1.transfer(&a2);
    a2.display();

    return 0;
}
