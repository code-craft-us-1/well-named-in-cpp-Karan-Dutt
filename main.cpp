#pragma once
#include "WellNamed/TestColor.h"
//using namespace TelCoColorCoder;


int main() {

    TestColor::testNumberToPair(4, WHITE, BROWN);
    TestColor::testNumberToPair(5, WHITE, SLATE);

    TestColor::testPairToNumber(BLACK, ORANGE, 12);
    TestColor::testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
