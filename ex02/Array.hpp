#ifndef ARRAY_HPP
# define ARRAY_HPP

# define BRED "\033[1;91m"
# define BGRN "\033[1;92m"
# define RST "\033[0m"

# include <iostream>
# include <cstdlib>
# include <exception>

template <typename T>
class Array {
    private:
        T*  elements_;
        unsigned int    length_;
    
    public:
        Array();
        Array( unsigned int n );
        Array( const Array &other );
        Array&  operator=( const Array &other );
        ~Array();

        T&  operator[]( unsigned int index );
        const T&  operator[]( unsigned int index ) const;

        unsigned int    size() const;
};

template <typename T>
void    printArray( const Array<T>& arr ) {
    std::cout << "{ ";
    for (unsigned int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "}\n";
}

# include "Array.tpp"

#endif