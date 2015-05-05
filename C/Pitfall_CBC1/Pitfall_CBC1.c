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

int * initialize(void) { 
	int *memPointer; 
	memPointer=malloc(10*sizeof(int));
	return memPointer;
}

int main () 
{ 
	int *arrayPointer; 
	int i; 
	int value=9; 
	int *retval; 
	retval = initialize(); 
	//Assign pointer returned from getTable() function. 
	arrayPointer = getTable(value); 
	for ( i = 0; i < 11; i++ ) 
	{ 
		printf("Multiplication of %d with %d is %d\n",value, i+1, *arrayPointer); 
		//Store array value to memory 
		*retval=*arrayPointer; 
		printf("Result is stored to memory: %d\n", *retval); 
		printf("Address of result: %p\n", retval); 
		retval++; 
		arrayPointer++;
	}
	free(retval-11);
	return 0; 
} 
