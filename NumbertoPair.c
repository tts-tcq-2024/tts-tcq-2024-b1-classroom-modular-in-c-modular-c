#include "modularity.h"
#include <assert.h>
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}



void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void printmanual()

{ 
	int pairnum_loop_cntr;
	int total_pairs= numberOfMajorColors * numberOfMinorColors;
	printf("**************Manual***************\n");
	printf("Pair no.\tMajor color\tMinor color\n");
	for (pairnum_loop_cntr=1; pairnum_loop_cntr<= total_pairs; pairnum_loop_cntr++)
	{		
		
			ColorPair colorPair = GetColorFromPairNumber(pairnum_loop_cntr);
			char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
			
			printf("%d\t\t%s\t\t%s\n", pairnum_loop_cntr,MajorColorNames[colorPair.majorColor],MinorColorNames[colorPair.minorColor]);
	}
}	





	
	
