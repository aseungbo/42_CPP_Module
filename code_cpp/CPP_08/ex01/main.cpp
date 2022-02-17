#include "span.hpp"

int main(void)
{
	Span sp(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		sp.addNumber(42); // throw
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	std::cout << " [TEST 10000 numbers] " << std::endl;
	Span sp2(10000);
    std::vector<int>::iterator begin;
    begin = sp2.getV().begin();
    std::vector<int>::iterator end = begin + 10000;
    sp2.addNumber(begin, end); // 1 ~ 10000까지 숫자 생성

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	try
	{
		sp2.addNumber(42); // throw	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << " [TEST Span Exception] " << std::endl;
	Span sp3(3);
	sp3.addNumber(1);
	try
	{
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}