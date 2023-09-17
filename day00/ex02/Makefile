SRC = Account.cpp \
	  tests.cpp \

OBJ = ${SRC:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

NAME = accounts

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp Account.hpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean re fclean