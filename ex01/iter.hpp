#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>
# include <cstdlib>

template <typename T, typename F>
void iter( T *arr, const size_t len, F func ) {
    for (size_t i = 0; i < len; i++) {
        func(arr[i]);
    }
}

template <typename T>
void printElement(const T& x) {
    std::cout << x << " ";
}

template <typename T>
void incrementElement(T& x) {
    ++x;
}

#endif