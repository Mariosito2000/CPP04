#include "WrongCat.hpp"

/*---CONS/DES---*/

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called\n";
}

WrongCat::WrongCat(const WrongCat &a)
{
	_type = a._type;
	std::cout << "WrongCat copy constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

std::string	WrongCat::getType() const
{
	return (_type);
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaurong\n";
}

/*---OPERATORS---*/

WrongCat & WrongCat::operator = (WrongCat &a)
{
	this->_type = a._type;
	return (*this);
}