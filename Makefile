# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: kerbault <kerbault@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/22 21:55:44 by kerbault     #+#   ##    ##    #+#        #
#    Updated: 2018/03/13 14:32:52 by kerbault    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SHELL		:= /bin/bash

#### Start of system configuration section ####

NAME		:= libft.a
CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
AR			:= ar
ARFLAGS		:= rc
RANLIB		:= ranlib
MKDIR		:= mkdir
MKDIRFLAGS	:= -p
RM			:= /bin/rm
RMFLAGS		:= -rf
ECHO		:= echo
QUIET		:= @
NORM		:= norminette

#### End of system configuration section ####

#### Start of files definition section ####

INCLUDESDIR	:= includes
SRCDIR		:= src
SRCS		:= \
	ft_atoi.c \
	ft_isascii.c \
	ft_memset.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isdigit.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_strcat.c \
	ft_strncmp.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_putchar_fd.c \
	ft_putnbr_fd.c \
	ft_strcmp.c \
	ft_strncpy.c \
	ft_isalpha.c \
	ft_memcpy.c \
	ft_putendl.c \
	ft_putstr.c \
	ft_strcpy.c \
	ft_tolower.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strdup.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_itoa.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstadd.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_islower.c \
	ft_isupper.c \
	ft_isspace.c \
	ft_swap.c \
	ft_putaddr.c \
	ft_itoa_base.c \
	ft_putwchar.c \
	ft_putaddr_fd.c
OBJDIR		:= obj
OBJS		:= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

#### End of files definition section ####

#### Start of rules section ####

.PHONY: all clean fclean re norm

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	$(QUIET)$(ECHO) "Linking the library"
	$(QUIET)$(AR) $(ARFLAGS) $@ $(OBJS)
	$(QUIET)$(ECHO) "Indexing the library"
	$(QUIET)$(RANLIB) $@
	$(QUIET)$(ECHO) "Done."

$(OBJDIR):
	$(QUIET)$(MKDIR) $(MKDIRFLAGS) $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(QUIET)$(ECHO) "Compiling $<"
	$(QUIET)$(CC) $(CFLAGS) -I$(INCLUDESDIR) -c $< -o $@

clean:
	$(QUIET)$(ECHO) "Cleaning the objects"
	$(QUIET)$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(QUIET)$(ECHO) "Deleting the library"
	$(QUIET)$(RM) $(RMFLAGS) $(NAME) $(OBJDIR)

re: fclean all

norm:
	$(QUIET)$(ECHO) "Checking Norm 101"
	$(QUIET)$(NORM) $(SRCDIR)/$(SRC) $(INCLUDESDIR)/*.h

gpush: fclean
	$(QUIET) git add *
	$(QUIET) git commit -m "quick push"
	$(QUIET) git push
