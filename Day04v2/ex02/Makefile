# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maalexan <maalexan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 13:55:12 by maalexan          #+#    #+#              #
#    Updated: 2023/10/27 11:04:09 by maalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME		:=	lastone

# Directories for source, object and libraries
SRC_DIR		:=	./
OBJ_DIR		:=	./objs
HDR_DIR		:=	./

# Compilation flags
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -g -I $(HDR_DIR)

# Source files
FUN			:=	main.cpp \
				CourseFinishedForm.cpp \
				NeedCourseCreationForm.cpp \
				NeedMoreClassRoomForm.cpp \
				Headmaster.cpp \
				Secretary.cpp \
				SubscriptionToCourseForm.cpp

# Object files
OBJ			:=	$(FUN:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(BSRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(BCFLAGS) -c $< -o $@

val: all
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./${NAME} || echo ""

clean:
	@[ -d ./objs ] && rm -rf ./objs || echo Object directory doesn\'t exist

fclean: clean
	@[ -f ./$(NAME) ] && rm $(NAME) || echo Program $(NAME) isn\'t compiled

re: fclean all

.PHONY: all clean fclean re