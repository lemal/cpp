SRCS	=	cpp_0.cpp
NAME	=	test

OBJS	=	${SRCS:%c=%.o}
DEPS	=	${SRCS:%c=%d}

CPPFLAGS=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f
CC		=	c++
DFLAGS	=	-MMD -MP

%.o:	%.c
	${CC} ${CPPFLAGS} ${DFLAGS} -c $< -o $@

${NAME}:	${OBJS} cpp_0.hpp
	${CC} ${CPPFLAGS} ${OBJS} -o $@

all:	${NAME}

clean:	
	${RM} ${OBJS} ${DEPS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY	= all clean fclean re