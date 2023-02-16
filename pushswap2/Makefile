SRCS =		libft/ft_atoi.c \
			libft/ft_putchar_fd.c \
			libft/ft_putstr_fd.c \
			libft/ft_lstnew.c \
			libft/ft_lstadd_front.c \
			libft/ft_lstsize.c \
			libft/ft_lstlast.c \
			libft/ft_lstclear.c \
			libft/ft_lstadd_back.c \
			libft/ft_split.c \
			libft/ft_calloc.c \
			libft/ft_memset.c \
			libft/ft_substr.c \
			libft/ft_strlen.c \
			libft/ft_strlcpy.c \
			libft/ft_strdup.c \
			libft/error_messages.c \
			libft/ft_isalpha.c \
			libft/ft_isdigit.c \
			checker.c \
			cleaner.c \
			find.c \
			find2.c \
			mainfunction.c \
			sort.c \
			src1.c \
			src2.c \
			src3.c \
			sort2.c \

OBJS = ${SRCS:.c=.o}
NAME = push_swap.a
CC = gcc 
CFLAGS = -Wall -Werror -Wextra 

all: ${NAME}

${NAME}: ${OBJS} 
	ar rc ${NAME} ${OBJS}

.gcc:
	${CC} ${CFLAGS} -o pushswap main.c sort.c ${NAME} 
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME} pushswap	

re: fclean all

.PHONY: all clean fclean re