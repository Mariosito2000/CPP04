#pragma once
#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character
{

private:

	std::string		_name;
	AMateria 		*_materias[4];
	int				_nMaterias;

public:
	
/*---CONS/DES---*/

	Character();
	~Character();

	Character(const Character &);
	Character(std::string name);
	
/*---MEMBER FUNCTIONS---*/
	
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

/*---OPERATORS---*/

	Character & operator = (Character &);

};

#endif