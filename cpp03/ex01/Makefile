SRCF=main.cpp ClapTrap.cpp  ScavTrap.cpp
OFILES=main.o  ClapTrap.o ScavTrap.o
FLAGS =  -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = scavtrap

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
