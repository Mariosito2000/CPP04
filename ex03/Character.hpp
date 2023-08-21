#pragma once
#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
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
	
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

/*---OPERATORS---*/

	Character & operator = (Character &);

};

#endif