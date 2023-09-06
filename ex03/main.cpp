#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/* void leaks(void)
{
	system ("leaks -q Interface_test");
} */

int main()
{
/* 	atexit(leaks); */

	std::cout << "MateriaSource\n\n";
	IMateriaSource* src = new MateriaSource();

	std::cout << "\nMateria ice\n\n";
	src->learnMateria(new Ice());
	std::cout << "\nMateria cure\n\n";
	src->learnMateria(new Cure());

	std::cout << "\nCharacter\n\n";
	ICharacter* me = new Character("me");

	AMateria* tmp;
	AMateria* tmp2;

	std::cout << "\nEquip Ice\n\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "\nEquip Cure\n\n";
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	std::cout << "\nUse\n\n";
	me->use(0, *bob);
	me->use(1, *bob);

	//me->unequip(0);
	//delete tmp;

	std::cout << "\nBYE BYE\n\n";

	delete src;
	delete bob;
	delete me;

	return 0;
}