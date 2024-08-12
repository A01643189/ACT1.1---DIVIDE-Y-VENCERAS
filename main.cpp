#include <iostream>
#include <vector>

int main() {
    std::cout << "Merge Sort" << std::endl;
    std::vector<int> list = {12, 11, 13, 5, 6, 7};
    int length = list.size();

    std::cout << "Unordered list" << std::endl;

    for (int i = 0; i < length; i++) {
        std::cout << list[i] << " ";

    std::cout << std::endl << "Ordered list" << std::endl;

    for (int i = 0; i < length; i++) {
        std::cout << list[i] << " ";
    }

    return 0;
}