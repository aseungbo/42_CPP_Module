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
	int addSize = static_cast<int>(end - begin);
	if ((_v.size() + addSize) > _size)
		throw (FullException());
	for (; begin != end; begin++)
		addNumber(*begin);
}

// int Span::shortestSpan(void)
// {
// 	if (v.size() < 2)
// 		throw (NoSpanException());

// 	return(min);
// }

// int Span::longestSpan(void)
// {
// 	if (v.size() < 2)
// 		throw (NoSpanException());
// 	return(max);
// }

std::vector<int>& Span::getV()
{
	return (_v);
}

const char * Span::FullException::what() const throw()
{
    return ("Already full");
}
const char * Span::NoSpanException::what() const throw()
{
    return ("No span to find");
}