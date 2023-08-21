#include "MateriaSource.hpp"

/*---CONS/DES---*/

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called\n";
	for(int i = 0; i < 4; i++)
		_materias[i] = 0;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource default destructor called\n";
	for(int i = 0; i < 4; i++)
		if (_materias[i] != 0)
			delete _materias[i];
}

MateriaSource::MateriaSource(const MateriaSource &a)
{
	std::cout << "MateriaSource copy constructor called\n";
	for(int i = 0; i < 4; i++)
	{
		if (a._materias[i] != 0)
			_materias[i] = a._materias[i]->clone();
		else
			_materias[i] = 0;
	}
}

/*---MEMBER FUNCTIONS---*/

void MateriaSource::learnMateria(AMateria *a)
{
	for(int i = 0; i < 4; i++)
	{
		if (_materias[i] == 0)
		{
			_materias[i] = a;
			return;
		}
	}
	std::cout << "* this MateriaSource is full of materias *\n";
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_materias[i] != 0 && !type.compare(_materias[i]->getType()))
			return (_materias[i]->clone());
	}
	std::cout << "* that type of Materia is unknown to this MateriaSource *\n";
	return (0);
}

/*---OPERATORS---*/

MateriaSource & MateriaSource::operator = (MateriaSource &a)
{
	for (int i = 0; i < 4 && a._materias[i] != 0; i++)
		_materias[i] = a._materias[i]->clone();
	return (*this);
}