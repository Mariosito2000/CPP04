#include "WrongCat.hpp"

/*---CONS/DES---*/

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called\n";
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called\n";
}

WrongCat::WrongCat(const WrongCat &a)
{
	std::cout << "WrongCat copy constructor called\n";
	_type = a._type;
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