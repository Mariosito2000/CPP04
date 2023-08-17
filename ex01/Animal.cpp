#include "Animal.hpp"

/*---CONS/DES---*/

Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
	_type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called\n";
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal copy constructor called\n";
	_type = a._type;
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
