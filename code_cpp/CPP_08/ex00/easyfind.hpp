#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

template <typename T>
typename T::iterator easyfind(T& container, const int& value)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);

	if (iter == container.end())
		throw std::exception();
	return iter;
}

#endif