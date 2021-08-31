#include "easyfind.hpp"

int main()
{
    std::vector<int> arr;
    std::vector<int>::iterator it;
    
    arr.push_back(1);
    arr.push_back(23);
    arr.push_back(53);
    arr.push_back(51);
    arr.push_back(65);
    arr.push_back(3);
    arr.push_back(29);

    try
    {
        std::cout << *(easyfind(arr, 23)) << '\n';
    }
    catch(const std::string &str)
    {
        std::cerr << str << '\n';
    }
    return (0);
}