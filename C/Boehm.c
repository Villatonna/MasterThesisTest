#include <gc.h>
#include <stdio.h>

int main(void)
{
	int* pointer;
	int it=10;
	//Allocate memory
	GC_INIT();
	pointer=(int*)GC_malloc(10*sizeof(int));
	for(int i=0;i<it;i++){		
		*pointer=4*i;
		pointer++;
	}
	pointer-10;
	//Double memory allocation
	int* extended_pointer = (int*)GC_realloc(pointer,20*sizeof(int));
	if(extended_pointer!=NULL){
		printf("Heap size = %zu\n", GC_get_heap_size());
	}
	else{
		printf("Memory reallocation failed!\n");
	}
	return 0;
}
