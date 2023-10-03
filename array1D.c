#include <stdio.h>
#define _SIZ	20

void type1(int *);	//this is an integer pointer
void type2(int (*)[_SIZ]);	//this is a pointer to an array of integers

int main()
{
	//1D array passing
	int array[_SIZ] = {9,5,0,8,6,7,1,3,4,2};
	type1(array);
	type2(&array);
	return 0;
}


void type1(int *a) {
	printf("type1 a0  %d\n", a[0]);
	printf("type1 a0  %d\n", *(a+1));
}

void type2(int (*a)[_SIZ]) {
	printf("type2 a0 %d\n", (*a)[0]);
	printf("type2 a1 %d\n", *((*a)+1));
	printf("type2 a1 %d\n", a[0][1]);
}	
