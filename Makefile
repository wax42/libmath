# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/13 18:05:18 by smokhtar          #+#    #+#              #
#    Updated: 2019/04/22 18:33:23 by vguerand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libmaths.a


#==============================================================================#
#------------------------------------------------------------------------------#
#                               DIRECTORIES                                    #

SRC_DIR			:= ./srcs


INC_DIR			:=		./includes
OBJ_DIR			:=		./objs

#==============================================================================#
#------------------------------------------------------------------------------#
#                                  FILES                                       #

SRC_NAME = 	m_delta.c  		\
			m_vec_add.c  	\
			m_vec_sub.c  	\
			m_vec2_create.c  \
			m_vec2_mul.c  	\
			m_vec2_div.c  	\
			m_vec2_dot.c  	\
			m_vec2_norm.c  	\
			m_vec2_norm.c  	\
			m_vec3_create.c  \
			m_vec3_mul.c  	\
			m_vec3_div.c  	\
			m_vec3_dot.c  	\
			m_vec3_norm.c  	\
			m_vec3_norma.c

SRC_ALL			:= 			$(addprefix $(SRC_DIR)/,$(SRC_NAME))

OBJ				:=			$(addprefix $(OBJ_DIR)/,$(SRC_NAME:.c=.o))

NB				:=			$(words $(SRC_ALL))
INDEX			:=			0

#==============================================================================#
#------------------------------------------------------------------------------#
#                            COMPILER & FLAGS                                  #

CC					:=			gcc
CFLAGS				:=			-Wall -Wextra -Werror
# CFLAGS			+=			-g3
# CFLAGS			+=			-O2


#==============================================================================#
#------------------------------------------------------------------------------#
#                                 RULES                                        #

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@printf "[ 100%% ] %s"

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c $(INC_DIR)
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo "$@"))
	@$(CC) $(CFLAGS) -o $@ -c $< -I$(INC_DIR)
	@printf "[ %d%% ] %s :: %s       \r" $(PERCENT) $(NAME) $@
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@printf '\033[33m[ KILL ] %s\n\033[0m' "Clean of $(NAME) is done ---"

fclean: 				clean
	@rm -rf $(NAME)
	@printf '\033[33m[ KILL ] %s\n\033[0m' "Fclean of $(NAME) is done ---"

re:
	@$(MAKE) fclean
	@$(MAKE)

.PHONY: all clean fclean re build cbuild
