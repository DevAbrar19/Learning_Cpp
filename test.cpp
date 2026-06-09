#include <iostream>
#include <cmath>

double balance = 0.0;

void deposit(double amount);
void withdraw(double amount);
void showBalance();

int main()
{
    while (true)
    {
        char c;
        std::cout << "(S) Show Balance\n(D) Deposit\n(W) Withdraw\n(X) Cancel" << std::endl;
        std::cin >> c;

        std::cin.clear();
        fflush(stdin);

        if (c == 'D' || c == 'd')
        {
            double amount;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            deposit(amount);
        }
        else if (c == 'W' || c == 'w')
        {
            double amount;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            withdraw(amount);
        }
        else if (c == 'S' || c == 's')
        {
            showBalance();
        }
        else if (c == 'X' || c == 'x')
        {
            break;
        }
        else
        {
            std::cout << "Invalid choice";
        }
    }

    return 0;
}

void deposit(double amount)
{
    balance += amount;
}

void withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
    }
    else
    {
        std::cout << "Not enough balance!" << std::endl;
    }
}

void showBalance()
{
    std::cout << "Your Balance is : " << balance << std::endl;
}
