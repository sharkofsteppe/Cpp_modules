#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>

class Conversion;

class Conversion
{
private:
    double       _todouble;
public:
    Conversion(/* args */);
    ~Conversion();
    Conversion(Conversion const &ref);
    Conversion & operator=(Conversion const &ref);

//------------------EXCEPTIONS--------------------------------//

    class CantConverseException : public std::exception
    {
    private:
        /* data */
    public:
        virtual const char* what() const throw();
    };

//------------------METHODS-----------------------------------//

    double    firstStep(std::string & str);

    char    toChar(double initial);
    int     toInt(double initial);
    float   toFloat(double initial);
    double  toDouble(double initial);

};

#endif