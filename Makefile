NAME = libft.a

FLAGS = -Wall -Werror -Wextra

FUNCTIONS = ft_isprint.c     ft_putendl_fd.c  ft_strlcat.c  ft_substr.c \
ft_atoi.c     ft_itoa.c        ft_putnbr_fd.c   ft_strlcpy.c  ft_tolower.c \
ft_bzero.c    ft_memchr.c      ft_putstr_fd.c   ft_strlen.c   ft_toupper.c \
ft_calloc.c   ft_memcmp.c      ft_split.c       ft_strmapi.c \
ft_isalnum.c  ft_memcpy.c      ft_strchr.c      ft_strncmp.c \
ft_isalpha.c  ft_memmove.c     ft_strdup.c      ft_strnstr.c \
ft_isascii.c  ft_memset.c      ft_striteri.c    ft_strrchr.c \
ft_isdigit.c  ft_putchar_fd.c  ft_strjoin.c     ft_strtrim.c

BONUS_FCT = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJECTS=$(FUNCTIONS:.c=.o)

BONUS_OBJ=$(BONUS_FCT:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

.c.o:
	cc $(FLAGS) -c $< -o $@

BONUS_OBJ: $(BONUS_FCT)
	@cc -Wall -Wextra -Werror -c $(BONUS_FCT) -o $(BONUS_OBJ)

bonus: $(BONUS_OBJ) $(NAME)

clean:
	@rm -f $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
