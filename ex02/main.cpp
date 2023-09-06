#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
/* 
void	leaks()
{
	system("leaks -q Polymorph_test");
}
*/
int main()
{
	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "\n" << j->getType() << std::endl;
	j->makeSound();

	std::cout << "\n" << i->getType() << std::endl;
	i->makeSound();
	
	//std::cout << "\n" << meta->getType() << std::endl;
	//meta->makeSound();

	std::cout << "\n";
	delete i;
	delete j;
	//delete meta;

	//atexit(leaks);
	return (0);
}