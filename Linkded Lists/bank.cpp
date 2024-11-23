#include <iostream>
using namespace std;

class BankAcc {
    private:
    string AccNum;
    int AccBal;
    public:
    BankAcc(string acNum, int acBal) {
     AccNum = acNum;
     AccBal = acBal;
    }
    // getter function
    double getBalance(){
        return AccBal;
    }
    // mrthod to deposit money
    void deposit(int amount) { 
        if(amount > 0) {
            AccBal += amount;
            cout<<"Deposited"<<amount<<endl;
        }else{
            cout << "Invalid amount to deposit" << endl;
        }
    }
    // withdraw amount
    void withdraw(double amount) {
        if(amount > 0 && amount <= AccBal) {
            AccBal -= amount;
        }else{
            cout << "Invalid amount to withdraw" << endl;
        }
    }
};


int main(){
    BankAcc acc("1234567890", 1000);
    cout << "Initial Balance: " << acc.getBalance() << endl;
    acc.deposit(500);
    acc.withdraw(100);
    cout<<"Balance after deposit and withdraw: "<<acc.getBalance()<<endl;
}