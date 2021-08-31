#include "Span.hpp"

int main()
{
    // try
    // {
    //      Span unit(10);
    
    //     unit.addNumber(1);
    //     unit.addNumber(-7);
    //     unit.addNumber(23);
    //     unit.addNumber(54);
    //     unit.addNumber(765);
    //     unit.addNumber(3);
    //     unit.addNumber(98);
    //     unit.addNumber(24);
    //     unit.addNumber(74);
    //     unit.addNumber(27);
    //     unit.addNumber(27);

    //     std::cout << unit.shortestSpan()<< '\n';
    //     std::cout << unit.longestSpan()<< '\n';
    // }
    // catch(const std::string &str)
    // {
    //     std::cerr << str << '\n';
    // }
    
    try
    {
        srand(time(NULL));
        Span un(10000000);
        std::vector<int> vec;
        for(int i = 0; i < 10000000; i++)
        {
            vec.push_back(rand());
        }
        un.addNumber(vec.begin(), vec.end());
        std::sort(un.arr.begin(), un.arr.end());
        std::cout << un.shortestSpan() << '\n';
        std::cout << un.longestSpan() << '\n';

        
    }
    catch(const std::string& e)
    {
        std::cerr << e << '\n';
    }
    
    return (0);
}
