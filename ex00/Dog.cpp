#include "Dog.hpp"

/*---CONS/DES---*/

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called\n";
}

Dog::Dog(const Dog &a)
{
	_type = a._type;
	std::cout << "Dog copy constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

std::string	Dog::getType() const
{
	return (_type);
}

void	Dog::makeSound() const
{
	std::cout << "Guau\n";
}

/*---OPERATORS---*/

Dog & Dog::operator = (Dog &a)
{
	this->_type = a._type;
	return (*this);
}