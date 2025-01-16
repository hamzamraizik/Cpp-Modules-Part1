SFILES = main.cpp PhoneBook.cpp Contact.cpp

OFILES =$(SFILES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

NAME = phonebook

all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@

%.o: %.cpp PhoneBook.hpp Contact.hpp Utils.hpp
	$(CPP) $(FLAGS)  -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all