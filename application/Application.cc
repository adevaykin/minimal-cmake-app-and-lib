#include <iostream>
#include <Library.hh>

int main()
{
    std::cout << "Minimalistic CMake library and application build example." << std::endl;
    LIBNS::Library lib("Hello from library!");

    std::cout << "Library says: " << lib.greet() << std::endl;
}
