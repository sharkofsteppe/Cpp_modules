#include "Iter.hpp"

void    plusone(int &n)
{
    n += 5;
    return ;
}

int main()
{
    // int arr[10];

    // for(int i = 0; i < 10; i++)
    // {
    //     arr[i] = i;
    // }

    // ::iter(arr, 10, plusone);

    // for(int i = 0; i < 10; i++)
    // {
    //     std::cout << arr[i] << '\n';
    // }
    int *arr = NULL;
    ::iter(arr, 10, plusone);
    return (0);
}