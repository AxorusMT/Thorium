#include "Core.hpp"

// TODO: Switch this to using the logging library
void Thorium::Core::Types::printTypeInfo() {
    std::cout << "[signed]" << std::endl;
    std::cout << "Char: " << static_cast<int>(signedCharMin) << " - " << static_cast<int>(signedCharMax) << std::endl;
    std::cout << "Short: " << signedShortMin << " - " << signedShortMax << std::endl;
    std::cout << "Int: " << signedIntMin << " - " << signedIntMax << std::endl;
    std::cout << "Long: " << signedLongMin << " - " << signedLongMax << std::endl;

    std::cout << std::endl;

    std::cout << "[unsigned]" << std::endl;
    std::cout << "Char: " << static_cast<int>(unsignedCharMin) << " - " << static_cast<int>(unsignedCharMax) << std::endl;
    std::cout << "Short: " << unsignedShortMin << " - " << unsignedShortMax << std::endl;
    std::cout << "Int: " << unsignedIntMin << " - " << unsignedIntMax << std::endl;
    std::cout << "Long: " << unsignedLongMin << " - " << unsignedLongMax << std::endl;
}