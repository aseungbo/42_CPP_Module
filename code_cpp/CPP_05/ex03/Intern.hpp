#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern &operator = (const Intern& intern);

		Form* makeForm(std::string name, std::string target);
		Form* shrubberyMake(std::string target);
		Form* robotomyMake(std::string target);
		Form* presidentialMake(std::string target);

		class InternException : public std::exception
		{
			public:
				const char* what(void) const throw();
		};
};
  
#endif