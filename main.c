#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i = 365;
	int *ptr = &i;
	
	printf("i address : %d\n", &i );
	printf("i value : %d\n", i );
	
	printf("ptr address : %d\n", ptr );
	printf("ptr value : %u\n", *ptr );
		
	return 0;
}
