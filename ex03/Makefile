NAME = DiamondTrap

INPUT = \
	main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp \

OUTPUT = ${INPUT:.cpp=.o}

all: ${NAME}

%.o: %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -Wshadow -g -c $< -o $@

${NAME}: ${OUTPUT}
	c++ -Wall -Wextra -Werror -std=c++98 -Wshadow -g ${OUTPUT} -o ${NAME}

clean:
	rm -f ${OUTPUT}

fclean:	clean
	rm -f ${NAME}

re:		fclean all

test: $(NAME)
	./$(NAME)