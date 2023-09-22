SRC = main.cpp \
	  Weapon.cpp \
	  HumanB.cpp \
	  HumanA.cpp

OBJ = ${SRC:.cpp=.o}

NAME = brain
HEADER = Weapon.hpp \
		 HumanB.hpp \
		 HumanA.hpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re