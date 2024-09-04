#pragma once
#include "ColorPair.h"
#include <assert.h>
#include <iostream>
using namespace TelCoColorCoder;

class TestColor
{
public:
    static void testNumberToPair(int pairNumber,
    MajorColor expectedMajor,
    MinorColor expectedMinor)
    {
        ColorPair colorPair = ColorPair::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    static void testPairToNumber(
    MajorColor major,
    MinorColor minor,
    int expectedPairNumber)
    {
        int pairNumber = ColorPair::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
};
