#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:

	Brain *_brain;

public:

/*---CONS/DES---*/

	Cat();
	~Cat();

	Cat(const Cat &);

/*---MEMBER FUNCTIONS---*/

	std::string	getType() const;
	void		makeSound() const;

/*---OPERATORS---*/

	Cat & operator = (Cat &);

};

#endif