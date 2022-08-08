NAME = replace

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror --std=c++98

SRC = main.cpp \
      sed.cpp

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
