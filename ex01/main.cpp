#include "iter.hpp"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Original array: { ";
    iter(arr, 5, printElement<int>);
    std::cout << "}\n";
    return 0;
}