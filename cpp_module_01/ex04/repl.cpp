#include "repl.hpp"

Repl::~Repl()
{
    this->_ofs.close();
    this->_ifs.close();
    std::cout << "Files are closed!" << std::endl;

}

Repl::Repl(char **argv) : _filename(argv[1]),
                                    _arg(argv[2]),
                                    _argsec(argv[3]),
                                    _ifs(this->_filename),
                                    _ofs(this->_filename.append(".replace")) 
{
}

int    Repl::opener(void)
{
    if (!(this->_ifs.is_open()))
    {
        std::cout << "Error: there is no file with such name!" << std::endl;
        return (1);
    }
    if (!(this->_ofs.is_open()))
    {
        std::cout << "Error: file is not created!" << std::endl;
        this->_ifs.close();
        return (1);   
    }
    return (0);
}

void    Repl::replacer(void)
{
    while (std::getline(this->_ifs, this->_str))
    {
        if ((this->_pos = this->_str.find(this->_arg)) != std::string::npos)
        {
            
            this->_str.erase(this->_pos, this->_arg.length());
            this->_str.insert(this->_pos, this->_argsec);
            this->_ofs << this->_str ;
        }
        else
            this->_ofs << this->_str;
        if (!(this->_ifs.eof()))
        {
            this->_ofs << std::endl;
        }
    }
   
}