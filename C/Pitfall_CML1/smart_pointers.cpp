#include <iostream>
#include <memory>
#include <string>
 
struct One_ring
{
	One_ring()      { std::cout << "Sauron creates ring\n";  }
	~One_ring()     { std::cout << "Ring is tossed in to the fire\n"; }
	void invisible() { std::cout << "User is invisible\n"; }
};

struct Gondor
{
	Gondor()      { std::cout << "Gondor created\n";  }
	~Gondor()     { std::cout << "Gondor destroyed\n"; }
	void visit() { std::cout << "User enters Gondor\n"; }
};

void gondorVisiting()
{
	//Both Gandalf and Aragorn can visit Gondor
	std::shared_ptr<Gondor> Gandalf(new Gondor); 
	std::shared_ptr<Gondor> Aragorn=Gandalf;
	//Merri cannot since it is weak pointer and does not have get() member function...
	std::weak_ptr<Gondor> weakMerri=Gandalf;
	Gandalf.get()->visit();	
	Aragorn.get()->visit();
	//...unless Merri is shared pointer
	weakMerri.lock().get()->visit();
	//std::shared_ptr<Gondor> Merri=weakMerri.lock();
	//Merri.get()->visit();
	//Gondor is destroyed when 
}
 
void mountDoom()
{
	std::unique_ptr<One_ring> Sam(new One_ring);  // Sam finds One_ring
	std::unique_ptr<One_ring> Frodo(Sam.release());  // Sam gives ring to Frodo
	//std::unique_ptr<One_ring> Gollum = Frodo; // Gollum tries to get ring, but this won't compile -> line commented
	Frodo.get()->invisible(); //Frodo uses ring
	//Ring will be destroyed when mountDoom function scope disappears 
}

int main()
{
	mountDoom();
	gondorVisiting();
}
