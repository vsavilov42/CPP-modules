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

FILE = Shrubbery creation_shrubbery

clean:
	rm -rf $(OBJ)
	@if [ -f "$(FILE)" ]; then\
		rm "$(FILE)";\
	fi

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
