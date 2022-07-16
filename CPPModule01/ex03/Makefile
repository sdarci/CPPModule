NAME = Humans
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SRC = HumanA.cpp    HumanB.cpp   Weapon.cpp    main.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) Makefile
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all fclean re