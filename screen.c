#include "screen.h"  //use "" for the manually file(library)
#include <stdio.h>


void resetScreen(void) {
	printf("\033[0m");
	fflush(stdout);
}

void setColors(int fg, int bg) {
	printf("\033[1;%d;%dm", fg, bg + 10);
	fflush(stdout);
}

void clearScreen(void) {
	printf("\033[2J");
	fflush(stdout);
}

