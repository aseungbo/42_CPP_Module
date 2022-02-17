#include "span.hpp"

int main(void)
{
	try
	{
		std::cout << " [TEST full exception ] " << std::endl;
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << " Add done " << std::endl;
		// sp.addNumber(42); // throw
		std::cout << std::endl;

		std::cout << " [TEST 10000 numbers full exception ] " << std::endl;
		Span sp2(10000);
		std::vector<int> v;
    	for (int i = 0; i < 10000; i++)
        	v.push_back(i);
		sp2.addNumber(v.begin(), v.end());
		std::cout << " Add done " << std::endl;
		// sp2.addNumber(42); // throw	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}