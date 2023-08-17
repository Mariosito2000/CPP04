#include "Cat.hpp"

/*---CONS/DES---*/

Cat::Cat()
{
	std::cout << "Cat default constructor called\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called\n";
	delete _brain;
}

Cat::Cat(const Cat &a)
{
	std::cout << "Cat copy constructor called\n";
	_type = a._type;
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