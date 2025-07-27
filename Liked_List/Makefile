CC = gcc
CFLAGS = -Wall -Wextra

SRC = main.c linked_list.c
OBJ = $(SRC:.c=.o)
TARGET = list

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c linked_list.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)
