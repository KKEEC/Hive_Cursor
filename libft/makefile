#defines what compiler to use
CC = cc

#define compile flags
CFLAGS = -Wall -Wextra -Werror 

#list all the files using ssources
SOURCES = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c

#
OBJECTS = $(SOURCES:.c=.o)
#creates an executable with a name
TARGET = program

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -f $(TARGET) $(OBJECTS) core
