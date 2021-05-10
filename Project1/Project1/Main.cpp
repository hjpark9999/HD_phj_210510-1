#include <stdio.h>
#include "Source.h"


void main() {
	int number[5] = { 10,20,30,40,50 };
	int i = 0;
	int n;
	
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &n);

		CallByRef(&number[i], &n);
	
	}

	for(i=0;i<5;i++)
		printf("%d   ", number[i]);

}

