# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 13:23:55 by frocha            #+#    #+#              #
#    Updated: 2025/02/10 13:23:56 by frocha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:%.cpp=%.o)
NAME = account

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
