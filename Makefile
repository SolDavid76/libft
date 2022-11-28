SRCS =	ft_atoi.c \
		ft_isalpha.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memmove.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memset.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

OBJS = ${SRCS:.c=.o}

SRCSBONUS =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJSBONUS	= ${SRCSBONUS:.c=.o}


NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
			ar -rcs $(NAME) $(OBJS)


bonus: ${OBJS} ${OBJSBONUS}
			ar -rcs ${NAME} ${OBJS} ${OBJSBONUS}

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
			${RM} ${NAME}

re: fclean all

#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCSBONUS)
#	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJSBONUS)

.PHONY:		bonus all clean fclean re
