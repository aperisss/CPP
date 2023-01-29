#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using std::fstream;

std::string file_copy(char **av)
{
    char c;
    std::string str;
    std::ifstream ifs(av[1]);
    if(!ifs)
    {
        std::cerr << "Error with the file " << std::endl;
        exit(0);
    }
    c = ifs.get();
    while(ifs.good())
    {
        str = str + c;
        c = ifs.get();
    }
    ifs.close();
    return (str);
}

std::string replace_string(std::string copy, char **av)
{
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.length() == 0 || s2.length() == 0)
    {
        std::cout << "Error, empty args" << std::endl;
        exit(0);
    }
    std::string tmp;
    std::string tmp2;
    std::string replace;
    size_t index = 0;
    while ((index = copy.find(s1, index)) != std::string::npos) {
        tmp = copy.substr(0, index);
        tmp2 = copy.substr(index + s1.size(), copy.size());
        copy = tmp + s2 + tmp2;
        index += s2.size();
    }
   
    return copy;
}

int main(int ac, char **av)
{
    if ( ac != 4)
        return (0);
    std::string filename;
    std::string name;
    std::string copy;
    std::string str;
    copy = file_copy(av);
    copy = replace_string(copy, av);
    name = ".replace";
    filename = av[1] + name;
    std::ofstream replace(filename.c_str());
    if (replace)
        replace << copy;
    replace.close();
    return (0);
}