#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"


class Ice : public AMateria
{
	private:
		;

	protected:
		;

	public:
		Ice();
		Ice(const Ice &ice);
		~Ice();

	AMateria *	clone() const;
};


#endif