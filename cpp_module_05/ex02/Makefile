NAME = AdvancedForm

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
      Bureaucrat.cpp \
      Form.cpp \
      PresidentialPardonForm.cpp \
      RobotomyRequestForm.cpp \
      ShrubberyCreationForm.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm "Shrubbery creation_shrubbery"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
