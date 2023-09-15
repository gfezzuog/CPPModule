#include "ShrubberryCreationForm.hpp"

ShrubberryCreationForm::ShrubberryCreationForm()
{
}

ShrubberryCreationForm &ShrubberryCreationForm::operator=(const ShrubberryCreationForm &sform)
{
	this->_file = sform._file;
	return (*this);
}

ShrubberryCreationForm::ShrubberryCreationForm(const ShrubberryCreationForm &sform)
{
	*this = sform;
}

ShrubberryCreationForm::ShrubberryCreationForm(const std::string filename)
{
	this->_file = filename;
}
ShrubberryCreationForm::~ShrubberryCreationForm()
{
}

void ShrubberryCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	std::ofstream file;

	permissionCheck(bureaucrat);
	file.open((this->_file));
	if (!file.good())
		throw FormCouldNotOpenFileException();
	file << "              v .   ._, |_  .," << std::endl;
	file << "       \'-._\\/  .  \\ /    |/_" << std::endl;
	file << "           \\\\  _\\, y | \\//" << std::endl;
	file << "     _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
	file << "       \'7-,--.\'._||  / / ," << std::endl;
	file << "       /\'     \'-.\'./ / |/_.\'" << std::endl;
	file << "                 |    |//" << std::endl;
	file << "                 |_    /   " << _file << std::endl;
	file << "                 |-   |" << std::endl;
	file << "                 |   =|" << std::endl;
	file << "                 |    |" << std::endl;
	file << "----------------/ ,  . \\--------._" << std::endl;
	file.close();
}