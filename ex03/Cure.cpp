#include "Cure.hpp"

/*---CONS/DES---*/

Cure::Cure()
{
	std::cout << "Cure default constructor called\n";
	_type = "cure";
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called\n";
}

Cure::Cure(const Cure &a)
{
	std::cout << "Cure copy constructor called\n";
	_type = a.getType();
}

/*---MEMBER FUNCTIONS---*/

std::string const & Cure::getType() const
{
	return (_type);
}

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

/*---OPERATORS---*/

Cure & Cure::operator = (Cure &a)
{
	_type = a.getType();
	return (*this);
}