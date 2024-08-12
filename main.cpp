#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> left, std::vector<int> right) {
    std::vector<int> result;
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

std::vector<int> mergeSort(std::vector<int> list) {
    if (list.size() <= 1) {
        return list;
    }

    int middle = list.size() / 2;
    std::vector<int> left;
    std::vector<int> right;

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



int main() {
    std::cout << "Merge Sort" << std::endl;
    std::vector<int> list = {12, 11, 13, 5, 6, 7, 2, 3, 1, 4, 23, 15, };
    int length = list.size();

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