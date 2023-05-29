#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*inventory[4];
		int			size;

	protected:
		;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &mat);
		~MateriaSource();

	MateriaSource &operator=(const MateriaSource &mat);

	void		learnMateria(AMateria *);
	AMateria	*createMateria(std::string const &);
};

#endif