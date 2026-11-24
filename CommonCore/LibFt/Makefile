#	Fonctionnement d'un Makefile
#		cible : fichier source
#			commande

# Variables
CC = cc

FLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:%.c=%.o)

# Traitements
# Appel toutes les cibles pour créer la librairie statique en une seule commande
all: $(NAME)

# Génère les fichiers .o en compilant les fichiers .c
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

#Génère la librairie statique à partir des fichiers .o
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Supprime tous les fichiers .o existants
clean:
	rm -f $(OBJS)

# Supprime tous les fichiers .o + librairie statique existante
fclean: clean
	rm -f $(NAME)

# Supprime les fichiers .o, le librairie et recré le librairie statique
re: fclean all

.PHONY: all clean fclean re