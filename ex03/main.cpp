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
	/* atexit(leaks); */

	std::cout << "MateriaSource\n\n";
	IMateriaSource* src = new MateriaSource();

	std::cout << "\nlearn ice\n\n";
	src->learnMateria(new Ice());
	std::cout << "\nlearn cure\n\n";
	src->learnMateria(new Cure());

	std::cout << "\nCharacter\n\n";
	ICharacter* me = new Character("me");

	AMateria* tmp;

	std::cout << "\nIce\n\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "\nCure\n\n";
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << "\nUse\n\n";
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\nBYE BYE\n\n";
	delete bob;
	delete me;
	delete src;

	return 0;
}