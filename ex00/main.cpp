#include "Templates.hpp"

int main( void ) {
    std::cout << "\nTest with int " << std::string(20, '=') << std::endl;
    int a = 2;
    int b = 3;
    std::cout << "Before swap:\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "After swap:\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "\nmin( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::cout << "\nTest with string " << std::string(17, '=') << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "Before swap:\n";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "After swap:\n";
    std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << "\nmin( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << "\nTest with char " << std::string(19, '=') << std::endl;
    char e = 'i';
    char f = 'w';
    std::cout << "Before swap:\n";
    std::cout << "e = " << e << ", f = " << f << std::endl;
    ::swap(e, f);
    std::cout << "After swap:\n";
    std::cout << "e = " << e << ", f = " << f << std::endl;

    std::cout << "\nmin( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

    std::cout << "\nTest with float " << std::string(18, '=') << std::endl;
    float g = 4.2;
    float h = 5.3;
    std::cout << "Before swap:\n";
    std::cout << "g = " << g << ", h = " << h << std::endl;
    ::swap(g, h);
    std::cout << "After swap:\n";
    std::cout << "g = " << g << ", h = " << h << std::endl;

    std::cout << "\nmin( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
    return 0;
}