#include "span.hpp"

Span::Span()
{
	_size = 0;
}

Span::~Span()
{
	;
}

Span::Span(unsigned int N)
{
	_size = N;
}

Span::Span(Span& copy)
{
	*this = copy;
}

Span& Span::operator = (const Span& span)
{
	if (this == &span)
		return (*this);
	_v = span._v;
	_size = span._size;
	return (*this);
}

void Span::addNumber(int number)
{
	if (_v.size() >= _size)
		throw (FullException());
	_v.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int>::iterator iter;
    int i = 1;
    for (iter = begin; iter != end; iter++)
    {
        addNumber(i);
        i++;
    }
}

int Span::shortestSpan(void) const
{
	if (_v.size() <= 1)
		throw (NoSpanException());
	return (0);
}

int Span::longestSpan(void) const
{
	if (_v.size() <= 1)
		throw (NoSpanException());
	int longVal = *max_element(_v.begin(), _v.end()) - *min_element(_v.begin(), _v.end());
	return(longVal);
}

std::vector<int> Span::getV() const
{
	return (_v);
}

const char * Span::FullException::what() const throw()
{
    return ("Already full!");
}

const char * Span::NoSpanException::what() const throw()
{
    return ("No span to find!");
}