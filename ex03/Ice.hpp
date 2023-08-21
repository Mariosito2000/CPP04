#pragma once
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{

public:

/*---CONS/DES---*/

	Ice();
	~Ice();

	Ice(const Ice &);

/*---MEMBER FUNCTIONS---*/

	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter &target);

/*---OPERATORS---*/

	Ice & operator = (Ice &);

};

#endif