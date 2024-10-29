#defines what compiler to use
CC = cc

#define compile flags
CFLAGS = -Wall -Wextra -Werror -std=c99

#list all the files using ssources
SOURCES = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c

#
OBJECTS = $(SOURCES:.c=.o)
#creates an executable with a name
TARGET = program

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -f $(TARGET) $(OBJECTS) core
