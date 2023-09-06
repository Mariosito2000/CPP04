#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	AMateria();
	virtual ~AMateria();

	AMateria(const AMateria &);
	AMateria(std::string const & type);

/*---MEMBER FUNCTIONS---*/

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

/*---OPERATORS---*/

	AMateria & operator = (AMateria &);

};

#endif