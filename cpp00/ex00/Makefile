SFILES = Megaphone.cpp
OFILES =$(SFILES:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
NAME = Megaphone
all: $(NAME)

$(NAME): $(OFILES)
	$(CPP) $(FLAGS) $(OFILES) -o $@
%.o: %.cpp
	$(CPP) $(FLAGS)  -c $(SFILES) -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)