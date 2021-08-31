#ifndef REPL_HPP
#define REPL_HPP

#include <string>
#include <iostream>
#include <fstream>

class Repl
{
private:
    size_t              _pos;
    std::string         _str;
    std::string         _filename;
    std::string         _arg;
    std::string         _argsec;
    std::ifstream       _ifs;
    std::ofstream       _ofs;
    /* data */
public:
    int     opener(void);
    void    replacer(void);
    Repl(char **argv);
    ~Repl();
   
};






#endif