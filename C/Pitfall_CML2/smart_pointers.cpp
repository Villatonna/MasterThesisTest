#include <iostream>
#include <memory>
#include <string>
 
arrayCreatorSmart()
{
	std::shared_ptr<int[]> memSPointer(new int[10]); 
}

arrayCreatorSimple()
{
	int* SimplePointer;
	SimplePointer=new int[10];
}


int main()
{
	//First call 1000 times arrayCreatorSmart() 
	for(int i=0;i<1000;i++){		
		arrayCreatorSmart();	
	}
	std::getline(std::cin, line); //Break for reading process mem usage from proc
	//Call 1000 times arrayCreatorSimple() which is leaking memory
	for(int i=0;i<1000;i++){		
		arrayCreatorSimple();	
	}
	std::getline(std::cin, line); //Break for reading process mem usage from proc
}
