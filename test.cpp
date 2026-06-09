#include <iostream>

void happyBirthday(std::string name);

int main()
{
    std::string name = "Bro";
    happyBirthday(name);
    return 0;
}

void happyBirthday(std::string name)
{
    std::cout << "Happy Birthday to you!" << name << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
}