#include "Utils.hpp"

int main(int ac, char **av)
{
    if (ac != 4){
            std::cout << "invalid args!\n";
            return 1;}
    std::ifstream infile;
    infile.open(av[1]);
    if (!infile)
    {
        std::cerr << "Error: Could not open file for reading.\n";
        return 1;
    }
    std::string filename = av[1];
    std::ofstream outfile;
    outfile.open((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: Could not open file for writing.\n";
        return 1;
    }
    std::string allLines;
    std::string Buffer;
    while ((getline(infile, Buffer))){
        Buffer += "\n";
        allLines += Buffer;
    }
    infile.close();
    replace_word(allLines, av[2], av[3]);
    outfile << allLines;
    outfile.close();
}
