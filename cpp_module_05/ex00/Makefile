NAME = Bureaucrat

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
      Bureaucrat.cpp

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
