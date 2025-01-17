SRCF=main.cpp ClapTrap.cpp ClapTrap.hpp
OFILES=main.o  ClapTrap.o
FLAGS =  -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = claptrap

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp ClapTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
