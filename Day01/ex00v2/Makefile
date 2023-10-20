# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 09:04:17 by inwagner          #+#    #+#              #
#    Updated: 2023/10/19 21:57:03 by inwagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
NAME		:=	main
HDR_DIR		:=	./
SRC_DIR		:=	./
OBJ_DIR		:=	./objs
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -I $(HDR_DIR)

# Source files
FTS			:=	main.cpp \
				Hammer.cpp \
				Shovel.cpp \
				Tool.cpp \
				Worker.cpp

# Object files
OBJ			:=	$(FTS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

# Compile Objects
$(NAME): $(OBJ)
	@c++ $(OBJ) -o $@

# Make Objects
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@c++ $(CFLAGS) -c $< -o $@

clean:
	@[ -d $(OBJ_DIR) ] && rm -rf $(OBJ_DIR) || [ -f Makefile ]

fclean:	clean
	@[ -f ./$(NAME) ] && rm $(NAME) && echo $(NAME) cleaned ||  [ -f Makefile ]

re: fclean all

.PHONY: all clean fclean re
