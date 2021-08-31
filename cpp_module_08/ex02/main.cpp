#include "Mutantstack.hpp"

int main()
{
    Mutantstack<double> mstack;
    mstack.push(5);
    mstack.push(17);
    // std::cout << mstack.top() << std::endl;
    mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    // std::cout << mstack.top() << std::endl;
    // //[...]
    mstack.push(0);
    std::cout << mstack.size() << std::endl;

    Mutantstack<double>::iterator it = mstack.begin();
    Mutantstack<>::iterator ite = mstack.end();
    ++it;
    // std::cout << *(it)  <<  *ite<< mstack.top () << std::endl;

    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return (0);
}
