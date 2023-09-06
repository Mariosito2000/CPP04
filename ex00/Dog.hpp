#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:

/*---CONS/DES---*/

	Dog();
	~Dog();

	Dog(const Dog &);

/*---MEMBER FUNCTIONS---*/

	std::string	getType() const;
	void		makeSound() const;

/*---OPERATORS---*/

	Dog & operator = (Dog &);

};

#endif