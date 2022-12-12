SRCS	=	main.cpp Fixed.cpp
NAME	=	a.out

OBJS	=	${SRCS:%.cpp=%.o}
DEPS	=	${OBJS:%.o=%.d}

CPPFLAGS=	-Wall -Wextra -Werror -std=c++98 
RM		=	rm -f
CC		=	c++
DFLAGS	=	-MMD -MP

%.o:	%.cpp
	${CC} ${CPPFLAGS} ${DFLAGS} -c $< -o $@

${NAME}:	${OBJS} 
	${CC} ${CPPFLAGS} ${OBJS} -o $@

all:	${NAME}

clean:	
	${RM} ${OBJS} 
	${RM} ${DEPS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

-include ${DEPS}

.PHONY: all clean fclean re
