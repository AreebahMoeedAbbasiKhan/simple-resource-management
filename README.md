
# Bank Account System in C++

A simple C++ program demonstrating the use of **classes**, **constructors**, **destructors**, and **exception handling** in managing bank accounts. The program handles account creation, withdrawals, and errors safely.

## Features

- Create bank accounts with account holder name and initial balance.
- Validate initial balance (throws exception if negative).
- Withdraw funds with error checking (throws exception if insufficient funds).
- Demonstrates proper memory management using dynamic allocation and deletion.
- Shows constructor and destructor calls for better understanding of object lifecycle.

## Files

- `main.cpp` – Main program containing the BankAccount class and test cases.

## Usage

1. Compile the program using a C++ compiler, e.g.:

```bash
g++ main.cpp -o BankAccount
````

2. Run the program:

```bash
./BankAccount
```

3. Follow the on-screen instructions and observe exception handling in different scenarios:

   * Creating an account with negative balance
   * Performing valid withdrawals
   * Attempting withdrawals exceeding the account balance

## Example Output

```
=== Bank Account System ===
Exception caught: Error: Initial balance cannot be negative.

Constructor called for: Sana
Withdrawal successful. New balance: $300

Constructor called for: Kamran
Exception caught: Error: Insufficient funds for withdrawal.

Program completed safely.
```

## Concepts Demonstrated

* C++ Classes and Objects
* Constructors & Destructors
* Exception Handling (`try`, `catch`, `throw`)
* Dynamic Memory Management (`new` and `delete`)
* Basic I/O operations

## Author

Areebah Abbasi

Do you want me to do that?
```
