#include <iostream>
#include <memory>
#include <string>
#include <iostream>
 
void arrayCreatorSmart()
{
	std::unique_ptr<int[]> memSPointer(new int[100000]); 
}

void arrayCreatorSimple()
{
	int* SimplePointer;
	SimplePointer=new int[100000];
}


int main()
{
	char userInput[10], userInput1[10], userInput2[10];
	std::cout << "Read Smart memory status\n";
	std::cin.getline(userInput,5); //Break for reading process mem usage from proc
	//First call 1000 times arrayCreatorSmart() 
	for(int i=0;i<100;i++){		
		arrayCreatorSmart();	
	}
	std::cout << "Read Smart memory status\n";
	std::cin.getline(userInput1,5); //Break for reading process mem usage from proc
	//Call 1000 times arrayCreatorSimple() which is leaking memory
	for(int i=0;i<100;i++){		
		arrayCreatorSimple();	
	}
	std::cout << "Read Smart memory status\n";
	std::cin.getline (userInput2,5);//Break for reading process mem usage from proc
	return 0;
}
