# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/15 18:10:22 by apaula-b          #+#    #+#              #
#    Updated: 2021/02/25 21:18:06 by apaula-b         ###   ########.fr        #
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
		ft_strdup.c \
		ft_memcmp.c  \
		ft_memchr.c \
		ft_memmove.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_putchar_fd.c\
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_itoa.c \
		ft_putnbr_fd.c\
		ft_strmapi.c \
		ft_strtrim.c \
		ft_split.c 
				
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
