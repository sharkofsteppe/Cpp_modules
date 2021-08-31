#include "Conversion.hpp"

Conversion::Conversion(/* args */)
{
}

Conversion::~Conversion()
{
}

Conversion::Conversion(Conversion const &ref)
{
    this->_todouble = ref._todouble;
}
Conversion & Conversion::operator=(Conversion const &ref)
{
    this->_todouble = ref._todouble;
    return (*this);
}

const char* Conversion::CantConverseException::what() const throw()
{
    return ("CAN'T CONVERSE");
}

double    Conversion::firstStep(std::string & str)
{
    double   num;
    try
    {
        if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
            return (static_cast<double>(str[1]));
        num = std::stod(str);
    }
    catch(const std::exception& e)
    {
        throw Conversion::CantConverseException();
    }
    return (num);
}

char    Conversion::toChar(double initial)
{
    char c = static_cast<char>(initial);
    if (initial == std::numeric_limits<double>::infinity() ||
         initial == -std::numeric_limits<double>::infinity() ||
        std::isnan(initial))
        throw (std::string("impossible"));
    if (initial < 32 || initial > 126)
        throw std::string("CANNOT DISPLAY");
    return (c);
}
int     Conversion::toInt(double initial)
{
    if (initial == std::numeric_limits<double>::infinity() ||
         initial == -std::numeric_limits<double>::infinity() ||
        std::isnan(initial))
        throw (std::string("impossible"));
    if (initial < std::numeric_limits<int>::min() || initial > std::numeric_limits<int>::max())
        throw std::string("OVERFLOW");
    return(static_cast<int>(initial));
}

float   Conversion::toFloat(double initial)
{
    if (initial < std::numeric_limits<float>::min() || initial > std::numeric_limits<float>::max())
        throw std::string("OVERFLOW");
        
    return(static_cast<float>(initial));
}

double  Conversion::toDouble(double initial)
{
    return (static_cast<double>(initial));
}
