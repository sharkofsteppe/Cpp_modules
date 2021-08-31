#include "Karen.hpp"

Karen::Karen() : _DEBUG("I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"),
                 _INFO("I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"),
                 _WARNING("I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."),
                _ERROR("This is unacceptable, I want to speak to the manager now.")
{
    arr[0] = "DEBUG";
    arr[1] = "INFO";
    arr[2] = "WARNING";
    arr[3] = "ERROR";
}

Karen::~Karen()
{
}

void    Karen::info(void)
{
    std::cout << this->_INFO << std::endl;
}
void    Karen::debug(void)
{
    std::cout << this->_DEBUG << std::endl;

}
void    Karen::warning(void)
{
    std::cout << this->_WARNING << std::endl;

}
void    Karen::error(void)
{
    std::cout << this->_ERROR << std::endl;

}



void     Karen::complain(std::string level)
{
    size_t      i;
    void (Karen::*ptr[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    i = 0;
    while (i < 4)
    {
        if (level == arr[i])
            break ;
        i++;
    }
    switch (i)
    {
    case 0:
        (this->*ptr[0])();
        break;
    case 1:
        (this->*ptr[1])();
        break;
    case 2:
        (this->*ptr[2])();
        break;
    case 3:
        (this->*ptr[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

