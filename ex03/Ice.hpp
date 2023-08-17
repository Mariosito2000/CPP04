#pragma once
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{

protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	Ice();
	~Ice();

	Ice(const Ice &);

/*---MEMBER FUNCTIONS---*/

	std::string const & getType() const;
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);

/*---OPERATORS---*/

	Ice & operator = (Ice &);

};

#endif