#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
private:
    std::string _DEBUG;
    std::string _INFO;
    std::string _WARNING;
    std::string _ERROR;
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    Karen();
    ~Karen();
   void     complain(std::string level);
};

#endif