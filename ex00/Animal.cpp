#include "Animal.hpp"

/*---CONS/DES---*/

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal default constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called\n";
}

Animal::Animal(const Animal &a)
{
	_type = a._type;
	std::cout << "Animal copy constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Hello world!\n";
}

/*---OPERATORS---*/

Animal & Animal::operator = (Animal &a)
{
	this->_type = a._type;
	return (*this);
}
