#pragma once
#include <string>
namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };   

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
          const char* MajorColorNames[5] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

        int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);


    const char* MinorColorNames[5] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor(); 
        MinorColor getMinor(); 
        std::string ToString();

        static ColorPair GetColorFromPairNumber(int pairNumber) 
        {
            int zeroBasedPairNumber = pairNumber - 1;
            MajorColor majorColor =  (MajorColor)(zeroBasedPairNumber / GetNumberOfMinorColor());
            MinorColor minorColor =  (MinorColor)(zeroBasedPairNumber % GetNumberOfMinorColor());
            return ColorPair(majorColor, minorColor);
        }

        static int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
        {        
            return major * GetNumberOfMinorColor() + minor + 1;
        }

        static int GetNumberOfMinorColor()
        {
            return sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
        }
    };
};