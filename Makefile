CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -lm

TARGET = test
SOURCE = main.c

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

.PHONY: all clean
