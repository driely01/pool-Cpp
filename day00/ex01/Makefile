SRC = Contact.cpp \
	  main.cpp \
	  PhoneBook.cpp \
	  PhoneBookUtils.cpp

OBG = ${SRC:.cpp=.o}

HEADRS = Contact.hpp \
		 PhoneBook.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

NAME = phone

all: ${NAME}

${NAME}: ${OBG}
	${CC} ${CFLAGS} ${OBG} -o ${NAME}

%.o: %.cpp ${HEADRS}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBG}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean all fclean re