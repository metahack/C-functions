#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void) {

	srand( (unsigned int) time(NULL) );

	printf("\n\n%d\n\n", rand());

	return 0;
} // int main (void) {

