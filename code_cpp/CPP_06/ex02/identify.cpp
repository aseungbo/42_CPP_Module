#include <iostream>
#include <exception>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "Pointer func, Class A!" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "Pointer func, Class B!" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "Pointer func, Class C!" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Ref func, Class A!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Ref func, Class B!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Ref func, Class C!" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}