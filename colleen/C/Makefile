# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataguiro <ataguiro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/15 14:57:28 by ataguiro          #+#    #+#              #
#    Updated: 2018/05/13 14:33:54 by ataguiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ===== Editable =====
NAME	:=	colleen
INDEX	:=	1
# ====================

# ===== Standard =====
CC		:=	gcc
SRC		:=	$(NAME).c
# ====================

# ====== Colors ======
EOC			= "\033[0;0m"
RED			= "\033[0;31m"
# ====================

.PHONY: all fclean
.SILENT:

all:
	$(CC) $(SRC) -o $(NAME)
	echo "\033[1;32m" "✓ $(NAME) ok ;)" "\033[0m"

clean:
	rm -f $(NAME)
	printf $(RED)"$(NAME) removed\n"$(EOC)
