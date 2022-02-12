#include "span.hpp"

Span::Span()
	: size(0)
	{}

Span::~Span()
	{}

Span::Span(unsigned int N)
	: size(N)
	{}

Span::Span(Span& copy)
{
	*this = copy;
}

Span& Span::operator = (const Span& span)
{
	if (this == &span)
		return (*this);
	v = span.v;
	size = span.size;
	return (*this);
}

void Span::addNumber(const int& number)
{
	if (v.size() >= size)
		throw std::exception();
	v.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int gap = static_cast<int>(end - begin);
	if ((v.size() + gap) >= size)
		throw std::exception();
	int i = 1;
	while (begin++ < end)
		v.push_back(i++);
}

int Span::shortestSpan(void)
{
	if (v.size() < 2)
		throw std::exception();
	std::vector<int>::iterator it = v.begin();
	int min = INT_MAX;
	while (it < (v.end() - 1))
	{
		int span = *it - *(it + 1);
		if (span < 0)
			span *= -1;
		if (min > span)
			min = span;
		it++;
	}
	return(min);
}

int Span::longestSpan(void)
{
	if (v.size() < 2)
		throw std::exception();

	std::vector<int>::iterator it = v.begin();
	int max = 0;
	while (it < (v.end() - 1))
	{
		int span = *it - *(it + 1);
		if (span < 0)
			span *= -1;
		if (max < span)
			max = span;
		it++;
	}
	return(max);
}

std::vector<int> Span::getV() const
{
	return (v);
}