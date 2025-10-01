#ifndef TELCO_COLOR_CODER_H
#define TELCO_COLOR_CODER_H

#include <string>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorCodingReferenceManual();
}

#endif
