#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    // Constructor with error checking
    BankAccount(const string& accountHolder, double initialBalance)
        : name(accountHolder), balance(initialBalance) {
        cout << "Constructor called for: " << name << endl;
        if (initialBalance < 0) {
            throw invalid_argument("Error: Initial balance cannot be negative.");
        }
    }

    // Destructor
    ~BankAccount() {
        cout << "Destructor called for: " << name << endl;
    }

    // Withdraw method with error checking
    void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error("Error: Insufficient funds for withdrawal.");
        }
        balance -= amount;
        cout << "Withdrawal successful. New balance: $" << balance << endl;
    }
};

int main() {
    cout << "=== Bank Account System ===" << endl;

    // Attempt to create account with negative balance
    BankAccount* acc1 = nullptr;
    try {
        acc1 = new BankAccount("Ali", -100.0);
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    

    cout << "\n---\n" << endl;

    // Valid account & valid withdrawal
    BankAccount* acc2 = nullptr;
    try {
        acc2 = new BankAccount("Sana", 500.0);
        acc2->withdraw(200.0);
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    delete acc2; // memory cleanup

    cout << "\n---\n" << endl;

    // Valid account & invalid withdrawal
    BankAccount* acc3 = nullptr;
    try {
        acc3 = new BankAccount("Kamran", 100.0);
        acc3->withdraw(150.0); // throw
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    delete acc3; // Destructor will be called if acc3 was created

    cout << "\nProgram completed safely." << endl;

    // Pause for VS user
    cout << "Press Enter to exit...";
    cin.get();

    return 0;
}
