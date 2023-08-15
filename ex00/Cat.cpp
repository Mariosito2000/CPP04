#include "Cat.hpp"

/*---CONS/DES---*/

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called\n";
}

Cat::Cat(const Cat &a)
{
	_type = a._type;
	std::cout << "Cat copy constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

std::string	Cat::getType() const
{
	return (_type);
}

void	Cat::makeSound() const
{
	std::cout << "Miau\n";
}

/*---OPERATORS---*/

Cat & Cat::operator = (Cat &a)
{
	this->_type = a._type;
	return (*this);
}