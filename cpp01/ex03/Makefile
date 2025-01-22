SFILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OFILES =$(SFILES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

NAME = brain

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CPP) $(FLAGS)  -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
