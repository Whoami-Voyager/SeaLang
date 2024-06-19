CC = gcc
CFLAGS = -Iinclude
SRC = src/main.c src/calculator.c
OBJ = $(SRC:.c=.o)
TARGET = calculator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
