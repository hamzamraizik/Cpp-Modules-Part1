SFILES = main.cpp Fixed.cpp Fixed.hpp

OFILES =$(SFILES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

NAME = fixed

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp Zombie.hpp
	$(CPP) $(FLAGS)  -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
