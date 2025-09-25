#include <iostream>
using namespace std;

// Bank Account structure
struct BankAccount {
    int accountNumber;
    string holderName;
    double balance;
};

// Global account (for simplicity)
BankAccount account;

// Function to create an account
void createAccount() {
    cout << "Enter Account Number: ";
    cin >> account.accountNumber;
    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, account.holderName);
    account.balance = 0.0; // start with 0
    cout << "✅ Account created successfully!\n";
}

// Function to deposit money
void deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "⚠️ Invalid deposit amount!\n";
        return;
    }
    account.balance += amount;
    cout << "✅ Deposited " << amount << ". New Balance = " << account.balance << endl;
}

// Function to withdraw money
void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "⚠️ Invalid withdrawal amount!\n";
        return;
    }
    if (amount > account.balance) {
        cout << "⚠️ Insufficient balance!\n";
        return;
    }
    account.balance -= amount;
    cout << "✅ Withdrawn " << amount << ". New Balance = " << account.balance << endl;
}

// Function to check balance
void checkBalance() {
    cout << "\n--- Account Info ---\n";
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Holder Name   : " << account.holderName << endl;
    cout << "Balance       : " << account.balance << endl;
}

// Main Menu
int main() {
    int choice;
    bool accountCreated = false;

    while (true) {
        cout << "\n--- Mini Banking System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            createAccount();
            accountCreated = true;
        }
        else if (choice == 2) {
            if (accountCreated) deposit();
            else cout << "⚠️ Please create an account first!\n";
        }
        else if (choice == 3) {
            if (accountCreated) withdraw();
            else cout << "⚠️ Please create an account first!\n";
        }
        else if (choice == 4) {
            if (accountCreated) checkBalance();
            else cout << "⚠️ Please create an account first!\n";
        }
        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "⚠️ Invalid choice!\n";
        }
    }
    return 0;
}
