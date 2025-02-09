CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Contact.cpp Phonebook.cpp run_phonebook.cpp
OBJS = $(SRCS:%.cpp=%.o)
NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean re