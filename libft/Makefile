# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:35:03 by kibotrel          #+#    #+#              #
#    Updated: 2019/09/25 14:58:54 by kibotrel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------- VARIABLES ---------------------------------#

# Executable / Library (Can be changed).

NAME			= libft.a

# Color codes (Can be changed).

RESET			= \033[0m
GREEN			= \033[32m
YELLOW			= \033[33m

#--------------------------------- DIRECTORIES  -------------------------------#

# Project (Can be changed).

SRCS_DIR		= srcs
OBJS_DIR		= objs

# Location of all header files used in the project to avoid
# writing the full path upon include (Can be changed).

INCS_DIR		:= incs

# All the subdirectories used in the project
# to organise source files (Can be changed).

OBJS_SUBDIRS	:= file
OBJS_SUBDIRS	+= maths
OBJS_SUBDIRS	+= memory
OBJS_SUBDIRS	+= string
OBJS_SUBDIRS	+= control
OBJS_SUBDIRS	+= display
OBJS_SUBDIRS	+= conversion

#------------------------------------ FILES -----------------------------------#

# Used header at each compilation to check file integrity (Can be changed).

INCS			:= incs/libft.h

# Source files (Can be changed).

SRCS			:= file/ft_get_next_line.c
SRCS			+= maths/ft_abs.c
SRCS			+= maths/ft_int.c
SRCS			+= maths/ft_fabs.c
SRCS			+= maths/ft_short.c
SRCS			+= maths/ft_degrees.c
SRCS			+= maths/ft_radians.c
SRCS			+= maths/ft_average.c
SRCS			+= memory/ft_bzero.c
SRCS			+= memory/ft_memchr.c
SRCS			+= memory/ft_memcpy.c
SRCS			+= memory/ft_memset.c
SRCS			+= memory/ft_strnew.c
SRCS			+= memory/ft_memccpy.c
SRCS			+= memory/ft_memmove.c
SRCS			+= memory/ft_memalloc.c
SRCS			+= string/ft_strcat.c
SRCS			+= string/ft_strchr.c
SRCS			+= string/ft_strcpy.c
SRCS			+= string/ft_strdup.c
SRCS			+= string/ft_strrev.c
SRCS			+= string/ft_strsub.c
SRCS			+= string/ft_strjoin.c
SRCS			+= string/ft_strncat.c
SRCS			+= string/ft_strncpy.c
SRCS			+= string/ft_strtrim.c
SRCS			+= string/ft_strsplit.c
SRCS			+= control/ft_memcmp.c
SRCS			+= control/ft_numlen.c
SRCS			+= control/ft_strcmp.c
SRCS			+= control/ft_strequ.c
SRCS			+= control/ft_strlen.c
SRCS			+= control/ft_strstr.c
SRCS			+= control/ft_isalnum.c
SRCS			+= control/ft_isalpha.c
SRCS			+= control/ft_isascii.c
SRCS			+= control/ft_isdigit.c
SRCS			+= control/ft_isprint.c
SRCS			+= control/ft_isspace.c
SRCS			+= control/ft_strncmp.c
SRCS			+= control/ft_strnequ.c
SRCS			+= control/ft_strnstr.c
SRCS			+= control/ft_charcount.c
SRCS			+= control/ft_wordcount.c
SRCS			+= control/ft_charrcount.c
SRCS			+= control/ft_wordlength.c
SRCS			+= control/ft_isvalidname.c
SRCS			+= control/ft_str_is_lowercase.c
SRCS			+= control/ft_str_is_uppercase.c
SRCS			+= display/ft_putnbr.c
SRCS			+= display/ft_putstr.c
SRCS			+= display/ft_putchar.c
SRCS			+= display/ft_putendl.c
SRCS			+= display/ft_putnbr_fd.c
SRCS			+= display/ft_putstr_fd.c
SRCS			+= display/ft_putchar_fd.c
SRCS			+= display/ft_putendl_fd.c
SRCS			+= display/ft_print_error.c
SRCS			+= conversion/ft_atoi.c
SRCS			+= conversion/ft_itoa.c
SRCS			+= conversion/ft_tolower.c
SRCS			+= conversion/ft_toupper.c
SRCS			+= conversion/ft_itoa_base.c
SRCS			+= conversion/ft_strupcase.c
SRCS			+= conversion/ft_strlowcase.c

#-------------------------------- MISCELANEOUS --------------------------------#

# Some tricks in order to get the makefile doing his job (Can't be changed).

D_SRCS			= $(addsuffix /, $(SRCS_DIR))
D_OBJS			= $(addsuffix /, $(OBJS_DIR))
C_OBJS			= $(addprefix $(D_OBJS), $(OBJS))
C_INCS			= $(foreach include, $(INCS_DIR), -I$(include))
C_SUBDIRS		= $(foreach dir, $(OBJS_SUBDIRS), $(D_OBJS)$(dir))

#--------------------------------- COMPILATION --------------------------------#

# How files should be compiled (Can't be changed).

CC				= gcc
OBJS			= $(SRCS:.c=.o)

# Compilation flags (Can be changed).

CFLAGS			= $(C_INCS) -Wall -Wextra -Werror

#------------------------------------ RULES -----------------------------------#

# Redefinition of the implicit compilation rule
# to prompt some informations (Can't be changed).

$(D_OBJS)%.o: $(D_SRCS)%.c $(INCS)
	@echo "$(YELLOW)      - Compiling :$(RESET)" $<
	@$(CC) $(CFLAGS) -c $< -o $@

# Implicit make rule simply using dependancies
# to compile our project (Can't be canged).

all: $(C_SUBDIRS) $(NAME)

$(NAME): $(OBJS_DIR) $(C_OBJS)
	@echo "$(YELLOW)\n      - Building $(RESET)$(NAME) $(YELLOW)...\n$(RESET)"
	@ar rcs $(NAME) $(C_OBJS)
	@echo "$(GREEN)***   Project $(NAME) successfully compiled   ***\n$(RESET)"

# Rules used to create folders if they aren't already existing (Can be changed).

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(C_SUBDIRS):
	@mkdir -p $(C_SUBDIRS)

# Deleting all .o files. (Can't be changed).

clean:
	@echo "$(GREEN)***   Deleting all object from $(NAME)   ...   ***\n$(RESET)"
	@$(RM) $(C_OBJS)

# Deleting the library after cleaning up all .o files (Can't be changed).

fclean: clean
	@echo "$(GREEN)***   Deleting library $(NAME)   ...   ***\n$(RESET)"
	@$(RM) $(NAME)

# Re-compile everything (Can't be changed).

re: fclean all

# Avoid unexpected behaviour when regular files
# get the same name as the following variables (Can be changed).

.PHONY: all clean fclean re
