#pragma once
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:

/*---CONS/DES---*/

	WrongCat();
	~WrongCat();

	WrongCat(const WrongCat &);

/*---MEMBER FUNCTIONS---*/

	std::string	getType() const;
	void		makeSound() const;

/*---OPERATORS---*/

	WrongCat & operator = (WrongCat &);

};

#endif