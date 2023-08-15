#include "WrongAnimal.hpp"

/*---CONS/DES---*/

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	_type = a._type;
	std::cout << "WrongAnimal copy constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Bye world!\n";
}

/*---OPERATORS---*/

WrongAnimal & WrongAnimal::operator = (WrongAnimal &a)
{
	this->_type = a._type;
	return (*this);
}
