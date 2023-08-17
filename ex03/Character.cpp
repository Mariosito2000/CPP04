#include "Character.hpp"

/*---CONS/DES---*/

Character::Character()
{
	std::cout << "Character default constructor called\n";
	_name = "Steve";
	_nMaterias = 0;
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
}

Character::~Character()
{
	std::cout << "Character default destructor called\n";
	for (int i = 0; i < 4; i++)
		if (_materias[i] != 0)
			delete _materias[i];
}

Character::Character(const Character &a)
{
	std::cout << "Character copy constructor called\n";
	_name = a.getName();
	_nMaterias = a._nMaterias;
	for (int i = 0; i < 4; i++)
		if (a._materias[i] != 0)
			_materias[i] = a._materias[i]->clone();
}

Character::Character(std::string name)
{
	std::cout << "Character name constructor called\n";
	_name = name;
	_nMaterias = 0;
}
	
/*---MEMBER FUNCTIONS---*/
	
std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (_nMaterias == 4)
	{
		std::cout << "* you have no free slots left *\n";
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == 0)
		{
			_materias[i] = m->clone();
			break;
		}
	}
	_nMaterias++;
}

void Character::unequip(int idx)
{
	if (_materias[idx] == 0)
	{
		std::cout << "* can't unequip this slot *\n";
		return;
	}

}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= _nMaterias || idx < 0)
	{
		std::cout << "* can't use this slot *\n";
		return;
	}
	_materias[idx]->use(target);
}

/*---OPERATORS---*/

Character & Character::operator = (Character &a)
{
	_name = a.getName();
	//copiar materias alocando memoria
	return (*this);
}