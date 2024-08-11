#include <iostream>

int main() {
    std::cout << "Merge Sort" << std::endl;
    int list[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(list) / sizeof(list[0]);

    std::cout << "Unordered list" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << list[i] << " ";
    }

    std::cout << "Ordered list" << std::endl;

     for (int i = 0; i < n; i++) {
        std::cout << list[i] << " ";
    }

    return 0;
}