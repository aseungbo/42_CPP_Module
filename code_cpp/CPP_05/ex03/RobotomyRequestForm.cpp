#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("Robotomy", R_SIGN, R_EXEC), _target("Default")
	{}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("Robotomy", R_SIGN, R_EXEC), _target(target)
	{}

RobotomyRequestForm::~RobotomyRequestForm()
	{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rform)
	: Form("Robotomy", R_SIGN, R_EXEC)
{
	*this = rform;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& rform)
{
	if (this == &rform)
		return (*this);
	_target = rform._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw (Form::SignException());
	if (executor.getGrade() >= getGradeExecute())
		throw (Form::ExecuteException());
	// random num
	srand((unsigned int)time(NULL));
	int num = rand();
	if (num % 2 == 0)
		std::cout << _target << " has been robotomized successfully " << std::endl;
	else
		std::cout << _target << " has been robotomized failure " << std::endl;
}
