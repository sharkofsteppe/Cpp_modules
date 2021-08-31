NAME	=	Account
FUN		=	Account.cpp tests.cpp
OBJ		=	${FUN:.cpp=.o}
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror
RM		=	rm

all: ${NAME}
${NAME}:	${OBJ}
		${CC} ${FLAGS} ${OBJ} -o ${NAME}
%.o : %.cpp
		${CC} ${FLAGS} -o $@ -c $<
clean:
	@${RM} -f ${OBJ}
	@echo "[INFO] OBJECTS ARE REMOVED!"
fclean: clean
	${RM} -f ${NAME}
	@echo "[INFO] ${NAME} IS DELETED!"
re: fclean all