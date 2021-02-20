# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/15 18:10:22 by apaula-b          #+#    #+#              #
#    Updated: 2021/02/20 20:23:21 by apaula-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of project
NAME = libft.a

HEADER = libft.h

CC= gcc

#flags to compile
FLAGS = -Wall -Wextra -Werror

#files to compile
FILES =  ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlen.c  \
		ft_strlcat.c \
		ft_strchr.c \
		ft_atoi.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_bzero.c \
		ft_memset.c \
		ft_calloc.c \
		ft_strnstr.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_strdup.c 
		
OBJ = $(FILES:.c=.o)

#1st rule to execute
all: $(NAME)  

#rule name
$(NAME): $(OBJ) $(HEADER)
		ar -rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
		$(CC) $(FLAGS) -c $(FILES)

#clear object file
clean: 
		rm -f $(OBJ)

#clear object file and library
fclean: clean 
		rm -f $(NAME)

#clean files and execute library
re: fclean all 

.PHONY:        all clean fclean
