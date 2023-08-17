#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
private:

	Brain *_brain;

protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	Dog();
	~Dog();

	Dog(const Dog &);

/*---MEMBER FUNCTIONS---*/

	virtual std::string	getType() const;
	virtual void		makeSound() const;

/*---OPERATORS---*/

	Dog & operator = (Dog &);

};

#endif