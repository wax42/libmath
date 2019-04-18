# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smokhtar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/13 18:05:18 by smokhtar          #+#    #+#              #
#    Updated: 2019/02/13 18:05:20 by smokhtar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libmaths.a

SRC_NAME =m_delta\
		m_vec_add\
		m_vec_sou\
		m_vec2_create\
		m_vec2_mul\
		m_vec2_div\
		m_vec2_dot\
		m_vec2_norm\
		m_vec2_norm\
		m_vec3_create\
		m_vec3_mul\
		m_vec3_div\
		m_vec3_dot\
		m_vec3_norm\
		m_vec3_norma

src = $(addsuffix .c, $(SRC_NAME))

object = $(addsuffix .o, $(SRC_NAME))

head = .

flag = -Wall -Werror -Wextra

all: $(NAME) 

$(NAME):
	gcc -c $(flag) $(src) -I$(head) $(flag)
	ar rcs libmaths.a $(object)

clean:
	rm -f $(object)

fclean: clean
	rm -f libmaths.a

re : fclean all

.PHONY: all clean fclean re