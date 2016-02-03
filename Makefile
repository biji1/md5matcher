#md5matcher @ 2016 Noël "biji" Do Van

CC		=	g++

RM		=	rm -f

NAME		=	md5matcher

SRCS		=	main.cpp	\
			Parser.cpp	\
			Comparator.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

SRCS2		=	md5.c		\

OBJS2		=	$(SRCS2:.c=.o)

CXXFLAGS	=	-W -Wall -Wextra -Werror -O3

all:	$(NAME)

$(NAME): $(OBJS) $(OBJS2)
	$(CC) -o $(NAME) $(OBJS) $(OBJS2)

clean:
	$(RM) $(OBJS) $(OBJS2)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
