# Nom
NAME = libftprintf.a
PROJECT = ft_printf

# Options de compilation
CC = @gcc
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I includes/ -I $(LIBFT_INC) -I $(LIBAG_INC)

# Headers
INC_FILE = ft_printf.h
INC = $(addprefix includes/, $(INC_FILE))

# Sources
SRC_FILE = conversion.c corrections.c find.c ft_printf.c length_modifier.c print.c
SRC_SUB_FILE = conversion_c.c conversion_c_cap.c conversion_d.c conversion_o.c conversion_p.c conversion_percent.c conversion_s.c conversion_s_cap.c conversion_u.c conversion_x.c
SRC = $(addprefix src/, $(SRC_FILE)) $(addprefix src/conversions/, $(SRC_SUB_FILE))

# Objets
OBJ = $(SRC:.c=.o)

# Règles
all: $(NAME)

$(NAME) : Makefile $(LIBFT_INC) $(LIBAG_INC) $(OBJ)
	@echo "$(MAGEN)Création de la bibliothèque $(NAME)"
	@ar rc $(NAME) $(OBJ)
	@echo "Création de l'index pour $(NAME)$(RESET)"
	@ranlib $(NAME)

$(OBJ) : $(INC)

clean:
	@echo "$(ROUGEC)Suppression des fichiers objets de $(NAME)$(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(ROUGEC)Suppression de la bibliothèque $(NAME)$(RESET)"
	@rm -f $(NAME)

re: fclean all

# Règle pour la norme
norme: clean
	@echo "$(MAGEN)Norme pour $(PROJECT)$(RESET)"
	@norminette includes/ src/

# Règles pour la documentation
doxygen:
	@echo "$(JAUNE)Pas de documentation pour $(PROJECT)$(RESET)"
#	@echo "$(CYAN)Génération de la documentation de $(PROJECT)$(RESET)"
#	@$(DOXYGEN) documentation/$(PROJECT).doxyconf > documentation/$(PROJECT).log

cleandoxy:
	@echo "$(JAUNE)Pas de documentation pour $(PROJECT)$(RESET)"
#	@echo "Suppression de la documentation de $(PROJECT)"
#	@rm -rf documentation/html
#	@rm -rf documentation/$(PROJECT).log

# Couleurs
RESET = \033[0m
BLANC = \033[37m
BLEU  = \033[34m
CYAN  = \033[36m
JAUNE = \033[33m
MAGEN = \033[35m
NOIR  = \033[30m
ROUGE = \033[31m
ROUGEC = \033[1;31m
VERT  = \033[32m

# Variables
DOXYGEN = doxygen

.PHONY: all clean fclean re doxygen cleandoxy
