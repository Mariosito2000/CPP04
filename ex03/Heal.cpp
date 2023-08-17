#include "Heal.hpp"

/*---CONS/DES---*/

Heal::Heal()
{
	std::cout << "Heal default constructor called\n";
	_type = "Heal";
}

Heal::~Heal()
{
	std::cout << "Heal default destructor called\n";
}

Heal::Heal(const Heal &a)
{
	std::cout << "Heal copy constructor called\n";
	_type = a.getType();
}

/*---MEMBER FUNCTIONS---*/

std::string const & Heal::getType() const
{
	return (_type);
}

Heal* Heal::clone() const
{
	Heal *a = new Heal();
	return (a);
}

void Heal::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

/*---OPERATORS---*/

Heal & Heal::operator = (Heal &a)
{
	_type = a.getType();
	return (*this);
}