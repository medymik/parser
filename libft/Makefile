# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mymik <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 17:51:54 by mymik             #+#    #+#              #
#    Updated: 2019/11/05 17:52:01 by mymik            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_strdup.c \
	   ft_calloc.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_putnchar_fd.c

SRCB = ft_lstnew_bonus.c \
	   ft_lstadd_front_bonus.c \
	   ft_lstsize_bonus.c \
	   ft_lstlast_bonus.c \
	   ft_lstadd_back_bonus.c \
	   ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c \
	   ft_lstiter_bonus.c \
	   ft_lstmap_bonus.c

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

OBJB = $(SRCB:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus : all $(OBJB)
	ar rcs $(NAME) $(OBJB)

%.o: %.c
	clang $(FLAGS) -c $< -o $@ 

clean:
	/bin/rm -f $(OBJS) $(OBJB)

fclean: clean
	/bin/rm -f libft.a

re: fclean all
