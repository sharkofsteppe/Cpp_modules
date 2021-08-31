NAME	=	player
FUN		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp 
OBJ		=	${FUN:.cpp=.o}
DEP		=	${FUN:.cpp=.d}
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -MMD 
RM		=	rm

all: ${NAME}
${NAME}:	${OBJ}
		${CC} ${FLAGS} ${OBJ} -o ${NAME}
-include ${DEP}
%.o : %.cpp 
		${CC} ${FLAGS} -o $@ -c $<
clean:
	@${RM} -f ${OBJ} ${DEP}
	@echo "[INFO] OBJECTS ARE REMOVED!"
fclean: clean
	${RM} -f ${NAME}
	@echo "[INFO] ${NAME} IS DELETED!"
re: fclean all