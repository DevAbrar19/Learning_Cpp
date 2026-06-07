#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "Enter c for Celsius and f for Fahrenheit : ";
    std::cin >> unit;

    std::cout << "Enter temp : ";
    std::cin >> temp;

    if (unit == 'c')
    {
        double f = ((9 * temp) / (double)5) + 32;

        std::cout << "Converted temp if Fahrenheit is " << f << std::endl;
    }
    else if (unit == 'f')
    {
        double c = (temp - 32) * (5 / (double)9);
        std::cout << "Converted temp if Celsius is " << c << std::endl;
    }
    else
    {
        std::cout << "Wrong input";
    }

    return 0;
}