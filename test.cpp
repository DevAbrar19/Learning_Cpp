#include <iostream>

int main()
{
    int month;

    std::cout << "Enter your month: ";
    std::cin >> month;

    switch (month)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        std::cout << "Summer";
        break;

    case 5:
    case 6:
    case 7:
    case 8:
        std::cout << "Autumn";
        break;

    case 9:
    case 10:
    case 11:
    case 12:
        std::cout << "Winter";
        break;

    default:
        std::cout << "Bogus Month";
    }
}