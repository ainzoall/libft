NAME = libft.a
HEAD = libft.h
CC = cc
AR = ar -rcs
CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c \
ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c
OBJECTS = $(FUNCTIONS:.c=.o)

BONUS_FUNCTIONS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUSES = $(BONUS_FUNCTIONS:.c=.o)

all: ${NAME}

${NAME}: ${OBJECTS}
	${AR} $(NAME) ${OBJECTS}

bonus: ${BONUSES}
	${AR} $(NAME) ${OBJECTS} ${BONUSES}

%.o: %.c ${HEAD}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJECTS} ${BONUSES}

fclean: clean
	rm -f $(NAME)

re: fclean all
