SFILES = main.cpp
OFILES =$(SFILES:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = phonebook
all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@
%.o: %.cpp PhoneBook.hpp Contact.hpp
	$(CPP) $(FLAGS)  -c $(SFILES) -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)