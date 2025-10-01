#include "TelCoColorCoder.h"
#include <iostream>

void runAllTests();

int main() {
    std::cout << "Running Color Coder Tests..." << std::endl;
    runAllTests();
    
    std::cout << "\nGenerating Color Coding Reference Manual..." << std::endl;
    TelCoColorCoder::PrintColorCodingReferenceManual();
    
    return 0;
}
