#include <iostream>
#include <vector>

// Francisco Javier Romo Juárez A01643189
// Diego Enrique Vargas Ramírez A01635782

//Merge

std::vector<double> merge(std::vector<double> left, std::vector<double> right) {
    std::vector<double> result;
    int i = 0;
    int j = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }

    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }

    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }

    return result;
}

//Merge Sort

std::vector<double> mergeSort(std::vector<double> list) {
    if (list.size() <= 1) {
        return list;
    }

    int middle = list.size() / 2;
    std::vector<double> left;
    std::vector<double> right;

    for (int i = 0; i < middle; i++) {
        left.push_back(list[i]);
    }

    for (int i = middle; i < list.size(); i++) {
        right.push_back(list[i]);
    }

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

//Main

int main() {
    std::cout << "Merge Sort" << std::endl;
    std::vector<double> list = {};
    int length;

    std::cout << "Enter the length of the list" << std::endl;
    std::cin >> length;

    std::cout << "Enter the numbers of the list" << std::endl;

    for (int i = 0; i < length; i++) {
        double number;
        std::cin >> number;
        list.push_back(number);
    }

    std::cout << "Unordered list" << std::endl; 

    for (int i = 0; i < length; i++) {
        std::cout << list[i] << " ";
    }

    list = mergeSort(list);

    std::cout << std::endl << "Ordered list" << std::endl;

    for (int i = 0; i < length; i++) {
        std::cout << list[i] << " ";
    }

    return 0;
}