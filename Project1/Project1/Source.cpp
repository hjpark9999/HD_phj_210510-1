#include "Source.h"

void CallByRef(int* n1, int* n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}