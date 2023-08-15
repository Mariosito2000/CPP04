#pragma once
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	WrongCat();
	~WrongCat();

	WrongCat(const WrongCat &);

/*---MEMBER FUNCTIONS---*/

	virtual std::string	getType() const;
	virtual void		makeSound() const;

/*---OPERATORS---*/

	WrongCat & operator = (WrongCat &);

};

#endif