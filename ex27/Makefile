#######################################################################
                            # VARIABLES #
GCC = gcc -Wall -Wextra -Werror

SRCS = srcs/main.c

OBJS = srcs/main.o

ALL = ft_display_file.a

EXEC = ft_display_file

INC = includes/ft.h

########################################################################
                            # RULES #
# Règle par défaut 'all' pour créer la librairie et l'exécutable
all: $(ALL) $(EXEC)

# Création de la librairie statique
$(ALL): $(OBJS)
		ar rcs $(ALL) $(OBJS)

# Création de l'exécutable
$(EXEC): $(OBJS)
		$(GCC) -o $(EXEC) $(OBJS)

# Compilation des fichiers .c en .o
$(OBJS): srcs/%.o : srcs/%.c
		$(GCC) -c $< -o $@

# Suppression des fichiers objets
clean:
		rm -f $(OBJS)

# Suppression des fichiers objets et de la librairie
fclean: clean
		rm -f $(ALL) $(EXEC)

# Récréation de la librairie et de l'exécutable
re: fclean all
