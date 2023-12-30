/*
 ============================================================================
 Name        : int_float.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=5.5;
	float y=2;
	printf ("%d\n",x);
	if (x/y==2)
		printf ("int\n");
	else if (x/y==2.5)
		printf ("float\n");
	return 0;
}
