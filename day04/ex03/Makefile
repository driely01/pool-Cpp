SRC = main.cpp \
	  AMateria.cpp \
	  Character.cpp \
	  MateriaSource.cpp \
	  Cure.cpp \
	  Ice.cpp 


OBJ = ${SRC:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g
RM = rm -f

NAME = animal
HEADER = AMateria.hpp \
		 Character.hpp \
		 ICharacter.hpp \
		 IMateriaSource.hpp \
		 MateriaSource.hpp \
		 Cure.hpp \
		 Ice.hpp


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