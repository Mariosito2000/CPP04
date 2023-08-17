#pragma once
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	AAnimal();
	virtual	~AAnimal();

	AAnimal(const AAnimal &);

/*---MEMBER FUNCTIONS---*/

	virtual std::string		getType() const;
	virtual void			makeSound() const = 0;

/*---OPERATORS---*/

	AAnimal & operator = (AAnimal &);

};

#endif