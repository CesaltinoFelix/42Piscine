SRCS_DIR = ./srcs/

SRC = main.c ft_verify_args.c ft_verify_dict.c ft_validation.c ft_str.c ft_init.c ft_manage_dict.c ft_print1.c ft_print2.c ft_split.c ft_trio_nbr.c

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = $(SRCS:.c=.o)

HEADER_DIR = ./includes/

DICT_DIR = ./dicts/

CC = cc

CFLAGS = -Wall -Wextra -Werror

OUTPUT = rush-02

all : $(OUTPUT)

.c.o:
	@${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

$(OUTPUT) : $(SRCS_OBJ)
	@${CC} ${CFLAGS} -o ${OUTPUT} ${SRCS_OBJ}

clean :
	rm -f $(SRCS_OBJ)

fclean : clean
	rm -f $(OUTPUT)

re : fclean all

.PHONY : all clean fclean re
