#include "colorcoding.h"

void Manual_Print()
{
	int TotalnumofColorPairs = numberOfMajorColors * numberOfMinorColors;
	for (int ColorPairNo = 1; ColorPairNo <= TotalnumofColorPairs; ColorPairNo++)
	{
	  ColorPair colorPair = GetColorFromPairNumber(ColorPairNo);
	  char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
	  ColorPairToString(&colorPair, colorPairNames);
	  printf("Color Pair Number: %d Major and Minor Color Names: %s\n", ColorPairNo, colorPairNames);
	}
}
