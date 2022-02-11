#include "Form.hpp"

Form::Form()
	: _name("Default"), _gradeSign(75), _gradeExecute(75), _isSigned(false)
{
	std::cout << _name << " constructor called." << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute)
	: _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _isSigned(false)
{
	isValidGrades(gradeSign, gradeExecute);
	std::cout << _name << " constructor called." << std::endl;
}

Form::~Form()
{
	std::cout << _name << " destructor called." << std::endl;
}

Form::Form(const Form &form)
{
	*this = form;
	std::cout << _name << " Copy constructor called." << std::endl;
}

Form& Form::operator = (const Form &form)
{
	if (this == &form)
		return (*this);
	_name = form._name;
	_gradeSign = form._gradeSign;
	_gradeExecute = form._gradeExecute;
	_isSigned = form._isSigned;
	return (*this);
}

std::string Form::getName() const
{
	return _name;
}

int Form::getGradeSign() const
{
	return _gradeSign;
}

int Form::getGradeExecute() const
{
	return _gradeExecute;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

void Form::setName(std::string name)
{
	_name = name;
}

void Form::setGradeSign(int gradeSign)
{
	_gradeSign = gradeSign;
}

void Form::setGradeExecute(int gradeExecute)
{
	_gradeExecute = gradeExecute;
}

void Form::setIsSigned(bool isSigned)
{
	_isSigned = isSigned;
}

void Form::isValidGrades(int gradeSign, int gradeExecute)
{
	if (gradeSign > 150 || gradeExecute > 150)
		throw (Form::GradeTooLowException());
	else if (gradeSign < 1 || gradeExecute < 1)
		throw (Form::GradeTooHighException());
}

void Form::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() >= _gradeSign)
		throw (Form::GradeTooLowException());
	else
		_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

const char* Form::ExecuteException::what() const throw()
{
	return ("This grade is low than execute grade");
}

const char* Form::SignException::what() const throw()
{
	return ("This form is unsigned");
}

std::ostream& operator << ( std::ostream &out, const Form &form )
{
	out << form.getName();
	out << ", Form gradeSign: ";
	out << form.getGradeSign();
	out << ", Form gradeExecute: ";
	out << form.getGradeExecute();
	out << ", Form isSigned: ";
	out << form.getIsSigned();
	return out;
}