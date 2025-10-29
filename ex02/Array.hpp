#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>


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

# include "Array.tpp"

#endif