#include <iostream>
#include <memory>
#include <string>
 



int main()
{	
	int* spArray;
	spArray = new int[5];
	for(int i=0;i<5;i++){
		spArray[i]=i;
	}
	std::unique_ptr<int[]> memSPointer(spArray);
	int mNum=memSPointer.get()[4];
	memSPointer.reset();
	memSPointer.reset();
	std::cout<<mNum;
}
