#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	Animal();
	virtual	~Animal();

	Animal(const Animal &);

/*---MEMBER FUNCTIONS---*/

	virtual std::string		getType() const;
	virtual void			makeSound() const;

/*---OPERATORS---*/

	Animal & operator = (Animal &);

};

#endif