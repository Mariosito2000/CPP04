#pragma once
#ifndef MATERIA_HPP
# define MATERIA_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

private:

	AMateria	*_materias[4];

public:

/*---CONS/DES---*/

	MateriaSource();
	~MateriaSource();

	MateriaSource(const MateriaSource &);

/*---MEMBER FUNCTIONS---*/

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

/*---OPERATORS---*/

	MateriaSource & operator = (MateriaSource &);

};

#endif