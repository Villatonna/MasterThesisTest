#include <stdio.h> 
#include <stdlib.h> 
 
//Function for generating multiplication table which returns pointer of table 
int * getTable(int value) 
{ 
	//Declare integer table as static, which extends it's lifetime to end of program 
	static int tblMulti[10]; 
	int i; 
	for (i=0;i<10;i++){ 
		tblMulti[i] = value*(i+1); 
	} 

	return tblMulti; 
}

int main () 
{ 
	int *arrayPointer; 
	int i; 
	int value=9; 
	int *memPointer; 
	//Allocate memory dynamically size of 10 int variables(int=32bits*10 = 320bits = 40 bytes) 
	memPointer=malloc(10*sizeof(int)); 
	//Assign pointer returned from getTable() function. 
	arrayPointer = getTable(value);
	for ( i = 0; i < 10; i++ ) 
	{ 
		printf("Multiplication of %d with %d is %d\n",value, i+1, *arrayPointer); 
		//Store array value to memory 
		*memPointer=*arrayPointer; 
		printf("Result is stored to memory: %d\n", *memPointer); 
		printf("Address of result: %p\n", memPointer); 
		memPointer++; 
		arrayPointer++; 
	} 
	//Free dynamically allocated memory 
	free(memPointer-10); 
	return 0; 
} 
