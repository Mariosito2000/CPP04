#include "MateriaSource.hpp"

/*---CONS/DES---*/

MateriaSource::MateriaSource()
{

}

MateriaSource::~MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource &)
{
	
}

/*---MEMBER FUNCTIONS---*/

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{

}

/*---OPERATORS---*/

MateriaSource & MateriaSource::operator = (MateriaSource &a)
{
	for (int i = 0; i < 4 && a._materias[i]->getType() != "\0"; i++)
		//alocar memoria para los materiales ¿?
	return (*this);
}