SRCF= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OFILES= main.o Animal.o   Dog.o   Cat.o Brain.o
FLAGS =  -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = animal

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
