#
# Makefile for managing the build of the project
# Author : Jongho Lee <mikejhlee04@gmail.com>
#

# ====== Variables ======
CC = gcc
#	-Wall : give verbose compiler warnings
#	-g : compile with debugging info
CFLAGS = -g -Wall

SRC := main.c
TRGT := a.out

# ====== Default building procedure ======
default:
	$(CC) $(CFLAGS) -o $(TRGT) $(SRC)

clean:
	rm -vf "$(TRGT)"

.PHONY: clean
