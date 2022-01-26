#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << std::endl;

    Fixed c(4);
    Fixed d(2);
    std::cout << "TEST CASE 1" << std::endl;
    std::cout << (c + d) << std::endl;
    std::cout << (c - d) << std::endl;
    std::cout << (c * d) << std::endl;
    std::cout << (c / d) << std::endl;
    std::cout << std::endl;

    std::cout << "TEST CASE 2" << std::endl;
    std::cout << (c > d) << std::endl;
    std::cout << (c < d) << std::endl;
    std::cout << (c <= d) << std::endl;
    std::cout << (c >= d) << std::endl;
    std::cout << (c == d) << std::endl;
    std::cout << (c != d) << std::endl;
    std::cout << std::endl;

    std::cout << "TEST CASE 3" << std::endl;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    std::cout << std::endl;

    std::cout << "TEST CASE 4" << std::endl;
    std::cout << Fixed::min(c, d) << std::endl;
    std::cout << std::endl;

    return 0;
}
