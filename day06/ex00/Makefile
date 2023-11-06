SRC = main.cpp \
	  ScalarConverter.cpp


OBJ = ${SRC:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

NAME = convert
HEADER = ScalarConverter.hpp


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