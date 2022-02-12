#include "span.hpp"

int main(void)
{
	try
	{
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		//Span sp(100000);
		//std::vector<int>::iterator begin;
		//begin = sp.getV().begin();
		//sp.addNumber(begin, begin + 100000);
		//std::cout << sp.shortestSpan() << std::endl;
		//std::cout << sp.longestSpan() << std::endl;
		//sp.addNumber(begin, begin + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}