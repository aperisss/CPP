NAME = Encore_plus_de_cerveaux_!

CC = c++
RM = rm -rf
FLAGS = -Wextra -Wall -Werror -std=c++98

SRC_FILES = zombieHorde.cpp main.cpp Zombie.cpp
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