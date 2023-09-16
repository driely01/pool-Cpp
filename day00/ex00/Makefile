SRCS = megaphone.cpp

OBJ = ${SRCS:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

NAME = megaphone

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:clean all fclean re