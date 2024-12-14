# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 01:57:30 by mel-bouh          #+#    #+#              #
#    Updated: 2024/12/09 02:10:51 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
FLAGS = -Wall -Wextra -Werror
FILES = Contact.cpp PhoneBook.cpp Utils.cpp Main.cpp
OBJ = $(FILES:.cpp=.o)
NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(FILES)
	$(CXX) $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re
