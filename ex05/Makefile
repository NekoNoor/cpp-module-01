# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nschat <nschat@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/13 21:15:00 by nschat        #+#    #+#                  #
#    Updated: 2021/11/08 16:14:56 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = main.cpp \
	  Karen.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Karen_2_0

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
