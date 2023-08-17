#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:

	Brain *_brain;

protected:

	std::string	_type;

public:

/*---CONS/DES---*/

	Cat();
	~Cat();

	Cat(const Cat &);

/*---MEMBER FUNCTIONS---*/

	virtual std::string	getType() const;
	virtual void		makeSound() const;

/*---OPERATORS---*/

	Cat & operator = (Cat &);

};

#endif