#include <iostream>
using namespace std;

class Person {
    public:
        string name;
};

// Account is connecter to person
class Account : public Person {
    private:
        int balance = 0;
    public:
        Account() {
            cout << "Account Created..." << endl;
        }
        
        void deposit(int amount) {
            balance += amount;
            cout << "Deposited $" << amount << endl;
        }
        void withdraw(int amount) {
            balance -= amount;
            cout << "withdrew $" << amount << endl;
        }
        int getBalance() {
            return balance;
        }
};

int main() {
    
    Account account;

    while (true) {

        cout << "1: Create account" << endl;
        cout << "2: Deposit" << endl;
        cout << "3: Withdraw" << endl;
        cout << "4: Print account" << endl;
        cout << "5: Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter name: ";
            cin >> account.name;
            break;

        case 2:
            int amount;
            cout << "Enter amount: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 3:
            int amount2;
            cout << "Enter amount: ";
            cin >> amount2;
            account.withdraw(amount2);
            break;

        case 4:
            cout << account.name << endl;
            cout << account.getBalance() << endl;
            cin.ignore();
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}