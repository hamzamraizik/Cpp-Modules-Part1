SFILES = main.cpp Harl.cpp

OFILES =$(SFILES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

NAME = harlFilter

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp Harl.hpp
	$(CPP) $(FLAGS)  -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
