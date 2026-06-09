#include <iostream>

int main() {
    std::string arr[] = { "1", "2", "3" };

    int size = sizeof(arr) / sizeof(std::string);

    std::cout << size << " elements" << std::endl;

    for (std::string el : arr) {
        std::cout << el << std::endl;
    }

    return 0;
}