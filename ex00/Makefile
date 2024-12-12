# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nyacoubi <nyacoubi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 21:20:47 by nyacoubi          #+#    #+#              #
#    Updated: 2024/12/12 08:20:24 by nyacoubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Fixed

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

INC_DIR		=	inc/

INC			=	$(INC_DIR)Fixed.hpp

SRC_DIR		=	src/

SRC_FILES	=	Fixed.cpp \
				main.cpp

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ_DIR		=	obj/

OBJ			=	$(addprefix $(OBJ_DIR), $(notdir $(SRC:.cpp=.o)))

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
			@mkdir -p $(OBJ_DIR)
			$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME):	$(OBJ) Makefile $(INC)
			$(CC) $(FLAGS) -o $(NAME) $(OBJ) -I $(INC)
			@echo "\n\033[1;32mCompilation Done ✅\033[m"

all:		$(NAME)

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re