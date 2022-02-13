#include "Array.hpp"

int main(void)
{
    std::cout << " [ TEST n parameter ] " << std::endl;
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
    {
        intArr[i] = i;
        std::cout << "intArr[" << i << "]: " << intArr[i] << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << " [ TEST Out of Limits ] " << std::endl;
        intArr[4] = 10;
        std::cout << "intArr[4]: " << intArr[4] << std::endl;
        intArr[5] = 5;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    system("leaks a.out");
    return 0;
}
