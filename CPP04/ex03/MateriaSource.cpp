#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->size = 0;
	std::cout <<" Materia source Created." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &mat)
{
	*this = mat;
	std::cout <<" Materia source Copy created." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &mat)
{
	for (int x = 0; x < mat.size; x++)
		this->inventory[x] = mat.inventory[x];
	this->size = mat.size;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int x = 0; x < this->size; x++)
		delete this->inventory[x];
	std::cout <<"Materia source Destroyed." << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->size < 3)
	{
		this->inventory[this->size] = m;
		this->size++;
		std::cout <<"Materia source Learned " << m->getType() << "." << std::endl;
	}
	else
		std::cout << "Materia source Cannot learn " << m->getType() << ": full inventory." << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &mat_name)
{
	for (int x = 0; x < this->size; x++)
	{
		if (mat_name == this->inventory[x]->getType())
			return(this->inventory[x]->clone());
	}
	std::cout << "Unknown Materia..."<< std::endl;
	return (0);
}