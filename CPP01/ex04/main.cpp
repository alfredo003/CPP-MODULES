#include <iostream>
#include <fstream>

std::string ft_replace(std::string line, const std::string &s1, const std::string &s2, int &replaced)
{
    size_t found = 0;
    while ((found = line.find(s1, found)) != std::string::npos)
    {
        line.erase(found, s1.length());
        line.insert(found, s2);
        found += s2.length();
        replaced = 1;
    }
    return line;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {    
        std::cout << "Usage: ./replacer <filename> <str1> <str2>" << std::endl;
        return 1;
    }
    
    std::string filename = av[1];
    std::string s1 = av[2]; 
    std::string s2 = av[3];

    if (s1.empty() || s2.empty())
    {
        std::cout << "Empty string" << std::endl;
        return 1;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        std::cout << "File Error" << std::endl;
        return 1;
    }

    std::string line;
    std::string content;
    int replaced = 0;

    while (std::getline(inFile, line))
    {    
        content += ft_replace(line, s1, s2, replaced) + "\n";
    }        
    inFile.close();

    if (replaced)
    {
        std::ofstream outFile((filename + ".replace").c_str());
        if (!outFile.is_open())
        {
            std::cout << "File Error" << std::endl;
            return 1;
        }
        outFile << content;
        outFile.close();
    }

    return 0;
}

