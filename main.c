#include <stdio.h>
#include "pascal.h"
#include "screen.h"

int main(void) {
	//printf("3! = %d\n", factorial(3));
	//printf("(5,2) = %d", binomial(5, 2));

	int n, k;
	setColors(CYAN, GREEN);
	clearScreen();
	//printf("\033[1;33m");// change the color of terminal, check the vt100 neu edu (set display attributes
	for(n = 0; n < ROWS; n++){
		for (k = 0; k <= ROWS-n; k++) printf("  ");

		for (k = 0; k <= n; k++) {
			printf("%4d", binomial(n, k));
		}
		printf("\n");
	}
	resetScreen();
	//printf("\033[0m"); //reset the color

}