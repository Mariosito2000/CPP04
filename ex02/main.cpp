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

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	//meta->makeSound();

	delete i;
	delete j;
	//delete meta;
	//atexit(leaks);
	return (0);
}