#include "TelCoColorCoder.h"
#include <iostream>

namespace TelCoColorCoder
{
    void PrintColorCodingReferenceManual() {
        std::cout << "\n=== Telecommunication Color Coding Reference Manual ===" << std::endl;
        std::cout << "Pair Number | Major Color | Minor Color | Color Pair Name" << std::endl;
        std::cout << "------------------------------------------------------------" << std::endl;
        
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
            ColorPair colorPair = GetColorFromPairNumber(i);
            std::cout << "     " << i;
            if (i < 10) std::cout << " ";
            std::cout << "     |    " << MajorColorNames[colorPair.getMajor()];
            
            // Add padding for alignment
            int majorLen = std::string(MajorColorNames[colorPair.getMajor()]).length();
            for (int j = 0; j < (8 - majorLen); j++) {
                std::cout << " ";
            }
            
            std::cout << "|    " << MinorColorNames[colorPair.getMinor()];
            
            // Add padding for alignment  
            int minorLen = std::string(MinorColorNames[colorPair.getMinor()]).length();
            for (int j = 0; j < (8 - minorLen); j++) {
                std::cout << " ";
            }
            
            std::cout << "| " << colorPair.ToString() << std::endl;
        }
        std::cout << "------------------------------------------------------------" << std::endl;
    }
}
