CC=gcc
CFLAGS= -Wall -pedantic -Wextra

all: first second

first: syscall.c
	$(CC) $(CFLAGS) -DFIRST syscall.c -o first

second: syscall.c
	$(CC) $(CFLAGS) -DSECOND syscall.c -o second
