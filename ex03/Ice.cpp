#include "Ice.hpp"

/*---CONS/DES---*/

Ice::Ice()
{
	std::cout << "Ice default constructor called\n";
	_type = "ice";
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called\n";
}

Ice::Ice(const Ice &a)
{
	std::cout << "Ice copy constructor called\n";
	_type = a.getType();
}

/*---MEMBER FUNCTIONS---*/

std::string const & Ice::getType() const
{
	return (_type);
}

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

/*---OPERATORS---*/

Ice & Ice::operator = (Ice &a)
{
	_type = a.getType();
	return (*this);
}