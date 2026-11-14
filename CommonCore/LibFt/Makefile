#	Fonctionnement d'un Makefile
#		cible : fichier source
#			commande

# Variables
CC = gcc -Wall -Werror -Wextra

NAME = libft.a

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

# Traitements
# Appel toutes les cibles pour créer la librairie statique en une seule commande
all: $(NAME)

# Génère la librairie statique à partir des fichiers .o
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Génère les fichiers .o en compilant les fichiers .c
$(OBJS): $(SRCS)
	$(CC) $(SRCS) -o $(OBJS)

# Supprime tous les fichiers .o existants
clean:
	rm -f $(OBJS)

# Supprime tous les fichiers .o + librairie statique existante
fclean: clean
	rm -f $(NAME)

# Supprime les fichiers .o, le librairie et recré le librairie statique
re: fclean all

.PHONY: all clean fclean re