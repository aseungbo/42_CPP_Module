#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class Mutantstack : public std::stack<T>
{
	public:
		class iterator
		{
			public:
				iterator() : ptr(NULL) {}
				iterator(T *param) : ptr(param) {}
				~iterator() { ptr = NULL; }
				iterator(const iterator &copy) { *this = copy; }
				iterator &operator=(const iterator &param)
				{
					ptr = param.ptr;
					return (*this);
				}
				iterator operator + (const int &i)
				{
					iterator temp(ptr + i);
					return (temp);
				}
				iterator operator - (const int &i)
				{
					iterator temp(ptr - i);
					return (temp);
				}
				iterator &operator++()
				{
					++ptr;
					return *this;
				}
				iterator operator++(int)
				{
					iterator temp(ptr);
					++(ptr);
					return temp;
				}
				iterator &operator--(void)
				{
					--ptr;
					return *this;
				}
				iterator operator--(int)
				{
					iterator temp(ptr);
					--(ptr);
					return temp;
				}
				bool operator > (const iterator &param)
				{
					return (this->ptr > param.ptr);
				}
				bool operator < (const iterator &param)
				{
					return (this->ptr < param.ptr);
				}
				bool operator >= (const iterator &param)
				{
					return (this->ptr >= param.ptr);
				}
				bool operator <= (const iterator &param)
				{
					return (this->ptr <= param.ptr);
				}
				bool operator == (const iterator &param)
				{
					return (this->ptr == param.ptr);
				}
				bool operator != (const iterator &param)
				{
					return (this->ptr != param.ptr);
				}
				T &operator * (void)
				{
					return (*ptr);
				}
			private:
				T *ptr;
		};
	Mutantstack() {}
	~Mutantstack() {}
	Mutantstack(Mutantstack &copy) { *this = copy; }
	Mutantstack &operator=(const Mutantstack &ms)
	{
		if (this == &ms)
			return (*this);
		std::stack<T>::operator=(ms);
		return (*this);
	}
	iterator begin()
	{
		iterator res((&this->top()) - (this->size() - 1));
		return res;
	}
	iterator end()
	{
		iterator res((&this->top()) + 1);
		return res;
	}
};

#endif
