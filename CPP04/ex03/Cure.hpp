#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"


class Cure : public AMateria
{
	private:
		;

	protected:
		;

	public:
		Cure();
		Cure(const Cure &cure);
		~Cure();

	AMateria *	clone() const;
};


#endif