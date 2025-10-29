#include "Array.hpp"
#include <string>

int main()
{
    std::cout << BGRN << std::endl << std::string(50, '=') << RST << std::endl;

    Array<int>  arrInt(5);

    std::cout << "\nArray of integers: ";
    printArray(arrInt);
    std::cout << "size = " << arrInt.size() << std::endl;

    // Add to each array element the respective index position
    for (unsigned int i = 0; i < arrInt.size(); i++) {
        arrInt[i] += i;
    }
    std::cout << "\nUpdated Array of integers: ";
    printArray(arrInt);
    std::cout << "size = " << arrInt.size() << std::endl;

    std::cout << BGRN << std::endl << std::string(50, '=') << RST << std::endl;

    std::cout << "\nAccessing an element with an index out of bounds:\n";
    try {
        std::cout << arrInt[7] << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << BRED << "Exception: " << RST << e.what() << std::endl;
    }

    std::cout << BGRN << std::endl << std::string(50, '=') << RST << std::endl;

    std::cout << "\nCopy constructor testing:\n";
    Array<int>  arrInt2(arrInt);
    std::cout << "Copied array of integers: ";
    printArray(arrInt2);
    std::cout << "size = " << arrInt2.size() << std::endl;

    std::cout << "\nChanging new array element at index = 0 to 42\n";
    arrInt2[0] = 42;
    std::cout << "Modified new array: ";
    printArray(arrInt2);
    std::cout << "Original array: ";
    printArray(arrInt);

    std::cout << BGRN << std::endl << std::string(50, '=') << RST << std::endl;

    std::cout << "\nCopy assignment operator testing:\n";
    Array<int>  arrInt3;

    arrInt3 = arrInt;
    std::cout << "New copied array: ";
    printArray(arrInt3);

    std::cout << "\nChanging new array element at index = 0 to 8\n";
    arrInt3[0] = 8;
    std::cout << "Modified new array: ";
    printArray(arrInt3);
    std::cout << "Original array: ";
    printArray(arrInt);

    std::cout << BGRN << std::endl << std::string(50, '=') << RST << std::endl;

    Array<char> arrChar(5);

    std::cout << "\nArray of chars (default initialized to NUL):\n";
    printArray(arrChar);
    std::cout << "size = " << arrChar.size() << std::endl;

    // Update each array element with ASCII values starting from 'A'
    for (unsigned int i = 0; i < arrChar.size(); i++) {
        arrChar[i] = i + 65;
    }

    std::cout << "\nUpdated Array of chars: ";
    printArray(arrChar);
    std::cout << "size = " << arrChar.size() << std::endl;

    std::cout << BGRN << std::endl << std::string(50, '=') << RST << std::endl;
}