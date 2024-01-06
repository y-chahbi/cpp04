# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 17:33:28 by ychahbi           #+#    #+#              #
#    Updated: 2024/01/02 03:56:03 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUBJ = Animal
SRC  = Animal.cpp main.cpp Cat.cpp Dog.cpp Brain.cpp
CC= c++
FLAGS= -g -Wall -Wextra -Werror -std=c++98
RM= rm -f
OBJ_ALL = $(SRC:.cpp=.o)

all: $(SUBJ)

$(SUBJ): $(OBJ_ALL)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp 
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_ALL)

fclean: clean
	$(RM) $(SUBJ)

re: fclean all

.PHONY: clean fclean all re