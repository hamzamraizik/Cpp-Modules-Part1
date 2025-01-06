#include "main.hpp"

int main(int ac, char **av){

    if (ac != 4){
            std::cout << "invalid args!" << std::endl;
            return 1;}
    std::fstream iofile;

    iofile.open(av[1]);
    if (!iofile){
        std::cerr << "Error: Could not open file for reading." << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::fstream outfile;
    outfile.open(filename + ".replace");
    if (!outfile){
        std::cerr << "Error: Could not open file for writing." << std::endl;
        return 1;
    }
    std::string line;
    while (getline(iofile, line)){
        
    }
}
