#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(Span& copy);
		Span& operator = (const Span& span);
		void addNumber(const int& number);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
		std::vector<int> getV() const;

	private:
		std::vector<int> v;
		unsigned int size;
};

#endif