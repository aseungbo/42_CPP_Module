#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	for (int i = 0; i < 5; i++)
		vec.push_back(i);

	std::vector<int>::iterator iter = vec.begin();
	while(iter < vec.end())
	{
		std::cout << *iter;
		if (iter < vec.end() - 1)
			std::cout << ", ";
		iter++;
	}
	std::cout << std::endl;
	try
	{
		std::vector<int>::iterator iter_1 = easyfind(vec, 2);
		std::cout << "find!, " << *iter_1 << std::endl;
		std::vector<int>::iterator iter_2 = easyfind(vec, 4);
		std::cout << "find!, " << *iter_2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}