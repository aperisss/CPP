

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabid <mabid@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 04:26:12 by mabid             #+#    #+#              #
#    Updated: 2022/12/14 12:33:55 by mabid            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CC = c++
RM = rm -rf
FLAGS = -Wextra -Wall -Werror -std=c++98

SRC_FILES = newZombie.cpp randomChump.cpp main.cpp Zombie.cpp
OBJS = $(SRC_FILES:.cpp=.o)
OBJS_F	= _objFiles/

$(NAME): 

					@mkdir -p $(OBJS_F)
					@$(CC) $(FLAGS) -c $(addprefix $(SRC_DIR), $(SRC_FILES))
					@mv $(OBJS) $(OBJS_F)
					@$(CC) $(FLAGS) $(addprefix $(OBJS_F), $(OBJS)) -o $(NAME)

all:				$(NAME)

clean:
					@${RM} $(OBJS_F)
					@${RM}  ${OBJS}

fclean: 	clean
					@${RM} $(NAME)

re:			fclean all