#pragma once
#include "ColorPair.h"
namespace TelCoColorCoder
{
    ColorPair::ColorPair(MajorColor major, MinorColor minor) :  majorColor(major), minorColor(minor) {
    }

    MajorColor ColorPair::getMajor() {
        return majorColor;
    }
    MinorColor ColorPair::getMinor() {
        return minorColor;
    }

    std::string ColorPair::ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }

    int ColorPair::GetNumberOfMinorColor()
    {
        return sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    }
    ColorPair ColorPair::GetColorFromPairNumber(int pairNumber) 
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =  (MajorColor)(zeroBasedPairNumber / GetNumberOfMinorColor());
        MinorColor minorColor =  (MinorColor)(zeroBasedPairNumber % GetNumberOfMinorColor());
        return ColorPair(majorColor, minorColor);
    }

    int ColorPair::GetPairNumberFromColor(MajorColor major, MinorColor minor) 
    {        
        return major * GetNumberOfMinorColor() + minor + 1;
    }
}

