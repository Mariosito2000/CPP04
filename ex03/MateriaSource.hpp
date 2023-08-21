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

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

/*---OPERATORS---*/

	MateriaSource & operator = (MateriaSource &);

};

#endif