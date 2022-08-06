NAME = $(shell date +%Y%m%d_%H%M%S)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror --std=c++98

SRC =	tests.cpp \
	Account.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(NAME) > .bin_time
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(shell cat .bin_time)
	@rm -rf .bin_time

re: fclean all

.PHONY: all re clean fclean
