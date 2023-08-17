#pragma once
#ifndef HEAL_HPP
# define HEAL_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Heal: public AMateria
{

protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	Heal();
	~Heal();

	Heal(const Heal &);

/*---MEMBER FUNCTIONS---*/

	std::string const & getType() const; //Returns the materia type
	virtual Heal* clone() const;
	virtual void use(ICharacter& target);

/*---OPERATORS---*/

	Heal & operator = (Heal &);

};

#endif