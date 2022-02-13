#include "iter.hpp"

int main( void )
{
    int arr[5] = {5, 4, 3, 2, 1};

    iter(arr, 5, print_val);
    return 0;
}