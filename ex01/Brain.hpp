#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:

	std::string	_ideas[100];

public:

/*---CONS/DES---*/

	Brain();
	~Brain();

	Brain(const Brain &);

/*---MEMBER FUNCTIONS---*/

/*---OPERATORS---*/

	Brain & operator = (Brain &);

};

#endif