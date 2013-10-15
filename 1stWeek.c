#include <stdio.h>

int main(void)
{
	int a, b, result;

	for (a=1; a<=9; a++){
		for (b=1; b<=9; b++){
			result = a * b;

			printf("%2d ", result);
		}
		printf("\n");
	}
}
