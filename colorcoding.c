#include "colorcoding.h"

const char* MajorColorNames[5] = {"White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[5] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    Manual_Print();

    return 0;
}
