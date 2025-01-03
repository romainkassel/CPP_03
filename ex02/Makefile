NAME = repetitiveWork

SRCS = ./srcs/

INCLUDES = -Iincludes

CPPFILES = 	$(SRCS)main.cpp $(SRCS)ClapTrap.cpp $(SRCS)ScavTrap.cpp $(SRCS)FragTrap.cpp \
			tests/testCopyByAffectation/testClapTrapCopyByAffectation.cpp tests/testCopyByAffectation/testScavTrapCopyByAffectation.cpp \
			tests/testCopyByAffectation/testFragTrapCopyByAffectation.cpp \
			tests/testCopyByConstructor/testClapTrapCopyByConstructor.cpp tests/testCopyByConstructor/testScavTrapCopyByConstructor.cpp \
			tests/testCopyByConstructor/testFragTrapCopyByConstructor.cpp
OFILES = $(CPPFILES:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) -g -o $(NAME) $(OFILES)

$(SRCS)%.o: $(SRCS)%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

tests/testCopyByAffectation/%.o: tests/testCopyByAffectation/%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

tests/testCopyByConstructor/%.o: tests/testCopyByConstructor/%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re