.PHONY: all clean

PROGS=vador
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< -lm 

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s
