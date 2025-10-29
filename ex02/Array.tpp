#include "Array.hpp"

// Default Constructor
template <typename T>
Array<T>::Array() : elements_(NULL), length_(0) {}

// Parametric Constructor
template <typename T>
Array<T>::Array( unsigned int n ) : length_(n) {
    if (n == 0) {
        elements_ = NULL;
    }
    else {
        elements_ = new T[n]();
    }
}

// Copy Constructor
template <typename T>
Array<T>::Array( const Array<T> &other ) : length_(other.length_) {
    if (length_ == 0) {
        elements_ = NULL;
    }
    else {
        elements_ = new T[length_];
        for (unsigned int i = 0; i < length_; i++) {
            elements_[i] = other.elements_[i];
        }
    }
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] elements_;
}

// Copy Assignment Operator
template <typename T>
Array<T>&   Array<T>::operator=( const Array<T> &other ) {
    if (this != &other) {
        delete[] elements_;
        length_ = other.length_;
        if (length_ == 0) {
            elements_ = NULL;
        }
        else {
            elements_ = new T[length_];
            for (unsigned int i = 0; i < length_; i++) {
                elements_[i] = other.elements_[i];
            }
        }
    }
    return *this;
}

// Subscript Operator
template <typename T>
T&  Array<T>::operator[](unsigned int index) {
    if (index >= length_) {
        throw std::out_of_range("Array index out of bounds");
    }
    return elements_[index];
}

// Subscript Operator - const version
template <typename T>
const T&  Array<T>::operator[](unsigned int index) const {
    if (index >= length_) {
        throw std::out_of_range("Array index out of bounds");
    }
    return elements_[index];
}

// Method size()
template <typename T>
unsigned int    Array<T>::size() const {
    return length_;
}

