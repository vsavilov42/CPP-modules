# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Vsavilov <Vsavilov@student.42Madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 17:21:42 by Vsavilov          #+#    #+#              #
#    Updated: 2023/02/04 17:03:56 by Vsavilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98

SRC = main.cpp \
      AMateria.cpp \
      Character.cpp \
      Ice.cpp \
      Cure.cpp \
      MateriaSource.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
