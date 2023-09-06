#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
private:

	Brain *_brain;

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