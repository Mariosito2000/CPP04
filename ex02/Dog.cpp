#include "Dog.hpp"

/*---CONS/DES---*/

Dog::Dog()
{
	std::cout << "Dog default constructor called\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{	
	std::cout << "Dog default destructor called\n";
	delete _brain;
}

Dog::Dog(const Dog &a)
{
	std::cout << "Dog copy constructor called\n";
	_type = a._type;
	_brain = new Brain();
	*_brain = *a._brain;
}

/*---MEMBER FUNCTIONS---*/

std::string	Dog::getType() const
{
	return (_type);
}

void	Dog::makeSound() const
{
	std::cout << "Guau\n";
}

/*---OPERATORS---*/

Dog & Dog::operator = (Dog &a)
{
	_type = a._type;
	*_brain = *a._brain;
	return (*this);
}