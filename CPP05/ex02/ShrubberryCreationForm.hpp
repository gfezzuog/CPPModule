#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberryCreationForm : public AForm
{
    private:
        std::string _file;
    public:
        ShrubberryCreationForm();
        ShrubberryCreationForm(const ShrubberryCreationForm &sform);
        ShrubberryCreationForm(const std::string filename);
        virtual ~ShrubberryCreationForm();

        void execute(const Bureaucrat &bureaucrat) const;

	ShrubberryCreationForm& operator=(const ShrubberryCreationForm &sform);
};


#endif