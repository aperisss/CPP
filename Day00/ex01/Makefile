# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperis <aperis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 17:53:18 by mabid             #+#    #+#              #
#    Updated: 2023/01/28 11:17:23 by aperis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = repertoire

CC = c++
RM = rm -rf
FLAGS = -Wextra -Wall -Werror -std=c++98

SRC_FILES = Contact.cpp PhoneBook.cpp main.cpp
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