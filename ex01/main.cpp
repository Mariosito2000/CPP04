#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
/* 
void	leaks()
{
	system("leaks -q Polymorph_test");
} */

int main()
{
	const Animal* meta[100];
	for (int i = 0; i < 50; i++)
		meta[i] = new Dog();
	for (int i = 50; i < 100; i++)
		meta[i] = new Cat();
	for (int i = 0; i < 100; i++)
	{
		std::cout << i + 1 << "\n";
		delete meta[i];
	}
	/* atexit(leaks); */
	return (0);
}