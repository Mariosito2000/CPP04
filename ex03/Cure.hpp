#pragma once
#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
public:

/*---CONS/DES---*/

	Cure();
	~Cure();

	Cure(const Cure &);

/*---MEMBER FUNCTIONS---*/

	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);

/*---OPERATORS---*/

	Cure & operator = (Cure &);

};

#endif