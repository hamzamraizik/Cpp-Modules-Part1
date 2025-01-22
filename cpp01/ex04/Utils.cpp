#include "Utils.hpp"

void replace_word(std::string& line, char *s1, char *s2){
    size_t fonded;
    size_t i = 0;

    if (!s1 || !s2)
        return ;
    std::string word = s2;
    while (line[i])
    {
        if ((fonded = line.find(s1)) != line.npos)
        {
            if (i == fonded)
            {
                for (size_t j = 0; j < word.length() && line[i]; j++)
                {
                    line[i] = word[j];
                    i++;
                }
            }
        }
        i++;
    }
}
