#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[5] = {"White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[5] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

#define MAX_COLORPAIR_NAME_CHARS 16

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
extern void Manual_Print();
