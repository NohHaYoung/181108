#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int*b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	}	

int main(void) {
	
	int x = 19;
	int y = 29;
	printf("x value : %d, y value : %d\n", x, y);
	
	swap(&x, &y);
	
	printf("x value : %d, y value : %d\n", x, y);
			
	return 0;
}
