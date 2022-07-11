# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdarci <sdarci@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 16:57:16 by sdarci            #+#    #+#              #
#    Updated: 2022/07/11 15:39:36 by sdarci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

C				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98 -I.

NAME			= megaphone

all:			$(NAME)

$(NAME):		$(OBJS)
				$(C) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test