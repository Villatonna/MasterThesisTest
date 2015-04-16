#include <stdio.h>
#include <stdlib.h>

int *memPointer;
 
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

int * initialize(int untrusted_value)
{
	memPointer=malloc(untrusted_value*sizeof(int));
}


void finalize(){
	free(memPointer);
}

int main (int argc, char *argv[])
{
	int *arrayPointer;
	int i;
	int value=9;
	int *retval;
	int untrusted = atoi(argv[1]);
	//Allocate memory dynamically size of 10 int variables(int=16bits*10 = 160bits = 20bytes)
	retval = initialize(untrusted);
	//Assign pointer returned from getTable() function.
	arrayPointer = getTable(value);
	for ( i = 0; i < 19; i++ )
	{
		printf("Multiplication of %d with %d is %d\n",value, i+1, *arrayPointer);
		//Store array value to memory
		*retval=*arrayPointer;
		printf("Result is stored to memory: %d\n", *retval);
		printf("Address of result: %p\n", retval);
		retval++;
		arrayPointer++;
	}
	finalize();
	return 0;
}
