#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n" << j->getType() << std::endl;
	j->makeSound();

	std::cout << "\n" << i->getType() << std::endl;
	i->makeSound();
	
	std::cout << "\n" << meta->getType() << std::endl;
	meta->makeSound();

	std::cout << "\n";
	delete i;
	delete j;
	delete meta;

	std::cout << "\nWrong cat test\n\n";

	const WrongAnimal* wanimal = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	std::cout << "\n" << wanimal->getType() << " " << std::endl;
	wanimal->makeSound();

	std::cout << "\n" << wcat->getType() << " " << std::endl;
	wcat->makeSound();

	std::cout << "\n";
	delete wcat;
	delete wanimal;
	return (0);
}