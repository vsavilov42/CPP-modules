# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Vsavilov <Vsavilov@student.42Madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 17:21:42 by Vsavilov          #+#    #+#              #
#    Updated: 2023/02/01 15:24:55 by Vsavilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = NoAnimalNoSound

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
      Animal.cpp \
      Cat.cpp \
      Dog.cpp \
      Chicken.cpp \
      WrongAnimal.cpp \
      WrongCat.cpp \
      Brain.cpp

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
