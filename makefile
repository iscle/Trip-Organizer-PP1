CFLAGS = -w -Wall -Wextra -g -Wundef -Wshadow -Wfloat-equal -Wunreachable-code -Os
DLIBS = -lm
OUT = tripo
CC = gcc
SOURCES = main.c logic/utils/utils.c logic/menu/menu.c logic/functions/functions.c model/list/list.c model/destination/destination.c
OBJECTS = $(SOURCES:.c=.o)

all: $(OUT) clean_o

$(OUT): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(OUT) $(DLIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean_o:
	rm $(OBJECTS)

clean:
	rm $(OBJECTS) $(OUT)
