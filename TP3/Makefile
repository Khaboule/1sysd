.PHONY: all clean Makefile

PROGS=calc fib
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

%.S: %
	objdump -d $< > $@

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s *.S
