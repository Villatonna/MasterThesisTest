#include <stdio.h> 
#include <stdlib.h> 

int *memPointer; //Global pointer
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

int * initialize(){
	memPointer=malloc(10*sizeof(int));
	return memPointer;
}

void finalize(){ 
	free(memPointer); 
} 

int main () 
{ 
	int *arrayPointer; 
	int i; 
	int value=9; 
	int *retval = initialize();
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
	finalize(); 
	printf("Result is stored to memory: %d\n", *retval);
	return 0;
} 
