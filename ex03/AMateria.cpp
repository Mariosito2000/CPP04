#include "AMateria.hpp"

/*---CONS/DES---*/

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called\n";
	_type = "None";
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called\n";
}

AMateria::AMateria(const AMateria &a)
{
	std::cout << "AMateria copy constructor called\n";
	_type = a.getType();
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria type constructor called\n";
	_type = type;
}

/*---MEMBER FUNCTIONS---*/

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* this spell had no effect on " << target.getName() << " *\n"; 
}

/*---OPERATORS---*/

AMateria & AMateria::operator = (AMateria &a)
{
	this->_type = a.getType();
	return (*this);
}