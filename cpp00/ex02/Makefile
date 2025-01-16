SFILES = tests.cpp Account.cpp

OFILES =$(SFILES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

NAME = account

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp Account.hpp
	$(CPP) $(FLAGS)  -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all