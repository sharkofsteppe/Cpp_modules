# include "Why.hpp"

int main(int argc, char **argv)
{
    std::string arg;
    double       num;
    
    if (argc != 2)
    {
        std::cout << "Wrong arguments" << std::endl;
        return (0);
    }

    Conversion  unit;
    arg = argv[1];
    try
    {
        num = unit.firstStep(arg);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    try
    {
        char c = unit.toChar(num);
        std::cout << "Char: '" << c << "\'" << '\n';
    }
    catch(std::string &str)
    {
        std::cout << "Char:" << str << '\n';
    }


    try
    {
        int i = unit.toInt(num);
        std::cout << "Int: " << i << '\n';
    }
    catch(std::string &str)
    {
        std::cout << "Int: " << str << '\n';
    }

    try
    {
        float f = unit.toFloat(num);
        std::cout.precision(1);
        std::cout << std::fixed << "Float: " << f << "f" << std::endl;
    }
    catch(std::string &str)
    {
        std::cout << "Float: " << str << '\n';
    }
    try
    {
        std::cout.precision(1);
        std::cout << std::fixed << "Double: " << unit.toDouble(num) << '\n';
    }
     catch(std::string &str)
    {
        std::cout << "Double: " << str << '\n';
    }

    return (0);
}
