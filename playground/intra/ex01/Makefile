SRCS	=	cpp_1.cpp
NAME	=	test

OBJS	=	${SRCS:%.cpp=%.o}
DEPS	=	${OBJS:%.o=%.d}

CPPFLAGS=	-Wall -Wextra -Werror -Wno-unused -std=c++98
RM		=	rm -f
CC		=	c++
DFLAGS	=	-MMD -MP

%.o:	%.c
	${CC} ${CPPFLAGS} ${DFLAGS} -c $< -o $@

${NAME}:	${OBJS} cpp_1.hpp
	${CC} ${CPPFLAGS} ${OBJS} -o $@

all:	${NAME}

clean:	
	${RM} ${OBJS} ${DEPS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY	= all clean fclean re