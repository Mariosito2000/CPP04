#pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	WrongAnimal();
	virtual ~WrongAnimal();

	WrongAnimal(const WrongAnimal &);

/*---MEMBER FUNCTIONS---*/

	std::string		getType() const;
	void			makeSound() const;

/*---OPERATORS---*/

	WrongAnimal & operator = (WrongAnimal &);

};

#endif