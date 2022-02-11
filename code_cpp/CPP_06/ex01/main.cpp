#include "Serialization.hpp"

int main()
{
    Serialization s;

    Data *d = new Data;
	d->_val = 42;
	Data *dCopy = NULL;
	uintptr_t uptr;

	std::cout << " [ TEST Serialization ] " << std::endl;
    uptr = s.serialize(d);
	std::cout << "d value: " << d->_val << std::endl;
	std::cout << "uptr address use serialize: " << uptr << std::endl;

    std::cout << " [ TEST Deserialization ] " << std::endl;
	dCopy = s.deserialize(uptr);
	std::cout << "dCopy value: " << dCopy->_val << std::endl;
	std::cout << "dCopy address: " << dCopy << std::endl;
	delete dCopy; // 
	d = NULL;
	dCopy = NULL;
	return (0);
}