/*
    Author: Leon Grell
*/

#include <iostream>
#include "Vector.h"

int main()
{
    std::cout << "Vector Test\n";

    Vector v1{ 1,2,3 };
    Vector v2{ 2,3,4 };
    Vector v3{ 3,3,3 };

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "v3: " << v3 << std::endl;
    std::cout << "v1 + v2: " << v1 + v2 << std::endl;
    std::cout << "v2 + 2: " << v2 + 2 << std::endl;
    std::cout << "-v3: " << -v3 << std::endl;
}

