#include "AAnimal.hpp"

/*---CONS/DES---*/

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called\n";
	_type = "AAnimal";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal default destructor called\n";
}

AAnimal::AAnimal(const AAnimal &a)
{
	std::cout << "AAnimal copy constructor called\n";
	_type = a._type;
}

/*---MEMBER FUNCTIONS---*/

std::string	AAnimal::getType() const
{
	return (_type);
}

/*---OPERATORS---*/

AAnimal & AAnimal::operator = (AAnimal &a)
{
	this->_type = a._type;
	return (*this);
}
