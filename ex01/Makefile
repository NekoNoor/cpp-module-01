# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nschat <nschat@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/13 21:15:00 by nschat        #+#    #+#                  #
#    Updated: 2021/10/18 15:03:50 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = main.cpp \
	  Zombie.cpp \
	  ZombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Moar_brainz

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
