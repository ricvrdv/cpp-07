#include "iter.hpp"

int main() {
    std::cout << "For non-const int array ----------------\n";
    int arr[] = {1, 2, 3, 4, 5};
    size_t  arrLength = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: { ";
    iter(arr, arrLength, printElement<int>);
    std::cout << "}\n";

    std::cout << "After increment: { ";
    iter(arr, arrLength, incrementElement<int>);
    iter(arr, arrLength, printElement<int>);
    std::cout << "}\n";

    std::cout << "\nFor non-const float array --------------\n";
    float arrFloat[] = {0.1f, 0.2f, 0.3f, 0.4f, 0.5f};
    size_t  arrLengthFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);

    std::cout << "Original array: { ";
    iter(arrFloat, arrLengthFloat, printElement<float>);
    std::cout << "}\n";

    std::cout << "After increment: { ";
    iter(arrFloat, arrLengthFloat, incrementElement<float>);
    iter(arrFloat, arrLengthFloat, printElement<float>);
    std::cout << "}\n";

    std::cout << "\nFor const char array -------------------\n";
    const char  cArr[] = {'A', 'B', 'C', 'D', 'E'};
    size_t  cArrLength = sizeof(cArr) / sizeof(cArr[0]);
    
    std::cout << "Original array: { ";
    iter(cArr, cArrLength, printElement<char>);
    std::cout << "}\n";
    return 0;
}