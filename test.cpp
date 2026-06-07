#include <iostream>

int main()
{
    int row, col;

    std::cout << "Enter rows: ";
    std::cin >> row;

    std::cout << "Enter columns: ";
    std::cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}