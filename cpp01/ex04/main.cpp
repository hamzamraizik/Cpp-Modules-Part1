#include "main.hpp"
//npos
void replace_word(std::string& line, char *s1, char *s2){
    size_t fonded;
    int i = 0;

    std::string word = s2;
    while (line[i])
    {
        if ((fonded = line.find(s1)))
        {
            if (i == fonded)
            {
                for (int j = 0; j < word.length() && line[i]; j++)
                {
                    line[i] = word[j];
                    i++;
                }
            }
        }
        i++;
    }
}

int main(int ac, char **av)
{

    if (ac != 4){
            std::cout << "invalid args!" << std::endl;
            return 1;}
    std::ifstream infile;

    infile.open(av[1]);
    if (!infile.is_open())
    {
        std::cerr << "Error: Could not open file for reading." << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::ofstream outfile;
    outfile.open(filename + ".replace");
    if (!outfile.is_open())
    {
        std::cerr << "Error: Could not open file for writing." << std::endl;
        return 1;
    }
    std::string allLines;
    char    c;
    while (infile.get(c)){
        allLines += c;
    }
    infile.close();
    replace_word(allLines, av[2], av[3]);
    outfile << allLines;
}
