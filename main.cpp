#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> fruits = {"Banana", "Apple", "Cherry", "Date"};

    std::cout << "Original list:\n";
    for (const auto& fruit : fruits) {
        std::cout << fruit << "\n";
    }

    // Sort the vector using STL algorithm
    std::sort(fruits.begin(), fruits.end());

    std::cout << "\nSorted list:\n";
    for (const auto& fruit : fruits) {
        std::cout << fruit << "\n";
    }

    // Find a fruit
    std::string toFind = "Apple";
    auto it = std::find(fruits.begin(), fruits.end(), toFind);
    if (it != fruits.end()) {
        std::cout << "\nFound: " << *it << "\n";
    } else {
        std::cout << "\nNot found\n";
    }

    return 0;
}
