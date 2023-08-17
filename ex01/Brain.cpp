#include "Brain.hpp"

/*---CONS/DES---*/

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called\n";
}

Brain::Brain(const Brain &a)
{
	std::cout << "Brain copy constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = a._ideas[i];
}

/*---MEMBER FUNCTIONS---*/

/*---OPERATORS---*/

Brain & Brain::operator = (Brain &a)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
	return (*this);
}